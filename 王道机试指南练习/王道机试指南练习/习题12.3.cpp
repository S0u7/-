//#include<iostream>
//#include<algorithm>
//using namespace std;
///*�ϳ�����,�����ü����˳��У�ʣ�µ��˳ɶ���
//T1 < T2 < �� < Ti , Ti > Ti+1 > �� > TK (1 <= i <= K)
//�ֱ��������������к���ݼ������и���*/
//int main()
//{
//	int n, ans;
//	while (cin >> n)
//	{
//		int* arr = new int[n];
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//		//dp ������arr[i]��βʱ�����/�ݼ������г���
//		int* dp_as = new int[n];
//		fill(dp_as, dp_as + n, 1);
//		int* dp_ds = new int[n];
//		fill(dp_ds, dp_ds + n, 1);
//		//������ÿ��Ԫ�ؽ�βʱ����������г���
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < i; j++)
//			{
//				if (arr[j] < arr[i])
//					dp_as[i] = max(dp_as[i], dp_as[j] + 1);
//			}
//		}
//		//������ÿ��Ԫ�ؿ�ͷʱ��ݼ������г���
//		for (int i = n -1; i >= 0; i--)
//		{
//			for (int j = i + 1; j < n; j++)
//			{
//				if (arr[j] < arr[i])
//					dp_ds[i] = max(dp_ds[i], dp_ds[j] + 1);
//			}
//		}
//		ans = dp_as[0] + dp_ds[0] - 1;
//		for (int k = 1; k < n; k++)
//			ans = max(ans, dp_as[k] + dp_ds[k] - 1);
//
//		cout << n - ans << endl;
//		delete[] arr, dp_as, dp_ds;
//	}
//	return 0;
//}