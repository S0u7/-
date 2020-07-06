//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
///*最短路径问题：给你n个点，m条无向边，每条边都有长度d和花费p，给你起点s终点t，
//要求输出起点到终点的最短距离及其花费，如果最短距离有多条路线，则输出花费最少的
//1<n<=1000, 0<m<100000, s != t
//输入比较贼，两点之间可以有多条边，这题会出现环，自回路*/
//struct edge
//{
//	int start, end, length, cost;
//	edge(int s, int e, int l, int c) :start(s), end(e), length(l), cost(c) {}
//};
//struct point
//{
//	int dis_cost[2];//分别存放起点到它的距离和花费
//	bool visit;
//};
//bool comp(point p1, point p2)
//{
//	if (p1.visit != p2.visit)
//		return p1.visit < p2.visit;
//	else
//		return p1.dis_cost[0] < p2.dis_cost[0];
//}
//int* Dijkstra(vector<edge>& road, int n, int start, int end)
//{
//	point* P = new point[n + 1];//1~n
//	for (int i = 1; i <= n; i++)//初始化
//	{
//		P[i].dis_cost[0] = 10000;
//		P[i].dis_cost[1] = 0;
//		P[i].visit = 0;
//	}
//	vector<edge>::iterator it;
//	for ( it = road.begin(); it != road.end(); it++)//更新起点所连的边的距离和花费
//		if (it->start == start)
//		{
//			P[it->end].dis_cost[0] = it->length;
//			P[it->end].dis_cost[1] = it->cost;
//		}
//	P[start].dis_cost[0] = 0;//起点到它自己距离和花费是0，为了让下面循环从起点开始
//	P[start].dis_cost[1] = 0;
//
//	for (int i = 1; i <= n; i++)
//	{	//返回的是迭代器，要减去数组地址
//		int min_pos = min_element(P, P + n + 1, comp) - P;
//		it = road.begin();
//		while (it != road.end())
//		{
//			if (it->start == min_pos)
//			{	//如果经过min_pos到达end的距离 < 之前路径到达end的距离
//				//或者距离相同，但是花费更少，就转向这条路
//				int dis = it->length + P[it->start].dis_cost[0];
//				int cost = it->cost + P[it->start].dis_cost[1];
//				if (dis < P[it->end].dis_cost[0])
//				{
//					P[it->end].dis_cost[0] = dis;
//					P[it->end].dis_cost[1] = cost;
//				}
//				else if (dis == P[it->end].dis_cost[0]
//					&& cost < P[it->end].dis_cost[1])
//					P[it->end].dis_cost[1] = cost;
//			}
//			it++;
//		}
//		P[min_pos].visit = 1;//置访问位
//	}
//	return P[end].dis_cost;
//}
//int main()
//{
//	int n, m, start, end;
//	vector<edge> road;
//	while (cin>>n>>m)
//	{
//		if (n == 0 && m == 0)
//			break;
//		for (int i = 0; i < m; i++)
//		{
//			int s, e, l, c;
//			cin >> s >> e >> l >> c;
//			road.push_back(edge(s, e, l, c));
//			road.push_back(edge(e, s, l, c));//无向边，将反向也存进去便于后面操作
//		}
//		cin >> start >> end;
//		int* ans = Dijkstra(road, n, start, end);
//		cout << ans[0] << " " << ans[1] << endl;
//		road.clear();
//	}
//	return 0;
//}