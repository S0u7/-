//#include<iostream>
//#include<algorithm>
//using namespace std;
///*����������Ʊ��Ҫ�����ѡȡ���ٵ���Ʊ�����ճ�һ����������ֵ*/
//int main()
//{
//	int M, N;
//	while (cin>>M>>N)
//	{
//		int* P = new int[N];//��ֵ
//		for (int i = 0; i < N; i++)
//			cin >> P[i];
//
//		//dp�����ʾ����i����Ʊ���뼯�Ϻ� ������Ϊj����� ����Ҫ��������Ʊ����
//		int* dp = new int[M + 1];
//		//base case
//		for (int j = 0; j <= M; j++)
//			dp[j] = M;
//		dp[0] = 0;
//		//״̬ת��
//		for (int i = 0; i < N; i++)
//			for (int j = M; j >= P[i]; j--)
//				dp[j] = min(dp[j], dp[j - P[i]] + 1);
//		if (dp[M] == M)//˵��������Ʊ������Ҳ�ղ�����
//			dp[M] = 0;
//		cout << dp[M] << endl;
//		delete[] P, dp;
//	}
//	return 0;
//}