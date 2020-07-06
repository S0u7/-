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
//char find_root(map<char, char>& V, char x)//���x���ڼ��ϵĸ�
//{
//	if (V.find(x) != V.end() && V[x] != x)
//		V[x] = find_root(V, V[x]);
//	else
//		return x;
//	return V[x];
//}
//int kruskal(vector<edge>& E, int n)//��С������ ��³˹�����㷨O(ElogE)
//{
//	int sum = 0, count = 0;//��Ȩֵ�ͣ��ߵ�����
//
//	map<char, char> V;//���㼯/���鼯
//
//	vector<edge>::iterator it = E.begin();
//	while (count != n - 1)//n���������n-1����
//	{
//		while (it != E.end())//���Ѿ�������
//		{
//			int a = find_root(V, it->start);
//			int b = find_root(V, it->end);
//			if (a != b)//���ڼ����У���û�й��ɻ�·
//			{
//				V[b] = a;//���뼯��
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