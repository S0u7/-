//#include<iostream>
//#include<algorithm>
//using namespace std;
///*有若干张邮票，要求从中选取最少的邮票张数凑成一个给定的总值*/
//int main()
//{
//	int M, N;
//	while (cin>>M>>N)
//	{
//		int* P = new int[N];//面值
//		for (int i = 0; i < N; i++)
//			cin >> P[i];
//
//		//dp数组表示将第i个邮票加入集合后 凑总量为j的面额 所需要的最少邮票数量
//		int* dp = new int[M + 1];
//		//base case
//		for (int j = 0; j <= M; j++)
//			dp[j] = M;
//		dp[0] = 0;
//		//状态转移
//		for (int i = 0; i < N; i++)
//			for (int j = M; j >= P[i]; j--)
//				dp[j] = min(dp[j], dp[j - P[i]] + 1);
//		if (dp[M] == M)//说明所有邮票加起来也凑不出来
//			dp[M] = 0;
//		cout << dp[M] << endl;
//		delete[] P, dp;
//	}
//	return 0;
//}