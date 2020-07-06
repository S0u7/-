//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//#include<cmath>
//using namespace std;
///*freckles(雀斑):将所有二维坐标点连起来最少要用多少墨水*/
//struct point
//{
//	int index;
//	double x, y;
//	point(int i, double a, double b) :index(i), x(a), y(b) {}
//};
//struct edge
//{
//	int start, end;
//	double dis;
//	edge(int s, int e, double d) :start(s), end(e), dis(d) {}
//};
//double distance(point p1, point p2)//计算二维两点间距离
//{	
//	double a = abs(p1.x - p2.x);
//	double b = abs(p1.y - p2.y);
//	return sqrt(a * a + b * b);
//}
//int find_root(map<int, int>& V, int x)//并查集找集合根
//{
//	if (V.find(x) != V.end() && x != V[x])
//		V[x] = find_root(V, V[x]);
//	else
//		return x;
//	return V[x];
//}
//double kruskal(vector<edge>& E, int n)
//{
//	double cost = 0, count = 0;
//	map<int, int> V;
//	vector<edge>::iterator it = E.begin();
//	while (count != n -1)
//	{
//		while (it != E.end())
//		{
//			int a = find_root(V,it->start);
//			int b = find_root(V,it->end);
//			if (a != b)
//			{
//				V[b] = a;
//				cost += it->dis;
//				it++;
//				break;
//			}
//			else
//				it++;
//		}
//		count++;
//	}
//	return cost;
//}
//bool comp(edge e1, edge e2)
//{
//	return e1.dis < e2.dis;
//}
//int main()
//{
//	int n;
//	vector<point> P;
//	vector<point>::iterator it;
//	vector<edge> E;
//	while (cin>>n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			double x, y;
//			cin >> x >> y;
//			point temp(i + 1, x, y);//输入坐标点
//			it = P.begin();
//			while (it != P.end())//计算边长
//			{
//				E.push_back(edge(it->index, temp.index, distance(*it, temp)));
//				it++;
//			}
//			P.push_back(temp);
//		}
//		sort(E.begin(), E.end(), comp);
//		cout.precision(2);
//		cout<< fixed << kruskal(E, n) << endl;
//		P.clear();
//		E.clear();
//	}
//	return 0;
//}