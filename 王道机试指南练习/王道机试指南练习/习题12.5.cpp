//#include<iostream>
//#include<algorithm>
//using namespace std;
///*��ҩ*/
//int main()
//{
//	int T, M;
//	while (cin>>T>>M)
//	{
//		int* time = new int[M];//��ʱ
//		int* value = new int[M];//��ֵ
//		for (int i = 0; i < M; i++)
//			cin >> time[i] >> value[i];
//
//		//dp�����ʾ���ɵ�i��ҩʱ��ʣ��ʱ�����õ�����ֵ
//		int* dp = new int[T + 1];
//		//base case
//		for (int j = 0; j <= T; j++)
//			dp[j] = 0;
//		//״̬ת��
//		for (int i = 0; i < M; i++)
//			for (int j = T; j >= time[i]; j--)//�� ʲôҲû�ɿ�ʼ �� ʱ�䲻���� ����
//				dp[j] = max(dp[j], dp[j - time[i]] + value[i]);
//
//		cout << dp[T] << endl;
//		delete[] time, value, dp;
//	}
//	return 0;
//}