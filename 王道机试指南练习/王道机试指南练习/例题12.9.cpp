//#include<iostream>
//#include<vector>
//using namespace std;
//#define max(a, b) (a > b ? a : b)
///*珍惜现在，感恩生活
//多重背包问题：按二进制组合，转化为0-1背包问题*/
//int main()
//{
//	int case_num, n, m;
//	cin >> case_num;
//	vector<int> newPrice, newWeight;
//	while (case_num--)
//	{
//		cin >> n >> m;
//		int* price = new int[m];
//		int* weight = new int[m];
//		int* amount = new int[m];
//		for (int i = 0; i < m; i++)
//		{
//			cin >> price[i] >> weight[i] >> amount[i];
//			//拆分组合
//			for (int j = 1; j <= amount[i]; j *= 2)
//			{
//				newPrice.push_back(price[i] * j);
//				newWeight.push_back(weight[i] * j);
//				amount[i] -= j;
//			}
//			if (amount[i] > 0)
//			{
//				newPrice.push_back(price[i] * amount[i]);
//				newWeight.push_back(weight[i] * amount[i]);
//			}
//		}
//		int* dp = new int[n + 1];
//		for (int i = 0; i <= n; i++)
//			dp[i] = 0;
//
//		for (unsigned int i = 0; i < newPrice.size(); i++)
//			for (int j = n; j >= newPrice[i]; j--)
//				dp[j] = max(dp[j], dp[j - newPrice[i]] + newWeight[i]);
//
//		cout << dp[n] << endl;
//
//		delete[] price, weight, amount, dp;
//		newPrice.clear();
//		newWeight.clear();
//	}
//	return 0;
//}