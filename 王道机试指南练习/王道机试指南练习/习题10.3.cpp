//#include<iostream>
//#include<queue>
//using namespace std;
///*搬水果
//注：哈夫曼树带权路径之和最小，所有中间节点的权值和是其带权路径和*/
//
//int main()
//{
//	int n;
//	while (cin>>n)
//	{	
//		priority_queue<int, vector<int>, greater<int>> PQ;
//		for (int i = 0; i < n; i++)
//		{
//			int in;
//			cin >> in;
//			PQ.push(in);
//		}
//		int ans = 0, a, b;
//		while (PQ.size() > 1)//内部连续两次pop，所以容量必须大于1，以防pop异常
//		{
//			a = PQ.top();
//			PQ.pop();
//			b = PQ.top();
//			PQ.pop();
//			ans += a + b;
//			PQ.push(a + b);
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}