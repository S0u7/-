//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
///*��ͨ������,0<N<200,0<M<1000,����ֱ���0��N-1���,0<=A,B<N,A!=B,0<X<10000*/
//struct edge
//{
//	int start, end, length;
//	edge(int s, int e, int l) :start(s), end(e), length(l) {}
//};
//struct town
//{
//	int distance;//�����ľ���
//	bool visit;//�Ƿ���ʹ�
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
//	town* T = new town[n];//0~n-1������
//	for (int i = 0; i < n; i++)//��ʼ��
//	{
//		T[i].distance = 10000;
//		T[i].visit = 0;
//	}
//	vector<edge>::iterator it ;
//	for ( it = road.begin(); it != road.end(); it++)//�������ֱ��ı�
//		if (it->start == start)//·����ʼ��=��㣬������ֱ��
//			T[it->end].distance = it->length;
//	T[start].distance = 0;//��㵽�Լ�����Ϊ0
//
//	for (int i = 0; i < n; i++)
//	{
//		int min_pos = min_element(T, T + n, comp) - T;//���ص��ǵ����� - T�õ�����λ��
//		it = road.begin();
//		while (it != road.end())
//		{	//·����ʼ�� = min_pos
//			if (it->start == min_pos)
//			{	//�������min_pos����end�ľ��� < ֮ǰ·������end�ľ��룬��ת������·
//				int dis = it->length + T[it->start].distance;
//				if (dis < T[it->end].distance)
//					T[it->end].distance = dis;
//			}
//			it++;
//		}
//		T[min_pos].visit = 1;//�÷���λ
//	}
//	if (T[end].distance == 10000)
//		T[end].distance = -1;//�յ㲻�ɴ���-1
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
//			road.push_back(edge(e, s, l));//˫���·,������Ҳ���ȥ���ں������
//		}
//		cin >> start >> end;
//		cout << Dijkstra(road, n, start, end) << endl;
//		road.clear();
//	}
//}
//void floyd(int**& dis, int& n)
//{
//	for (int i = 0; i < n; i++)//��i��
//	{
//		for (int j = 0; j < n; j++)//��j��
//		{	
//			if (dis[j][i] == 0xfffffff)
//				continue;
//			for (int k = 0; k < n; k++)//��k��
//			{
//				if (dis[i][k] == 0xfffffff)
//					continue;
//				//if (dis[j][k] > dis[i][k] + dis[j][i])
//				//	dis[j][k] = dis[i][k] + dis[j][i];
//			//��������д
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
//			if (dis[s][e] > l)//ע�������ص�����ж���·�������С��һ��
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