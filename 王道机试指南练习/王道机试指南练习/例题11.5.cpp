//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//using namespace std;
///*������ͨ���̣�
//1���ȿ����Ѿ����ɵģ������δ���ɵ�
//2�����ѽ��ɵĴ�����Ϊ0��ͳһ����*/
//struct edge
//{
//	int start, end, cost, built;
//	edge(int s, int e, int c, int b) :start(s), end(e), cost(c), built(b) {};
//};
//
//int find_root(map<int, int>& V, int x)//����x���ڼ��ϵĸ�
//{
//	if (V.find(x) != V.end() && V[x] != x)
//		V[x] = find_root(V, V[x]);//�ݹ����·��ѹ��
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
//			//ע��Ҫ��֤���ڼ����ڣ���Ϊ�����ѽ��ɵ��γ��˻�·
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
//bool comp(edge e1, edge e2)//������
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