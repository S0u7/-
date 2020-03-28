//#include<iostream>
//using namespace std;
///* 叠筐问题
//输入是一个个的三元组，分别是，外筐尺寸n（n为满足1≤n≤79的奇整数），中心花色字符，外筐花色字符，后二者都为ASCII可见字符,输入数据有多组。
//
//输出叠在一起的筐图案，中心花色与外筐花色字符从内层起交错相叠，多筐相叠时，最外筐的角总是被打磨掉。叠筐与叠筐之间应有一行间隔。
//*/
//
//int	main()
//{
//	int n;
//	char a, b;
//	int mark[85][85];
//	bool first = 1;
//	while (cin >> n >> a >> b)
//	{
//		if (first)
//		{
//			first = 0;
//		}
//		else
//		{
//			cout << endl;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				mark[i][j] = 0;
//			}
//		}
//		bool flag=1;
//
//		int mid = (n + 1) / 2;
//
//		for (int i = 0; i < mid; i++)
//		{
//			if (flag == 1)
//			{
//				for (int j = 0; j < n; j++)
//				{
//					mark[mid - 1 + i][j] = 1;
//					mark[j][mid - 1 + i] = 1;
//				}
//				for (int k = 0; k < n; k++)
//				{
//					mark[mid - 1 - i][k] = 1;
//					mark[k][mid - 1 - i] = 1;
//				}
//				flag = 0;
//			}
//			else
//			{
//				for (int j = 0; j < n; j++)
//				{
//					mark[mid - 1 + i][j] = 2;
//					mark[j][mid - 1 + i] = 2;
//				}
//				for (int k = 0; k < n; k++)
//				{
//					mark[mid - 1 - i][k] = 2;
//					mark[k][mid - 1 - i] = 2;
//				}
//				flag = 1;
//			}
//		}
//		mark[0][0] = 0;
//		mark[0][n - 1] = 0;
//		mark[n - 1][0] = 0;
//		mark[n - 1][n - 1] = 0;
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (mark[i][j] == 0)
//				{
//					cout << " ";
//				}
//				else if (mark[i][j] == 1)
//				{
//					cout << a;
//				}
//				else
//				{
//					cout << b;
//				}
//			}
//			cout << endl;
//		}
//	}
//	
//	return 0;
//}