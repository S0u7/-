//#include<iostream>
//#include<algorithm>
//using namespace std;
///*���ǿ����������к͡�
//����һ����������S��������N������N��1000000��������к��ڷ�Χ��-2^63,2^63-1������*/
//long long max_subsquence(long long*& arr, int& n)
//{
//	//long long* dp = new long long[n];//��ʾ��arr[i]��β��������к�
//	//dp[0] = arr[0];//base case�߽�����
//	//long long ans = dp[0];
//	//for (int i = 1; i < n; i++)
//	//{
//	//	dp[i] = max(arr[i], dp[i - 1] + arr[i]);//״̬ת�Ʒ���
//	//	ans = max(ans, dp[i]);
//	//}
//	long long dp = arr[0];//��ʾ��arr[i]��β��������к�
//	long long ans = dp;//base case�߽�����
//	for (int i = 1; i < n; i++)
//	{
//		dp = max(arr[i], dp + arr[i]);//״̬ת�Ʒ���
//		ans = max(ans, dp);
//	}
//	return ans;
//}
//
//int main()
//{
//	int n;
//	while (cin>>n)
//	{
//		long long* arr = new long long[n];
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//		cout << max_subsquence(arr, n) << endl;
//		delete[] arr;
//	}
//	return 0;
//}