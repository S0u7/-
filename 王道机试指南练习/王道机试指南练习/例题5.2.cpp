//#include<iostream>
//using namespace std;
//#include<queue>
///*Լɪ������No.2*/
//int main()
//{
//	int n, p, m;
//	queue<int> Q;
//	while (cin>>n>>p>>m)
//	{
//		if (n == 0 && p == 0 && m == 0)
//			break;
//		for (int i = 1; i <= n; i++)//����1 - n
//			Q.push(i);
//		for (int j = 1; j < p; j++)//�ҵ�p
//		{
//			Q.push(Q.front());
//			Q.pop();
//		}
//		while (!Q.empty())
//		{
//			for (int k = 1; k < m; k++)//�ҵ�m-1
//			{
//				Q.push(Q.front());
//				Q.pop();
//			}
//			if (Q.size() == 1)
//				cout << Q.front();
//			else
//				cout << Q.front() << ",";
//			Q.pop();
//		}
//		cout << endl;
//	}
//	return 0;
//}