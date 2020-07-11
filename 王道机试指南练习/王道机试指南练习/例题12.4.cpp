//#include<iostream>
//#include<algorithm>
//using namespace std;
///*拦截导弹
//最大非增子序列*/
//int main()
//{
//	int n, ans;
//	while (cin >> n)
//	{
//		int* arr = new int[n];
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//		int* dp = new int[n];
//		fill(dp, dp + n, 1);
//		ans = 1;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < i; j++)
//				if (arr[j] >= arr[i])
//					dp[i] = max(dp[i], dp[j] + 1);
//			ans = max(ans, dp[i]);
//		}
//		cout << ans << endl;
//		delete[] arr, dp;
//	}
//	return 0;
//}