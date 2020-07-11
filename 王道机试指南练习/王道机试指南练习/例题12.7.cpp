//#include<iostream>
//#include<algorithm>
//using namespace std;
///*点菜问题，报销总额1 <= C <= 1000 菜品数量1 <= N <= 100*/
////#define max(a,b) (a>b?a:b)
//int main()
//{
//	int C, N;
//	while (cin>>C>>N)
//	{
//		int* P = new int[N];//价格
//		int* V = new int[N];//评价
//		for (int i = 0; i < N; i++)
//			cin >> P[i] >> V[i];
//
//		//dp数组表示点第i个菜时，共获得的最高评价
//		int* dp = new int[C + 1];
//		//base case
//		for (int j = 0; j <= C; j++)
//			dp[j] = 0;
//		//状态转移：选 点第i个菜/不点第i个菜时，对应评价最高的
//		for (int i = 0; i < N; i++)
//			for (int j = C; j >= P[i]; j--)//从 什么也没点开始 往 报销资金不够 递推
//				dp[j] = max(dp[j], dp[j - P[i]] + V[i]);
//
//		cout << dp[C] << endl;
//		delete[] P, V, dp;
//	}
//	return 0;
//}