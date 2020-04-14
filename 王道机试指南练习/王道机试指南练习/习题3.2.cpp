//#include<iostream>
//using namespace std;
//#include<algorithm>
///*ÕûÊýÆæÅ¼ÅÅÐò£¬ÆæÊý½µÐòÅ¼ÊýÉýÐò*/
//bool comp(int a1, int a2)
//{
//	if (a1 % 2 == 1 && a2 % 2 == 1)
//		return a1 > a2;
//	else if (a1 % 2 == 0 && a2 % 2 == 0)
//		return a1 < a2;
//	else
//		return a1 % 2 > a2 % 2;
//}
//
//int main()
//{
//	int arr[10];
//	while (cin>>arr[0])
//	{
//		for (int i = 1; i < 10; i++)
//			cin >> arr[i];
//		sort(arr, arr + 10, comp);
//		for (int j = 0; j < 10; j++)
//			cout << arr[j] << " ";
//	}
//	return 0;
//}