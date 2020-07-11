//#include<iostream>
//#include<algorithm>
//using namespace std;
///*最大子矩阵:矩阵的大小定义为矩阵中所有元素的和,找到最大的非空大小至少是1 * 1子矩阵
//0 < N <= 100,矩阵中整数的范围都在[-127, 127]
//算法：假设最大子矩阵在原矩阵的第i行到第j行
//1、当i == j时，最大子矩阵和 退化成 求第i行的最大连续子序列和
//2、当i != j时，最大子矩阵和 = 把第i行到第j行的对应元素相加得到的序列，
//	求最大连续子序列和。时间复杂度O(n^3)*/
//int max_subsquence(int*& arr, int& n)
//{
//	int dp = arr[0];
//	int ans = dp;
//	for (int i = 1; i < n; i++)
//	{
//		dp = max(arr[i], dp + arr[i]);
//		ans = max(ans, dp);
//	}
//	return ans;
//}
//
//int max_submatrix(int**& mat, int& n)
//{
//	int** dp = new int*[n];//二维数组 dp[i][j] 表示第i行到第j行所有元素的最大子矩阵和
//	for (int i = 0; i < n; i++)
//		dp[i] = new int[n];
//
//	int ans = max_subsquence(mat[0], n);
//	int* temp = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{	//状态转移
//			if (i == j)
//				dp[i][j] = max_subsquence(mat[i], n);
//			else
//			{
//				fill(temp, temp + n, 0);
//				for (int t = 0; t < n; t++)
//					for (int k = i; k <= j; k++)
//						temp[t] += mat[k][t];
//		
//				dp[i][j] = max_subsquence(temp, n);
//			}
//			ans = max(ans, dp[i][j]);
//		}
//	}
//	return ans;
//}
//
//int main()
//{
//	int n;
//	while (cin>>n)
//	{
//		int** mat = new int*[n];
//		for (int i = 0; i < n; i++)
//		{
//			mat[i] = new int[n];
//			for (int j = 0; j < n; j++)
//				cin >> mat[i][j];
//		}
//		cout << max_submatrix(mat, n) << endl;
//
//		for (int i = 0; i < n; i++)
//			delete[] mat[i];
//		delete[] mat;
//	}
//	return 0;
//}