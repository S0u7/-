//#include<iostream>
//#include<algorithm>
//using namespace std;
///*������������У����������������к͡��������еĵ�һ�������һ��Ԫ��,K< 10000
//���������������в�Ψһ����������i��j��С���Ǹ�
//������K��Ԫ�ض��Ǹ���������������Ϊ0������������е���βԪ�ء�*/
//struct note
//{
//	int sum, first, last;
//	note() {}
//	//note(int a, int b, int c) :sum(a), first(b), last(c) {}
//	note(int a) :sum(a), first(a), last(a) {}
//};
//note max_subsequence(int*& arr, int& n)
//{
//	note dp(arr[0]);//dp��ʾ��i Ϊ��βʱ������к�
//	note max = dp;
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] > dp.sum + arr[i])
//		{
//			dp.sum = arr[i];
//			dp.first = dp.last = arr[i];
//		}
//		else
//		{
//			dp.sum = dp.sum + arr[i];
//			dp.last = arr[i];
//		}
//		if (max.sum < dp.sum)
//			max = dp;
//	}
//	if (max.sum < 0)
//	{
//		max.sum = 0;
//		max.first = arr[0];
//		max.last = arr[n - 1];
//	}
//	return max;
//}
//
//int main()
//{
//	int n;
//	note ans;
//	while (cin>>n && n != 0)
//	{
//		int* arr = new int[n];
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//		ans = max_subsequence(arr, n);
//		cout << ans.sum << " " << ans.first << " " << ans.last<< endl;
//		delete[] arr;
//	}
//	return 0;
//}