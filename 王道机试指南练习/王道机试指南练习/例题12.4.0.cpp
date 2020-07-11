//#include<iostream>
//#include<algorithm>
//using namespace std;
///*最长递增子序列1 <= N <= 1000*/
//int LIS(int*& arr, int& n)//动态规划O(n^2)
//{
//	int* dp = new int[n];
//	fill(dp, dp + n, 1);
//	int ans = 1;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//			if(arr[i] > arr[j])
//				dp[i] = max(dp[i], dp[j] + 1);
//		ans = max(ans, dp[i]);
//	}
//	return ans;
//}
//int card(int*& arr, int& n)//蜘蛛纸牌算法(二分查找法)O(nlogn)
//{
//	int* top = new int[n];//每个牌堆顶部
//	int piles = 0;//牌堆数
//	for (int i = 0; i < n; i++)
//	{
//		int poker = arr[i];//当前的牌
//		//二分查找适合的牌堆
//		int left = 0, right = piles;
//		while (left < right)
//		{
//			int mid = left + (right - left) / 2;
//			if (top[mid] >= poker)
//				right = mid;
//			else
//				left = mid + 1;
//		}
//		if (left == piles)//没找到合适的牌堆，就新建一个堆
//				piles++;
//		top[left] = poker;//将牌放在牌堆顶部
//	}
//	return piles;//牌堆数就是最大递增子序列数
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
//		cout << card(arr, n) << endl;
//		delete[] arr;
//	}
//	return 0;
//}