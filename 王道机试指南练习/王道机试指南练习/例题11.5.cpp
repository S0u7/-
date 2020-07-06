//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//using namespace std;
///*继续畅通工程：
//1、先考虑已经建成的，再添加未建成的
//2、将已建成的代价置为0，统一考虑*/
//struct edge
//{
//	int start, end, cost, built;
//	edge(int s, int e, int c, int b) :start(s), end(e), cost(c), built(b) {};
//};
//
//int find_root(map<int, int>& V, int x)//查找x所在集合的根
//{
//	if (V.find(x) != V.end() && V[x] != x)
//		V[x] = find_root(V, V[x]);//递归进行路径压缩
//	else
//		return x;
//	return V[x];
//}
//
//int kruskal(vector<edge>& E, int n)
//{
//	int cost = 0, count = 0;
//	map<int, int> V;
//	vector<edge>::iterator it = E.begin();
//	while (count != n - 1)
//	{
//		while (it != E.end())
//		{			
//			int a = find_root(V, it->start);
//			int b = find_root(V, it->end);
//			//注意要保证不在集合内，因为可能已建成的形成了环路
//			if (a != b)
//			{
//				if (it->built == 1)
//				{
//					V[b] = a;
//					it++;
//					break;
//				}
//				else
//				{
//					V[b] = a;
//					cost += it->cost;
//					it++;
//					break;
//				}
//			}
//			else
//				it++;
//		}
//		count++;
//	}
//	return cost;
//}
//bool comp(edge e1, edge e2)//排序函数
//{
//	if (e1.built == e2.built)
//		return e1.cost < e2.cost;
//	else
//		return e1.built > e2.built;
//}
//int main()
//{
//	int n;
//	vector<edge> E;
//	while (cin>>n && n != 0)
//	{
//		int edge_num = n * (n - 1) / 2;
//		for (int i = 0; i < edge_num; i++)
//		{
//			int s, e, c, b;
//			cin >> s >> e >> c >> b;
//			E.push_back(edge(s, e, c, b));
//		}
//		sort(E.begin(), E.end(), comp);
//		cout << kruskal(E, n) << endl;
//		E.clear();
//	}
//	return 0;
//}