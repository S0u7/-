//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
///*���·�����⣺����n���㣬m������ߣ�ÿ���߶��г���d�ͻ���p���������s�յ�t��
//Ҫ�������㵽�յ����̾��뼰�仨�ѣ������̾����ж���·�ߣ�������������ٵ�
//1<n<=1000, 0<m<100000, s != t
//����Ƚ���������֮������ж����ߣ��������ֻ����Ի�·*/
//struct edge
//{
//	int start, end, length, cost;
//	edge(int s, int e, int l, int c) :start(s), end(e), length(l), cost(c) {}
//};
//struct point
//{
//	int dis_cost[2];//�ֱ�����㵽���ľ���ͻ���
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
//	for (int i = 1; i <= n; i++)//��ʼ��
//	{
//		P[i].dis_cost[0] = 10000;
//		P[i].dis_cost[1] = 0;
//		P[i].visit = 0;
//	}
//	vector<edge>::iterator it;
//	for ( it = road.begin(); it != road.end(); it++)//������������ıߵľ���ͻ���
//		if (it->start == start)
//		{
//			P[it->end].dis_cost[0] = it->length;
//			P[it->end].dis_cost[1] = it->cost;
//		}
//	P[start].dis_cost[0] = 0;//��㵽���Լ�����ͻ�����0��Ϊ��������ѭ������㿪ʼ
//	P[start].dis_cost[1] = 0;
//
//	for (int i = 1; i <= n; i++)
//	{	//���ص��ǵ�������Ҫ��ȥ�����ַ
//		int min_pos = min_element(P, P + n + 1, comp) - P;
//		it = road.begin();
//		while (it != road.end())
//		{
//			if (it->start == min_pos)
//			{	//�������min_pos����end�ľ��� < ֮ǰ·������end�ľ���
//				//���߾�����ͬ�����ǻ��Ѹ��٣���ת������·
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
//		P[min_pos].visit = 1;//�÷���λ
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
//			road.push_back(edge(e, s, l, c));//����ߣ�������Ҳ���ȥ���ں������
//		}
//		cin >> start >> end;
//		int* ans = Dijkstra(road, n, start, end);
//		cout << ans[0] << " " << ans[1] << endl;
//		road.clear();
//	}
//	return 0;
//}