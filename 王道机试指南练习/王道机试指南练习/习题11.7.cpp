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
//	bool operator<(const point& p)const//���ڹ���С����ʱ�Ƚ�
//	{
//		return this->dist > p.dist;
//	}
//};
//void Dijkstra(vector<edge>*& road, vector<point>& city, int& n)
//{
//	priority_queue<point> PQ;//С���ѣ�ÿ�ִӵ�ǰ����ĵ㿪ʼ
//	PQ.push(city[1]);//������
//	while (!PQ.empty())
//	{
//		int current = PQ.top().name;
//		PQ.pop();
//		for (unsigned int i = 0; i < road[current].size(); i++)//��������current�ı�
//		{
//			edge temp = road[current][i];
//			int end = temp.end;
//			int cost = temp.time + city[current].dist;
//			//���ܸı�������Ӫ
//			if (city[current].leader == 2 && city[end].leader == 1)
//				continue;
//			//�����current����end��ʱ���֮ǰ·������end��ʱ��̣���������·
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
//		vector<edge>* road = new vector<edge>[n + 1];//1~n����������ģ���ڽӱ�
//		cin >> m;
//		for (int i = 0; i < m; i++)//�����·
//		{
//			int s, e, t;
//			cin >> s >> e >> t;
//			road[s].push_back(edge(e, t));
//			road[e].push_back(edge(s, t));//����ߣ�������Ҳ���ȥ���ڲ���
//		}
//		vector<point> city;
//		city.push_back(point(0, 0xfffffff, 0));//ռסcity[0]λ,���ں������
//		for (int i = 1; i <= n; i++)//����city
//		{
//			int l;
//			cin >> l;
//			city.push_back(point(i, 0xfffffff, l));//��ʼ����Ϊ���ɴ�
//		}
//		city[1].dist = 0;//��㵽�Լ��ľ���Ϊ0
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