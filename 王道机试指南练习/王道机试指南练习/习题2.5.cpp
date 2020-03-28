//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
///*
//HelloWorld for U 
//*/
//int main()
//{
//	string str0,str1,str2,str3;
//
//	int n1, n2, sub, min;
//
//	while (cin>>str0)
//	{
//		min = 100;
//		for (int i = 4; i < str0.length()+2; i+=2)
//		{
//			sub = str0.length() + 2 - i - (i / 2);
//			if ( sub >= 0 && sub <= min )
//			{
//				min = sub;
//				n1 = i / 2;
//				n2 = str0.length()+2 - i;
//			}
//		}
//
//		str1 = str0.substr(0, n1 - 1);
//		str2 = str0.substr(n1 - 1, n2);
//		str3 = str0.substr(n1+n2-1);
//		reverse(str3.begin(), str3.end());
//
//		for (int i = 0; i < n1-1; i++)
//		{
//			cout << str1[i];
//			for (int j = 0; j < n2-2; j++)
//			{
//				cout << " ";
//			}
//			cout << str3[i] << endl;
//		}
//		
//		for (int k = 0; k < n2; k++)
//		{
//			cout << str2[k];
//		}
//	}
//	return 0;
//}