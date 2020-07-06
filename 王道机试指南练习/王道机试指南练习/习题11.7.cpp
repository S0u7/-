//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
///*I wanner go home,(2<=N<=600),(0<=M<=10000),(1<=T<=500)*/
//struct edge
//{
//	int end, time;
//	edge(int e, int t) : end(e), time(t) {};
//};
//struct point
//{
//	int name, dist,leader;
//	point(int n, int d,int l) :name(n), dist(d),leader(l) {}
//	bool operator<(const point& p)const//用于构造小根堆时比较
//	{
//		return this->dist > p.dist;
//	}
//};
//void Dijkstra(vector<edge>*& road, vector<point>& city, int& n)
//{
//	priority_queue<point> PQ;//小根堆，每轮从当前最近的点开始
//	PQ.push(city[1]);//起点入堆
//	while (!PQ.empty())
//	{
//		int current = PQ.top().name;
//		PQ.pop();
//		for (unsigned int i = 0; i < road[current].size(); i++)//检查起点是current的边
//		{
//			edge temp = road[current][i];
//			int end = temp.end;
//			int cost = temp.time + city[current].dist;
//			//不能改变两次阵营
//			if (city[current].leader == 2 && city[end].leader == 1)
//				continue;
//			//如果从current到达end的时间比之前路径到达end的时间短，就走这条路
//			if (cost < city[end].dist)
//			{
//				city[end].dist = cost;
//				PQ.push(city[end]);
//			}		
//		}
//	}
//
//}
//int main()
//{
//	int n, m;
//	while (cin >> n && n != 0)
//	{
//		vector<edge>* road = new vector<edge>[n + 1];//1~n，向量数组模拟邻接表
//		cin >> m;
//		for (int i = 0; i < m; i++)//输入道路
//		{
//			int s, e, t;
//			cin >> s >> e >> t;
//			road[s].push_back(edge(e, t));
//			road[e].push_back(edge(s, t));//无向边，将反向也存进去便于操作
//		}
//		vector<point> city;
//		city.push_back(point(0, 0xfffffff, 0));//占住city[0]位,便于后面操作
//		for (int i = 1; i <= n; i++)//输入city
//		{
//			int l;
//			cin >> l;
//			city.push_back(point(i, 0xfffffff, l));//初始都设为不可达
//		}
//		city[1].dist = 0;//起点到自己的距离为0
//
//		Dijkstra(road, city, n);
//		if (city[2].dist == 0xfffffff)
//			cout << -1 << endl;
//		else
//			cout << city[2].dist << endl;
//		city.clear();
//	}
//	return 0;
//}