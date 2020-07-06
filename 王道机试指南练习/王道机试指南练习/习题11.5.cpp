//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//using namespace std;
///*jungle roads*/
//struct edge
//{
//	char start, end;
//	int distance;
//	edge(char s, char e, int d) :start(s), end(e), distance(d) {}
//};
//bool comp(edge e1, edge e2)
//{
//	return e1.distance < e2.distance;
//}
//char find_root(map<char, char>& V, char x)//检查x所在集合的根
//{
//	if (V.find(x) != V.end() && V[x] != x)
//		V[x] = find_root(V, V[x]);
//	else
//		return x;
//	return V[x];
//}
//int kruskal(vector<edge>& E, int n)//最小生成树 克鲁斯卡尔算法O(ElogE)
//{
//	int sum = 0, count = 0;//边权值和，边的条数
//
//	map<char, char> V;//顶点集/并查集
//
//	vector<edge>::iterator it = E.begin();
//	while (count != n - 1)//n个顶点的树n-1条边
//	{
//		while (it != E.end())//边已经排序了
//		{
//			int a = find_root(V, it->start);
//			int b = find_root(V, it->end);
//			if (a != b)//不在集合中，即没有构成回路
//			{
//				V[b] = a;//并入集合
//				sum += it->distance;
//				it++;
//				break;
//			}
//			else
//				it++;
//		}
//		count++;
//	}
//	return sum;
//}
//int main()
//{
//	int n;
//	vector<edge> E;
//	while (cin>>n && n != 0)
//	{
//		for (int i = 0; i < n - 1; i++)
//		{
//			char start;
//			int m;
//			cin >> start >> m;
//			for (int i = 0; i < m; i++)
//			{
//				char end;
//				int dis;
//				cin >> end >> dis;
//				E.push_back(edge(start, end, dis));
//			}
//		}
//		sort(E.begin(), E.end(), comp);
//		cout << kruskal(E, n) << endl;
//		E.clear();
//	}
//	return 0;
//}