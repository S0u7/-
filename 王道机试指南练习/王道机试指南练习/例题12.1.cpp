//#include<iostream>
//using namespace std;
///*N��¥����¥���⣺һ�ο��������׻�һ�ף����ж�������¥��ʽ,Ҫ����÷ǵݹ�(1<=N<90)
//���Ȿ����һ��쳲�������������*/
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