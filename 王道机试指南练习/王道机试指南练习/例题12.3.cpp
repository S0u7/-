//#include<iostream>
//#include<algorithm>
//using namespace std;
///*����Ӿ���:����Ĵ�С����Ϊ����������Ԫ�صĺ�,�ҵ����ķǿմ�С������1 * 1�Ӿ���
//0 < N <= 100,�����������ķ�Χ����[-127, 127]
//�㷨����������Ӿ�����ԭ����ĵ�i�е���j��
//1����i == jʱ������Ӿ���� �˻��� ���i�е�������������к�
//2����i != jʱ������Ӿ���� = �ѵ�i�е���j�еĶ�ӦԪ����ӵõ������У�
//	��������������к͡�ʱ�临�Ӷ�O(n^3)*/
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
//	int** dp = new int*[n];//��ά���� dp[i][j] ��ʾ��i�е���j������Ԫ�ص�����Ӿ����
//	for (int i = 0; i < n; i++)
//		dp[i] = new int[n];
//
//	int ans = max_subsquence(mat[0], n);
//	int* temp = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{	//״̬ת��
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