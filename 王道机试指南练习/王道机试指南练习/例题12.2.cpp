//#include<iostream>
//#include<algorithm>
//using namespace std;
///*最大非空连续子序列和。
//给出一个整数序列S，其中有N个数，N≤1000000，结果序列和在范围（-2^63,2^63-1）以内*/
//long long max_subsquence(long long*& arr, int& n)
//{
//	//long long* dp = new long long[n];//表示以arr[i]结尾的最长子序列和
//	//dp[0] = arr[0];//base case边界条件
//	//long long ans = dp[0];
//	//for (int i = 1; i < n; i++)
//	//{
//	//	dp[i] = max(arr[i], dp[i - 1] + arr[i]);//状态转移方程
//	//	ans = max(ans, dp[i]);
//	//}
//	long long dp = arr[0];//表示以arr[i]结尾的最长子序列和
//	long long ans = dp;//base case边界条件
//	for (int i = 1; i < n; i++)
//	{
//		dp = max(arr[i], dp + arr[i]);//状态转移方程
//		ans = max(ans, dp);
//	}
//	return ans;
//}
//
//int main()
//{
//	int n;
//	while (cin>>n)
//	{
//		long long* arr = new long long[n];
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//		cout << max_subsquence(arr, n) << endl;
//		delete[] arr;
//	}
//	return 0;
//}