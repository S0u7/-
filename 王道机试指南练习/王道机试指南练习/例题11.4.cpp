//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<map>
//#include<queue>
//using namespace std;
///*���ǳ�ͨ���̣��κ�������ׯ��ʵ�ֹ�·��ͨ������һ����ֱ�ӵĹ�·������
//ֻҪ�ܼ��ͨ����·�ɴＴ�ɣ�����Ҫ������Ĺ�·�ܳ���Ϊ��С��������С�Ĺ�·�ܳ���
//��С����������³˹�����㷨 ����ķ�㷨
//priority_queue�ȽϷ�ʽĬ����operator<��Ҳ�������ȶ����Ǵ󶥶ѣ���ͷԪ�����,С���½�*/
//struct edge
//{
//	int start, end, length;
//	edge(int s, int e, int l) :start(s), end(e), length(l) {}
//};
//bool comp(edge e1, edge e2)//��������ȽϺ���
//{
//	return e1.length < e2.length;
//}
//struct cmp//��������/�º��������ڹ���С����
//{
//	bool operator()(edge e1, edge e2)
//	{
//		return e1.length > e2.length;
//	}
//};
//int find_root(map<int,int>& V, int x)//���x���ڼ��ϵĸ�
//{
//	int root = x, temp;
//	while (V.find(root) != V.end() && V[root] != root)
//		root = V[root];
//	//·��ѹ�������� x �� �� ��·���ϵĽڵ㶼ֱ��ָ�����������ϵĸ�,ѹ���������ĸ߶�
//	while (V.find(x) != V.end() && V[x] != x)
//	{
//		temp = V[x];
//		V[x] = root;
//		x = temp;
//	}
//	return root;
//}
//int kruskal(vector<edge>& E, int n)//��С������ ��³˹�����㷨O(ElogE)
//{
//	int sum = 0, count = 0;//��Ȩֵ�ͣ��ߵ�����
//
//	map<int, int> V;//���㼯/���鼯
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
//				sum += it->length;
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
//
//int prim(vector<edge>* E, int n)//���Ż�������ķ�㷨O(ElogV)
//{
//	int sum = 0, count = 0;
//	vector<edge>::iterator it;
//	map<int, int> V;
//	V[1] = 1;//��һ���ڵ���붥�㼯��
//
//	priority_queue<edge, vector<edge>, cmp> PQ;//���ȶ���/С����
//	it = E[1].begin();
//	while (it != E[1].end())//����һ���ڵ��ϵı߷����
//	{
//		PQ.push(*it);
//		it++;
//	}
//	while (count != n - 1)
//	{
//		while (!PQ.empty())
//		{
//			edge temp = PQ.top();
//			int a = find_root(V, temp.start);
//			int b = find_root(V, temp.end);
//			if (a != b)//�����ɻ�·
//			{
//				V[b] = a;//���뼯��
//				sum += temp.length;
//				PQ.pop();
//				//���Դ˱��յ�Ϊ���ı������
//				it = E[temp.end].begin();
//				while (it != E[temp.end].end())
//				{
//					PQ.push(*it);
//					it++;
//				}
//				break;
//			}
//			else
//				PQ.pop();
//		}
//		count++;
//	}
//	
//	return sum;
//}
//void test1()
//{
//	int n;
//	vector<edge> E;//�߼���kruskal�㷨ֻ���Ǳߣ�����Ҫ�����ʺ��ñ߼�
//	while (cin >> n && n != 0)
//	{
//		int num_edge = n * (n - 1) / 2;
//		for (int i = 0; i < num_edge; i++)
//		{
//			int s, e, l;
//			cin >> s >> e >> l;
//			E.push_back(edge(s, e, l));
//			E.push_back(edge(e, s, l));//���������ǵ���ģ�Ϊ������ͼprim�㷨���ӷ����
//		}
//		sort(E.begin(), E.end(), comp);
//		cout << kruskal(E, n) << endl;
//
//		E.clear();
//	}
//}
//void test2()
//{
//	int n;
//	while (cin>>n && n != 0)
//	{	
//		int num_edge = n * (n - 1) / 2;
//		vector<edge>* E = new vector<edge>[n + 1];//vector����ģ���ڽӱ�
//		for (int i = 0; i < num_edge; i++)
//		{
//			int s, e, l;
//			cin >> s >> e >> l;
//			E[s].push_back(edge(s, e, l));
//			E[e].push_back(edge(e, s, l));
//		}
//		cout << prim(E, n) << endl;
//	}
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
///*
//7
//1 2 8
//1 3 100
//1 4 5
//1 5 100
//1 6 100
//1 7 100
//2 3 12
//2 4 3
//2 5 10
//2 6 100
//2 7 100
//3 4 100
//3 5 6
//3 6 2
//3 7 100
//4 5 100
//4 6 7
//4 7 15
//5 6 9
//5 7 100
//6 7 100
//*/