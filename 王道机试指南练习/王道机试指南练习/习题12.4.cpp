//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
///*coincidengce:
//Find a longest common subsequence of two strings.
//Lengths of strings do not exceed 100*/
//int main()
//{
//	string str1, str2;
//	while (cin>>str1>>str2)
//	{
//		int n = str1.size() + 1, m = str2.size() + 1;
//		int** dp = new int* [n];
//		for (int i = 0; i < n; i++)
//		{
//			dp[i] = new int[m];
//			for (int j = 0; j < m; j++)
//			{
//				if (i == 0 || j == 0)
//				{
//					dp[i][j] = 0;
//					continue;
//				}
//				if (str1[i - 1] == str2[j - 1])
//					dp[i][j] = dp[i - 1][j - 1] + 1;
//				else
//					dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
//			}
//		}
//		cout << dp[n - 1][m - 1] << endl;
//		for (int k = 0; k < n; k++)
//			delete[] dp[k];
//		delete[] dp;
//	}
//	return 0;
//}