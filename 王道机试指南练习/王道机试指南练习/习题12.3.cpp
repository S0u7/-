//#include<iostream>
//#include<algorithm>
//using namespace std;
///*合唱队形,最少让几个人出列，剩下的人成队形
//T1 < T2 < … < Ti , Ti > Ti+1 > … > TK (1 <= i <= K)
//分别计算最长递增子序列和最长递减子序列个数*/
//int main()
//{
//	int n, ans;
//	while (cin >> n)
//	{
//		int* arr = new int[n];
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//		//dp 代表以arr[i]结尾时最长递增/递减子序列长度
//		int* dp_as = new int[n];
//		fill(dp_as, dp_as + n, 1);
//		int* dp_ds = new int[n];
//		fill(dp_ds, dp_ds + n, 1);
//		//计算以每个元素结尾时最长递增子序列长度
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < i; j++)
//			{
//				if (arr[j] < arr[i])
//					dp_as[i] = max(dp_as[i], dp_as[j] + 1);
//			}
//		}
//		//计算以每个元素开头时最长递减子序列长度
//		for (int i = n -1; i >= 0; i--)
//		{
//			for (int j = i + 1; j < n; j++)
//			{
//				if (arr[j] < arr[i])
//					dp_ds[i] = max(dp_ds[i], dp_ds[j] + 1);
//			}
//		}
//		ans = dp_as[0] + dp_ds[0] - 1;
//		for (int k = 1; k < n; k++)
//			ans = max(ans, dp_as[k] + dp_ds[k] - 1);
//
//		cout << n - ans << endl;
//		delete[] arr, dp_as, dp_ds;
//	}
//	return 0;
//}