//#include<iostream>
//using namespace std;
///*N阶楼梯上楼问题：一次可以走两阶或一阶，问有多少种上楼方式,要求采用非递归(1<=N<90)
//此题本质是一个斐波那契数列问题*/
//int main()
//{
//	int n;
//	while (cin>>n)
//	{
//		long long* dp = new long long[n + 1];
//		dp[0] = 1;
//		dp[1] = 1;
//		if (n == 1)
//			cout << 1 << endl;
//		else
//		{
//			for (int i = 2; i <= n; i++)
//				dp[i] = dp[i - 1] + dp[i - 2];
//			cout << dp[n] << endl;
//		}
//		delete[] dp;
//	}
//	return 0;
//}