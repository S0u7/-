//#include<iostream>
//using namespace std;
//#include<string>
//#include<cstring>
//#include<list>
///*  KMP算法:利用前面匹配的信息，使文本串指针不回溯，减少比较次数。
//    求next数组属于递推算法:由前面状态得到后面状态，所以扫描模式串结束时就得到next数组
//	*/
////最大前缀子串自身最长匹配长度
//int* calculateNext(string pattern)
//{/*pattern: a b a b
//	  next: x 0 1 2*/
//	int* maxMatchLength = new int[pattern.size()];//前缀子串最大自身匹配数
//	maxMatchLength[0] = 0;
//	int point = 0;
//	for (unsigned int i = 1; i < pattern.size(); i++)
//	{
//		while (point > 0 && pattern[point] != pattern[i])
//			point = maxMatchLength[point - 1];
//		if (pattern[point] == pattern[i])
//			point++;
//		maxMatchLength[i] = point;
//	}
//	return maxMatchLength;
//}
//list<int> KMP_Search(string text, string pattern)
//{
//	list<int> result;
//	int* maxMatchLength = calculateNext(pattern);//计算前缀子串自身最大匹配长度
//	int point = 0;//模式串指针
//	for (unsigned int i = 0; i < text.size(); i++)
//	{
//		while (point > 0 && pattern[point] != text[i])
//	//失配时，模式串指针退到此时前缀子串自身最大匹配长度位置(因为数组从0开始)
//			point = maxMatchLength[point - 1];
//		if (pattern[point] == text[i])
//			point++;
//		if (point == pattern.size())
//		{
//			result.push_back(i - pattern.size() + 1);//此时i还没后移，所以要+1
//			point = maxMatchLength[point - 1];
//		}
//	}
//	return result;
//}
//
///* @ a b a b
//	 @ a b a b 
//	 模式串自身错开一位比较，利用递推可以得到自身的最大前后缀长度*/
//int* getNext(string pattern)
//{	/*pattern:@ a b a b  @ = -1:通配
//		 next: -1 0 0 1 */
//	int* next = new int[pattern.size()];
//	/*C语言对于数组引用不进行任何边界检查，因此
//	包括字符串、指针、数组的操作越界，是不会报错的
//	除非越界访问到了不可读的内存地址*/
//	//for (unsigned int k = 0; k < pattern.size(); k++)
//	//	cout << next[k] << " ";
//	//cout << "next[200]=" << next[200] << endl;
//	int j = 0;
//	next[0] = -1;
//	int t = next[j];
//	while (j < pattern.size())
//	{
//		if (t == -1 || pattern[t] == pattern[j])
//		{
//			j++;
//			t++;
//			next[j] = t;//匹配时next就在前一次基础上+1
//		}
//		else//不匹配时就回到上一次
//			t = next[t];
//	}
//	return next;
//}
//list<int>* KMP_Search_2(string text, string pattern)
//{
//	list<int>* result=new list<int>;
//	int* next = getNext(pattern);
//	//int* next = getNext_pro(pattern);//只查一次匹配位置时可以用改进next 
//	int i = 0;//文本串指针
//	int j = 0;//模式串指针
//	while (i < text.size())
//	{
//		if (j == -1 || text[i] == pattern[j])
//		{
//			i++;
//			j++;
//		}
//		else//失配
//			j = next[j];
//		if (j == pattern.size())
//		{
//			result->push_back(i - pattern.size());
//			//此时i 和 j都后移了，都退一位查找模式串匹配的所有位置
//			j = next[j];
//		}
//	}
//	return result;
//}
//
//int* getNext_pro(string pattern)//next数组改进
//{/*pattern:@ a b  a b  @ = -1:通配
//	  next: -1 0 -1 0*/
//	int* next_pro = new int[pattern.size()];
//	int j = 0;
//	next_pro[0] = -1;
//	int t = next_pro[j];//t位于j前一次位(next)
//	while (j < pattern.size())
//	{
//		if (t == -1 || pattern[t] == pattern[j])
//		{
//			j++;
//			t++;
//			if (pattern[j] != pattern[t])//匹配，且下个字符与上个字符不同，可能解决失配
//				next_pro[j] = t;//直接在上个next基础上+1
//			else//匹配，但下个字符与上个字符相同时，仍无法解决失配
//				next_pro[j] = next_pro[t];
//		}
//		else
//			t = next_pro[t];
//	}
//	return next_pro;
//}
//int KMP_Search_once(string text, string pattern)
//{
//	int* next_pro = getNext_pro(pattern);//只查一次匹配位置时用改进next更高效
//	int i = 0;//文本串指针
//	int j = 0;//模式串指针
//	while (i < text.size() && j < int(pattern.size()))
//	{//注意string.size返回的是无符号数，与下面的j = -1时冲突
//		if (j == -1 || text[i] == pattern[j])
//		{
//			i++;
//			j++;
//		}
//		else//失配
//			j = next_pro[j];
//	}
//	if (j == pattern.size())
//		return i - pattern.size();
//	else
//		return -1;
//}
//
//int** getDP(string pattern)
//{
//	int** DP = new int*[pattern.size()];//二维数组dp[状态j][字符c]
//	for (int k = 0; k < pattern.size(); k++)
//	{
//		DP[k] = new int[256];//pattern.size行 * 256列
//		memset(DP[k], 0, 256*sizeof(int));//清零操作
//	}
//	DP[0][pattern[0]] = 1;
//	int x = 0;//影子状态
//	for (int j = 1; j < pattern.size(); j++)
//	{
//		for (int c = 0; c < 256; c++)
//		{
//			DP[j][c] = DP[x][c];
//		}
//		DP[j][pattern[j]] = j + 1;//字符匹配，到达下个状态
//		x = DP[x][pattern[j]];//x始终是j前一个状态
//	}
//	return DP;
//}
//int KMP_Search_dynamic(string text, string pattern)
//{
//	int** dp = getDP(pattern);
//	int j = 0;//状态
//	for (int i = 0; i < text.size(); i++)
//	{
//		j = dp[j][text[i]];
//		if (j == pattern.size())
//			return i - pattern.size() + 1;
//	}
//	return -1;
//}
//
//int main()
//{
//	//string text = "bbababzabbababa";
//	//string pattern = "abab";
//	//cout << pattern[5]<<endl;//访问越界，编译不会出错，但是运行时地址不可读可能出错
//
//	string text = "abcdefg";
//	string pattern = "afa";
//
//	list<int> pos = KMP_Search(text, pattern);
//	for (list<int>::iterator it = pos.begin(); it != pos.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//	pos.clear();
//
//	//用指针
//	//list<int>* pos = KMP_Search_2(text, pattern);
//	//for (list<int>::iterator it = pos->begin(); it != pos->end(); it++)
//	//	cout << *it << " ";
//	//cout << endl;
//	//pos->clear();
//	
//	//改进next数组
//	//int pos = KMP_Search_once(text, pattern);
//	//cout << pos << endl;
//
//	//动态规划思想的KMP算法
//	//int pos = KMP_Search_dynamic(text, pattern);
//	//cout << pos << endl;
//
//	return 0;
//}