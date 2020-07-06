//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<map>
//#include<queue>
//using namespace std;
///*还是畅通工程：任何两个村庄间实现公路交通（但不一定有直接的公路相连，
//只要能间接通过公路可达即可），并要求铺设的公路总长度为最小，计算最小的公路总长度
//最小生成树：克鲁斯卡尔算法 普里姆算法
//priority_queue比较方式默认用operator<，也就是优先队列是大顶堆，队头元素最大,小的下降*/
//struct edge
//{
//	int start, end, length;
//	edge(int s, int e, int l) :start(s), end(e), length(l) {}
//};
//bool comp(edge e1, edge e2)//升序排序比较函数
//{
//	return e1.length < e2.length;
//}
//struct cmp//函数对象/仿函数，用于构建小根堆
//{
//	bool operator()(edge e1, edge e2)
//	{
//		return e1.length > e2.length;
//	}
//};
//int find_root(map<int,int>& V, int x)//检查x所在集合的根
//{
//	int root = x, temp;
//	while (V.find(root) != V.end() && V[root] != root)
//		root = V[root];
//	//路径压缩：将从 x 到 根 的路径上的节点都直接指向代表这个集合的根,压缩集合树的高度
//	while (V.find(x) != V.end() && V[x] != x)
//	{
//		temp = V[x];
//		V[x] = root;
//		x = temp;
//	}
//	return root;
//}
//int kruskal(vector<edge>& E, int n)//最小生成树 克鲁斯卡尔算法O(ElogE)
//{
//	int sum = 0, count = 0;//边权值和，边的条数
//
//	map<int, int> V;//顶点集/并查集
//
//	vector<edge>::iterator it = E.begin();
//	while (count != n - 1)//n个顶点的树n-1条边
//	{
//		while (it != E.end())//边已经排序了
//		{
//			int a = find_root(V, it->start);
//			int b = find_root(V, it->end);
//			if (a != b)//不在集合中，即没有构成回路
//			{
//				V[b] = a;//并入集合
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
//int prim(vector<edge>* E, int n)//堆优化的普利姆算法O(ElogV)
//{
//	int sum = 0, count = 0;
//	vector<edge>::iterator it;
//	map<int, int> V;
//	V[1] = 1;//第一个节点放入顶点集中
//
//	priority_queue<edge, vector<edge>, cmp> PQ;//优先队列/小根堆
//	it = E[1].begin();
//	while (it != E[1].end())//将第一个节点上的边放入堆
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
//			if (a != b)//不构成回路
//			{
//				V[b] = a;//并入集合
//				sum += temp.length;
//				PQ.pop();
//				//将以此边终点为起点的边纳入堆
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
//	vector<edge> E;//边集，kruskal算法只考虑边，而且要排序，适合用边集
//	while (cin >> n && n != 0)
//	{
//		int num_edge = n * (n - 1) / 2;
//		for (int i = 0; i < num_edge; i++)
//		{
//			int s, e, l;
//			cin >> s >> e >> l;
//			E.push_back(edge(s, e, l));
//			E.push_back(edge(e, s, l));//本题输入是单向的，为了无向图prim算法增加反向边
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
//		vector<edge>* E = new vector<edge>[n + 1];//vector数组模拟邻接表
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