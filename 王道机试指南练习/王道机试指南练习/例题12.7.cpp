//#include<iostream>
//#include<algorithm>
//using namespace std;
///*������⣬�����ܶ�1 <= C <= 1000 ��Ʒ����1 <= N <= 100*/
////#define max(a,b) (a>b?a:b)
//int main()
//{
//	int C, N;
//	while (cin>>C>>N)
//	{
//		int* P = new int[N];//�۸�
//		int* V = new int[N];//����
//		for (int i = 0; i < N; i++)
//			cin >> P[i] >> V[i];
//
//		//dp�����ʾ���i����ʱ������õ��������
//		int* dp = new int[C + 1];
//		//base case
//		for (int j = 0; j <= C; j++)
//			dp[j] = 0;
//		//״̬ת�ƣ�ѡ ���i����/�����i����ʱ����Ӧ������ߵ�
//		for (int i = 0; i < N; i++)
//			for (int j = C; j >= P[i]; j--)//�� ʲôҲû�㿪ʼ �� �����ʽ𲻹� ����
//				dp[j] = max(dp[j], dp[j - P[i]] + V[i]);
//
//		cout << dp[C] << endl;
//		delete[] P, V, dp;
//	}
//	return 0;
//}