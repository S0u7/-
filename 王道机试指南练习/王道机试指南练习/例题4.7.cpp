//#include<iostream>
//using namespace std;
//#include<string>
///*Oulipo ͳ���ַ���ƥ�����*/
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
//		//text.find(pat);//find����������KMP�㷨ʵ�ֵ�
//		int pos = KMP_Search_2(text, pat);
//		cout << pos << endl;
//	}
//	return 0;
//}