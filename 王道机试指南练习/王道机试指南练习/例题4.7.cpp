//#include<iostream>
//using namespace std;
//#include<string>
///*Oulipo 统计字符串匹配次数*/
//int* getNext(string pattern)
//{	
//	int* next = new int[pattern.size()];
//	int j = 0;
//	next[0] = -1;
//	int t = next[j];
//	while (j < pattern.size())
//	{
//		if (t == -1 || pattern[t] == pattern[j])
//		{
//			j++;
//			t++;
//			next[j] = t;
//		}
//		else
//			t = next[t];
//	}
//	return next;
//}
//int KMP_Search_2(string text, string pattern)
//{
//	int result=0;
//	int* next = getNext(pattern);
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
//			result++;
//			j = next[j];
//		}
//	}
//	return result;
//}
//int main()
//{
//	int n;
//	string text, pat;
//	cin >> n;
//	while(n--)
//	{
//		cin >> pat >> text ;
//		//text.find(pat);//find函数不是用KMP算法实现的
//		int pos = KMP_Search_2(text, pat);
//		cout << pos << endl;
//	}
//	return 0;
//}