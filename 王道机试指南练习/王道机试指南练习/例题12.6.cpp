//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
///*common subsequence*/
//int LCS(string& X, string& Y)
//{
//	int num1 = X.size() + 1, num2 = Y.size() + 1;
//	//dp��ʾ�ֱ���X[i]��Y[j]��βʱ(i ��ʾ�ڼ����ַ�,�����ַ������±�)����������г���
//	int** dp = new int* [num1];
//	for (int i = 0; i < num1; i++)
//	{
//		dp[i] = new int[num2];
//		//base case
//		dp[i][0] = 0;
//		for (int j = 0; j < num2; j++)
//			dp[0][j] = 0;
//	}
//	for (int i = 1; i < num1; i++)
//	{
//		for (int j = 1; j < num2; j++)
//		{
//			//״̬ת�Ʒ���
//			if (X[i - 1] == Y[j - 1])
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//			else
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//		}
//	}
//	return dp[num1 - 1][num2 - 1];
//}
//
//int main()
//{
//	string X, Y;
//	while (cin>>X>>Y)
//	{
//		cout << LCS(X, Y) << endl;
//	}
//	return 0;
//}