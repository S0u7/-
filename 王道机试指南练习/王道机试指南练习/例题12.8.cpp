//#include<iostream>
//using namespace std;
//#define min(a, b) (a < b ? a : b)
///*piggy-bank��*/
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
//		//dp[j]��ʾ����i����Ǯ�Һ�ʣ�µ�j�ռ��ܴ��Ǯ����Сֵ
//		int* dp = new int[space + 1];
//		//base case����ʲôӲ��Ҳû����ʱ��j�ռ��ܴ�����޿��ܶ��Ǯ
//		for (int j = 1; j <= space; j++)
//			dp[j] = 0xfffffff;
//		dp[0] = 0;//����0�ռ�ֻ�ܴ��0
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