//#include<iostream>
//#include<queue>
//using namespace std;
///*哈夫曼树：2<=n<=1000输出所有结点的值与权值的乘积之和的最小值,叶节点权值不超过100
//注：所有中间节点的权值和即为哈夫曼树的带权路径和*/
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