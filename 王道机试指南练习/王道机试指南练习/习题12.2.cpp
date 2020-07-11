//#include<iostream>
//#include<algorithm>
//using namespace std;
///*最大连续子序列：输出最大连续子序列和、及该序列的第一个和最后一个元素,K< 10000
//如果最大连续子序列不唯一，则输出序号i和j最小的那个
//若所有K个元素都是负数，则定义其最大和为0，输出整个序列的首尾元素。*/
//struct note
//{
//	int sum, first, last;
//	note() {}
//	//note(int a, int b, int c) :sum(a), first(b), last(c) {}
//	note(int a) :sum(a), first(a), last(a) {}
//};
//note max_subsequence(int*& arr, int& n)
//{
//	note dp(arr[0]);//dp表示以i 为结尾时最长子序列和
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