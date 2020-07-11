//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
///*最长上升子序列和 1 <= N <= 1000*/
//int LIS(int*& arr, int& n)//动态规划O(n^2)
//{
//	int* dp = new int[n];
//	int ans = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		dp[i] = arr[i];
//		for (int j = 0; j < i; j++)
//			if(arr[i] > arr[j])
//				dp[i] = max(dp[i], dp[j] + arr[i]);
//		ans = max(ans, dp[i]);
//	}
//	return ans;
//}
//int main()
//{
//	int n;
//	while (cin>>n)
//	{
//		int* arr = new int[n];
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//		//cout << LIS(arr, n) << endl;
//		delete[] arr;
//	}
//	return 0;
//}