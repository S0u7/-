//#include<iostream>
//#include<algorithm>
//using namespace std;
///*采药*/
//int main()
//{
//	int T, M;
//	while (cin>>T>>M)
//	{
//		int* time = new int[M];//耗时
//		int* value = new int[M];//价值
//		for (int i = 0; i < M; i++)
//			cin >> time[i] >> value[i];
//
//		//dp数组表示当采第i种药时，剩下时间里获得的最大价值
//		int* dp = new int[T + 1];
//		//base case
//		for (int j = 0; j <= T; j++)
//			dp[j] = 0;
//		//状态转移
//		for (int i = 0; i < M; i++)
//			for (int j = T; j >= time[i]; j--)//从 什么也没采开始 往 时间不够了 递推
//				dp[j] = max(dp[j], dp[j - time[i]] + value[i]);
//
//		cout << dp[T] << endl;
//		delete[] time, value, dp;
//	}
//	return 0;
//}