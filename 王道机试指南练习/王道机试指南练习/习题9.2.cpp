//#include<iostream>
//using namespace std;
///*����Ŀڴ����ݻ�40�Ŀڴ����ö���1 <= n <= 20*/
////����һ���ݹ�
//int count(int n, int*& a, int i, int sum)
//{
//	if (sum == 0)
//		return 1; //�ҵ�һ���Ϊsum���������
//	if (i == n || sum < 0)
//		return 0;//i==n˵��û��������������ϣ�sum<0˵����ϲ���;
//	//������ĵ�iΪ��ʼ������a[i],�Ͳ�����a[i];
//	return count(n, a, i + 1, sum - a[i]) + count(n, a, i + 1, sum);
//}
//void recursion(int n)//�ݹ�
//{
//	int* a = new int[n];
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	cout << count(n, a, 0, 40) << endl;
//	delete[] a;
//}
////����:��̬�滮������Ʒ��ɵ�������ж�̬�滮��
//void dynamic(int n)
//{
//	int* a = new int[n + 1];
//	int(*dp)[41] = new int[n + 1][41];//dp[i][j]��ʾ��ǰi����Ʒ�дճ����j��
//	for (int i = 0; i < 41; i++)
//		dp[0][i] = 0;//��ʼ�߽�:��ǰ0����ղ����κ����
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		dp[i][0] = 1; //��ʼ�߽�:����ǰ�������ܴճ�0���
//	}
//	dp[0][0] = 1;//��ʼ�߽�:0���Դճ�0
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= 40; j++)
//		{
//			dp[i][j] = dp[i - 1][j];
//			if (a[i] <= j)
//				dp[i][j] += dp[i - 1][j - a[i]];
//		}
//	cout << dp[n][40] << endl;
//	delete[] a, dp;
//}
////����:��̬�滮�����ݻ��Ŀɴ��Խ��ж�̬�滮��
//void dynamic_2(int n)
//{
//	int a;
//	int* dp = new int[41];//dp[i]��ʾ�ճ����i�Ĵ�����
//	for (int i = 1; i <= 40; i++)
//		dp[i] = 0;//��ʼ�߽磺��ʼ���������û���ճ�
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a;
//		for (int j = 40; j >= 1; j--) //���򣬷���Ҫ�ظ�����
//			if (dp[j] > 0 && j + a <= 40)
//				dp[j + a] += dp[j];//���j��dp[j]�ַ�ʽ�ɴ��ÿ�ַ�ʽ����a�Ϳɴ�j+a
//		dp[a]++;
//	}
//	cout << dp[40] << endl;
//	delete[] dp;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		//recursion(n);
//		//dynamic(n);
//		dynamic_2(n);
//	}
//	return 0;
//}