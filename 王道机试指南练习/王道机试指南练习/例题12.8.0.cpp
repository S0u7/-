//#include<iostream>
//using namespace std;
//#define max(a, b) (a > b ? a : b)
///*����ϵ�й��¡������ʼ�I
//��1. 1 <= n <= 100
//����2. 0 <= a,b <= 100000
//����3. 1 <= m <= 100000*/
//int main()
//{
//	int n, m;
//	while (cin>>n)
//	{
//		int* happiness = new int[n];
//		int* calorie = new int[n];
//		for (int i = 0; i < n; i++)
//			cin >> happiness[i] >> calorie[i];
//		cin >> m;
//		//dp�����ʾ �Ե�i��ʳ��ʱ��ʣ��j��·����Ի�õ�����Ҹ���
//		int* dp = new int[m + 1];
//		for (int j = 0; j <= m; j++)
//			dp[j] = 0;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = calorie[i]; j <= m; j++)
//				dp[j] = max(dp[j], dp[j - calorie[i]] + happiness[i]);
//		}
//		cout << dp[m] << endl;
//		delete[] happiness, calorie, dp;
//	}
//	return 0;
//}