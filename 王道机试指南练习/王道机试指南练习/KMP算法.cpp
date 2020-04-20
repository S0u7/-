//#include<iostream>
//using namespace std;
//#include<string>
//#include<cstring>
//#include<list>
///*  KMP�㷨:����ǰ��ƥ�����Ϣ��ʹ�ı���ָ�벻���ݣ����ٱȽϴ�����
//    ��next�������ڵ����㷨:��ǰ��״̬�õ�����״̬������ɨ��ģʽ������ʱ�͵õ�next����
//	*/
////���ǰ׺�Ӵ������ƥ�䳤��
//int* calculateNext(string pattern)
//{/*pattern: a b a b
//	  next: x 0 1 2*/
//	int* maxMatchLength = new int[pattern.size()];//ǰ׺�Ӵ��������ƥ����
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
//	int* maxMatchLength = calculateNext(pattern);//����ǰ׺�Ӵ��������ƥ�䳤��
//	int point = 0;//ģʽ��ָ��
//	for (unsigned int i = 0; i < text.size(); i++)
//	{
//		while (point > 0 && pattern[point] != text[i])
//	//ʧ��ʱ��ģʽ��ָ���˵���ʱǰ׺�Ӵ��������ƥ�䳤��λ��(��Ϊ�����0��ʼ)
//			point = maxMatchLength[point - 1];
//		if (pattern[point] == text[i])
//			point++;
//		if (point == pattern.size())
//		{
//			result.push_back(i - pattern.size() + 1);//��ʱi��û���ƣ�����Ҫ+1
//			point = maxMatchLength[point - 1];
//		}
//	}
//	return result;
//}
//
///* @ a b a b
//	 @ a b a b 
//	 ģʽ�������һλ�Ƚϣ����õ��ƿ��Եõ���������ǰ��׺����*/
//int* getNext(string pattern)
//{	/*pattern:@ a b a b  @ = -1:ͨ��
//		 next: -1 0 0 1 */
//	int* next = new int[pattern.size()];
//	/*C���Զ����������ò������κα߽��飬���
//	�����ַ�����ָ�롢����Ĳ���Խ�磬�ǲ��ᱨ���
//	����Խ����ʵ��˲��ɶ����ڴ��ַ*/
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
//			next[j] = t;//ƥ��ʱnext����ǰһ�λ�����+1
//		}
//		else//��ƥ��ʱ�ͻص���һ��
//			t = next[t];
//	}
//	return next;
//}
//list<int>* KMP_Search_2(string text, string pattern)
//{
//	list<int>* result=new list<int>;
//	int* next = getNext(pattern);
//	//int* next = getNext_pro(pattern);//ֻ��һ��ƥ��λ��ʱ�����øĽ�next 
//	int i = 0;//�ı���ָ��
//	int j = 0;//ģʽ��ָ��
//	while (i < text.size())
//	{
//		if (j == -1 || text[i] == pattern[j])
//		{
//			i++;
//			j++;
//		}
//		else//ʧ��
//			j = next[j];
//		if (j == pattern.size())
//		{
//			result->push_back(i - pattern.size());
//			//��ʱi �� j�������ˣ�����һλ����ģʽ��ƥ�������λ��
//			j = next[j];
//		}
//	}
//	return result;
//}
//
//int* getNext_pro(string pattern)//next����Ľ�
//{/*pattern:@ a b  a b  @ = -1:ͨ��
//	  next: -1 0 -1 0*/
//	int* next_pro = new int[pattern.size()];
//	int j = 0;
//	next_pro[0] = -1;
//	int t = next_pro[j];//tλ��jǰһ��λ(next)
//	while (j < pattern.size())
//	{
//		if (t == -1 || pattern[t] == pattern[j])
//		{
//			j++;
//			t++;
//			if (pattern[j] != pattern[t])//ƥ�䣬���¸��ַ����ϸ��ַ���ͬ�����ܽ��ʧ��
//				next_pro[j] = t;//ֱ�����ϸ�next������+1
//			else//ƥ�䣬���¸��ַ����ϸ��ַ���ͬʱ�����޷����ʧ��
//				next_pro[j] = next_pro[t];
//		}
//		else
//			t = next_pro[t];
//	}
//	return next_pro;
//}
//int KMP_Search_once(string text, string pattern)
//{
//	int* next_pro = getNext_pro(pattern);//ֻ��һ��ƥ��λ��ʱ�øĽ�next����Ч
//	int i = 0;//�ı���ָ��
//	int j = 0;//ģʽ��ָ��
//	while (i < text.size() && j < int(pattern.size()))
//	{//ע��string.size���ص����޷��������������j = -1ʱ��ͻ
//		if (j == -1 || text[i] == pattern[j])
//		{
//			i++;
//			j++;
//		}
//		else//ʧ��
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
//	int** DP = new int*[pattern.size()];//��ά����dp[״̬j][�ַ�c]
//	for (int k = 0; k < pattern.size(); k++)
//	{
//		DP[k] = new int[256];//pattern.size�� * 256��
//		memset(DP[k], 0, 256*sizeof(int));//�������
//	}
//	DP[0][pattern[0]] = 1;
//	int x = 0;//Ӱ��״̬
//	for (int j = 1; j < pattern.size(); j++)
//	{
//		for (int c = 0; c < 256; c++)
//		{
//			DP[j][c] = DP[x][c];
//		}
//		DP[j][pattern[j]] = j + 1;//�ַ�ƥ�䣬�����¸�״̬
//		x = DP[x][pattern[j]];//xʼ����jǰһ��״̬
//	}
//	return DP;
//}
//int KMP_Search_dynamic(string text, string pattern)
//{
//	int** dp = getDP(pattern);
//	int j = 0;//״̬
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
//	//cout << pattern[5]<<endl;//����Խ�磬���벻�������������ʱ��ַ���ɶ����ܳ���
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
//	//��ָ��
//	//list<int>* pos = KMP_Search_2(text, pattern);
//	//for (list<int>::iterator it = pos->begin(); it != pos->end(); it++)
//	//	cout << *it << " ";
//	//cout << endl;
//	//pos->clear();
//	
//	//�Ľ�next����
//	//int pos = KMP_Search_once(text, pattern);
//	//cout << pos << endl;
//
//	//��̬�滮˼���KMP�㷨
//	//int pos = KMP_Search_dynamic(text, pattern);
//	//cout << pos << endl;
//
//	return 0;
//}