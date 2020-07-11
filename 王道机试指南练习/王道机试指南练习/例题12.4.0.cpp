//#include<iostream>
//#include<algorithm>
//using namespace std;
///*�����������1 <= N <= 1000*/
//int LIS(int*& arr, int& n)//��̬�滮O(n^2)
//{
//	int* dp = new int[n];
//	fill(dp, dp + n, 1);
//	int ans = 1;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//			if(arr[i] > arr[j])
//				dp[i] = max(dp[i], dp[j] + 1);
//		ans = max(ans, dp[i]);
//	}
//	return ans;
//}
//int card(int*& arr, int& n)//֩��ֽ���㷨(���ֲ��ҷ�)O(nlogn)
//{
//	int* top = new int[n];//ÿ���ƶѶ���
//	int piles = 0;//�ƶ���
//	for (int i = 0; i < n; i++)
//	{
//		int poker = arr[i];//��ǰ����
//		//���ֲ����ʺϵ��ƶ�
//		int left = 0, right = piles;
//		while (left < right)
//		{
//			int mid = left + (right - left) / 2;
//			if (top[mid] >= poker)
//				right = mid;
//			else
//				left = mid + 1;
//		}
//		if (left == piles)//û�ҵ����ʵ��ƶѣ����½�һ����
//				piles++;
//		top[left] = poker;//���Ʒ����ƶѶ���
//	}
//	return piles;//�ƶ���������������������
//}
//int main()
//{
//	int n;
//	while (cin>>n)
//	{
//		int* arr = new int[n];
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//		//cout << LIS(arr, n) << endl;
//		cout << card(arr, n) << endl;
//		delete[] arr;
//	}
//	return 0;
//}