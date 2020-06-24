//#include<iostream>
////#include<map>//map插入与搜索均是对数时间
//#include<queue>//priority_queue查找最大值常数时间，插入对数时间
//using namespace std;
///*查找第k小的数，1<=n<=1000，相等的数算一个*/
//int main()
//{
//	int n, k, x;
//	while (cin>>n)
//	{
//		priority_queue<int, vector<int>, greater<int>> PQ;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> x;
//			PQ.push(x);
//		}
//		cin >> k;
//		x = PQ.top();
//		PQ.pop();
//		for (int i = 0; i < k - 1; i++)
//		{
//			if (PQ.size() > 0)//防止没有第K小的数
//			{
//				if (PQ.top() == x)
//					i--;
//				else
//					x = PQ.top();
//				PQ.pop();
//			}
//			else
//				break;
//		}
//		cout << x << endl;
//	}
//	return 0;
//}