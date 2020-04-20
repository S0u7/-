//#include<iostream>
//using namespace std;
///*数字串(数组)匹配*/
//int* getNext_pro(int* pattern,int M)//next数组改进
//{/*pattern:@ a b  a b  @ = -1:通配
//	  next: -1 0 -1 0*/
//	int* next_pro = new int[M];
//	int j = 0;
//	next_pro[0] = -1;
//	int t = next_pro[j];//t位于j前一次位(next)
//	while (j < M )
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
//int KMP_Search_once(int* text, int* pattern,int N,int M)
//{
//	int* next_pro = getNext_pro(pattern,M);//只查一次匹配位置时用改进next更高效
//	int i = 0;//文本串指针
//	int j = 0;//模式串指针
//	while (i < N && j < M )
//	{//注意string.size返回的是无符号数，与下面的j = -1时冲突
//		if (j == -1 || text[i] == pattern[j])
//		{
//			i++;
//			j++;
//		}
//		else//失配
//			j = next_pro[j];
//	}
//	if (j == M )
//		return i - M +1;
//	else
//		return -1;
//}
//
//int main()
//{
//	int T, N, M;
//	int* text, *pat;
//	cin >> T;
//	while(T--)
//	{
//		cin >> N >> M;
//		text = new int[N];
//		pat = new int[M];
//		for (int i = 0; i < N; i++)
//			cin >> text[i];
//		for (int j = 0; j < M; j++)
//			cin >> pat[j];
//		int pos = KMP_Search_once(text, pat,N,M);
//		cout << pos << endl;
//	}
//	return 0;
//}