//#include<iostream>
//using namespace std;
//#define min(a, b) (a < b ? a : b)
///*piggy-bank：*/
//int main()
//{
//	int case_num, n;
//	cin >> case_num;
//	while (case_num--)
//	{
//		int empty_weight, full_weight;
//		cin >> empty_weight >> full_weight;
//		int space = full_weight - empty_weight;
//		
//		cin >> n;
//		int* value = new int[n];
//		int* weight = new int[n];
//		for (int i = 0; i < n; i++)
//			cin >> value[i] >> weight[i];
//
//		//dp[j]表示存入i面额的钱币后，剩下的j空间能存放钱的最小值
//		int* dp = new int[space + 1];
//		//base case：当什么硬币也没放入时，j空间能存放无限可能多的钱
//		for (int j = 1; j <= space; j++)
//			dp[j] = 0xfffffff;
//		dp[0] = 0;//但是0空间只能存放0
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = weight[i]; j <= space; j++)
//				dp[j] = min(dp[j], dp[j - weight[i]] + value[i]);
//		}
//		if (dp[space] == 0xfffffff)
//			cout << "This is impossible." << endl;
//		else
//			cout << "The minimum amount of money in the piggy-bank is " 
//			<< dp[space] << "." << endl;
//		delete[] value, weight, dp;
//	}
//	return 0;
//}