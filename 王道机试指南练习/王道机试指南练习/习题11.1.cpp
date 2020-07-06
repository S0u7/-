//#include<iostream>
//#include<string>
//using namespace std;
///*找出直系亲属,0<=n<=26组亲属关系,0<m<50个问题*/
//int main()
//{
//	int n, m;
//	string input, question;
//	char child[26];
//	while (cin>>n>>m)
//	{
//		for (int i = 'A'; i <= 'Z'; i++)
//			child[i - 'A'] = '@';//初始每个字母没有孩子
//
//		for (int i = 0; i < n; i++)//输入关系
//		{
//			cin >> input;
//			child[input[1] - 'A'] = input[0];
//			child[input[2] - 'A'] = input[0];
//		}
//		for (int i = 0; i < m; i++)//输入判断
//		{
//			cin >> question;
//			int generation, j;
//			for (j = 0; j <= 1; j++)//判断
//			{
//				char x = question[j];
//				generation = 0;
//				while (x != question[1-j])
//				{
//					if (x == '@')
//					{
//						generation = 0;
//						break;
//					}
//					x = child[x - 'A'];
//					generation++;
//				}
//				if (generation != 0)//已经找出亲属关系
//					break;
//			}//j只有三种情况，j==0前面是长辈j==1后面是长辈j==2没有直系亲属关系
//			if (generation == 1)
//				cout << (j == 0 ? "parent" : "child") << endl;
//			else if (generation >= 2)
//			{
//				for (int i = 0; i < generation-2; i++)
//					cout << "great-";
//				cout << (j == 0 ? "grandparent" : "grandchild") << endl;
//			}
//			else
//				cout << "-" << endl;
//		}
//	}
//	return 0;
//}
///*
//10 10
//EKL
//LPY
//YQR
//RBG
//GJD
//DWT
//TCA
//AXZ
//ZSN
//NIF
//DF
//LX
//SI
//BG
//GJ
//WK
//DJ
//RW
//TS
//QI
//*/