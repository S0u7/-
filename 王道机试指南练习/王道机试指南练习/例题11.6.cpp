//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
///*畅通工程续,0<N<200,0<M<1000,城镇分别以0～N-1编号,0<=A,B<N,A!=B,0<X<10000*/
//struct edge
//{
//	int start, end, length;
//	edge(int s, int e, int l) :start(s), end(e), length(l) {}
//};
//struct town
//{
//	int distance;//到起点的距离
//	bool visit;//是否访问过
//};
//bool comp(town t1, town t2)
//{
//	if (t1.visit != t2.visit)
//		return t1.visit < t2.visit;
//	else
//		return t1.distance < t2.distance;
//}
//int Dijkstra(vector<edge>& road, int n, int start, int end)
//{
//	town* T = new town[n];//0~n-1个城镇
//	for (int i = 0; i < n; i++)//初始化
//	{
//		T[i].distance = 10000;
//		T[i].visit = 0;
//	}
//	vector<edge>::iterator it ;
//	for ( it = road.begin(); it != road.end(); it++)//放入起点直达的边
//		if (it->start == start)//路的起始端=起点，即起点可直达
//			T[it->end].distance = it->length;
//	T[start].distance = 0;//起点到自己距离为0
//
//	for (int i = 0; i < n; i++)
//	{
//		int min_pos = min_element(T, T + n, comp) - T;//返回的是迭代器 - T得到数组位置
//		it = road.begin();
//		while (it != road.end())
//		{	//路的起始端 = min_pos
//			if (it->start == min_pos)
//			{	//如果经过min_pos到达end的距离 < 之前路径到达end的距离，就转向这条路
//				int dis = it->length + T[it->start].distance;
//				if (dis < T[it->end].distance)
//					T[it->end].distance = dis;
//			}
//			it++;
//		}
//		T[min_pos].visit = 1;//置访问位
//	}
//	if (T[end].distance == 10000)
//		T[end].distance = -1;//终点不可达置-1
//	return T[end].distance;
//}
//void test1()
//{
//	int n, m, start, end;;
//	vector<edge> road;
//	while (cin >> n >> m)
//	{
//		for (int i = 0; i < m; i++)
//		{
//			int s, e, l;
//			cin >> s >> e >> l;
//			road.push_back(edge(s, e, l));
//			road.push_back(edge(e, s, l));//双向道路,将反向也存进去便于后面操作
//		}
//		cin >> start >> end;
//		cout << Dijkstra(road, n, start, end) << endl;
//		road.clear();
//	}
//}
//void floyd(int**& dis, int& n)
//{
//	for (int i = 0; i < n; i++)//第i轮
//	{
//		for (int j = 0; j < n; j++)//第j行
//		{	
//			if (dis[j][i] == 0xfffffff)
//				continue;
//			for (int k = 0; k < n; k++)//第k列
//			{
//				if (dis[i][k] == 0xfffffff)
//					continue;
//				//if (dis[j][k] > dis[i][k] + dis[j][i])
//				//	dis[j][k] = dis[i][k] + dis[j][i];
//			//或者这样写
//				dis[j][k] = min(dis[j][k], dis[j][i] + dis[i][k]);
//			}
//		}
//	}
//}
//void test2()
//{
//	int n, m, start, end;
//	while (cin>>n>>m)
//	{
//		int** dis = new int*[n];
//		for (int i = 0; i < n; i++)
//		{
//			dis[i] = new int[n];
//			for (int j = 0; j < n; j++)
//				dis[i][j] = 0xfffffff;
//			dis[i][i] = 0;
//		}
//		for (int i = 0; i < m; i++)
//		{
//			int s, e, l;
//			cin >> s >> e >> l;
//			if (dis[s][e] > l)//注意两个地点可能有多条路，存放最小的一条
//			{
//				dis[s][e] = l;
//				dis[e][s] = l;
//			}
//		}
//		cin >> start >> end;
//		floyd(dis, n);
//		if (dis[start][end] == 0xfffffff)
//			cout << -1 << endl;
//		else
//			cout << dis[start][end] << endl;
//	}
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}