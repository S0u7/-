//#include<iostream>
//#include<vector>
//#include<queue>
//#include<string>
//using namespace std;
///*最短路径：N个城市，标号从0到N-1，M条道路，第K条道路（K从0开始）的长度为2^K，
//求编号为0的城市到其他城市的最短距离（2<=N<=100）M(M<=500),大数*/
//struct edge
//{
//	int stop;
//	string length;
//	edge(int s, string l) :stop(s), length(l) {}
//};
//struct point
//{
//	int num;
//	string distance;
//	point(int n, string d) :num(n), distance(d) {}
//	bool operator<(const point& p)const
//	{
//		return this->distance > p.distance;
//	}
//};
//string str_add(const string& str1, const string& str2)//大数加法
//{
//	string ans = "";
//	int i = str1.size() - 1, j = str2.size() - 1, carry = 0;
//	while (i != -1 && j != -1)
//	{
//		int temp = (str1[i] - '0') + (str2[j] - '0') + carry;
//		ans.insert(0, 1, (temp % 10) + '0');
//		carry = temp / 10;
//		i--;
//		j--;
//	}
//	while (i != -1)
//	{
//		int temp = (str1[i] - '0') + carry;
//		ans.insert(0, 1, (temp % 10) + '0');
//		carry = temp / 10;
//		i--;
//	}
//	while (j != -1)
//	{
//		int temp = (str2[j] - '0') + carry;
//		ans.insert(0, 1, (temp % 10) + '0');
//		carry = temp / 10;
//		j--;
//	}
//	if (carry != 0)
//		ans.insert(0, 1, carry + '0');
//	return ans;
//}
//string str_mul(string& str,int x)//大数乘法
//{
//	string ans = "";
//	int i = str.size() - 1, carry = 0;;
//	while (i != -1)
//	{
//		int temp = (str[i] - '0') * x + carry;
//		ans.insert(0, 1, (temp % 10) + '0');
//		carry = temp / 10;
//		i--;
//	}
//	if (carry != 0)
//		ans.insert(0, 1, carry + '0');
//	return ans;
//}
//int str_mod(string str) //大数取模
//{
//	int rem = 0;
//	for (unsigned int i = 0; i < str.size(); i++) 
//	{
//		int current = 10 * rem + str[i] - '0';
//		rem = current % 100000;
//		str[i] = current / 100000;
//	}
//	return rem;
//}
//bool str_less(const string& str1, const string& str2)//大数比较大小
//{
//	if (str1.size() < str2.size())
//		return true;
//	else if (str1.size() > str2.size())
//		return false;
//	else
//	{
//		for (unsigned int i = 0; i < str1.size(); i++)
//		{
//			if (str1[i] - '0' > str2[i] - '0')
//				return false;
//			else if (str1[i] - '0' < str2[i] - '0')
//				return true;
//		}
//	}
//	return false;//相等
//}
//
//string*& Dijkstra(vector<edge>*& road, int& n)
//{
//	string* dis = new string[n];
//	for (int i = 0; i < n; i++)//初始化
//		dis[i] = "inf";
//	dis[0] = "0";
//
//	priority_queue<point> PQ;//优先队列，用于挑选每回合距离最小的点
//	PQ.push(point(0, dis[0]));
//
//	while (!PQ.empty())
//	{
//		int current = PQ.top().num;
//		PQ.pop();
//		for (unsigned int i = 0; i < road[current].size(); i++)
//		{
//			if (dis[current] == "inf")
//				continue;
//			else
//			{
//				int end = road[current][i].stop;
//				string length = road[current][i].length;
//				string l = str_add(dis[current], length);
//				//如果通过current到达end距离 < 之前路径到达end，就选这条路
//				if (dis[end] == "inf" || str_less(l, dis[end]))
//				{
//					dis[end] = l;
//					PQ.push(point(end, dis[end]));
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)//不可达置-1
//		if (dis[i] == "inf")
//			dis[i] = "-1";
//	return dis;
//}
///*最短路径迪杰斯特拉算法*/
//void test()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		vector<edge>* road = new vector<edge>[n];//邻接表
//		string l = "1";
//		for (int i = 1; i <= m; i++)
//		{
//			int s, e;
//			cin >> s >> e;
//			road[s].push_back(edge(e, l));
//			road[e].push_back(edge(s, l));//无向图，反向也存进去便于后面操作
//			l = str_mul(l, 2);
//		}
//		string* ans = Dijkstra(road, n);
//		for (int i = 1; i < n; i++)
//			cout << str_mod(ans[i]) << endl;
//	}
//}
///*并查集最小生成树方法
//注意到第k条路径的长度为2^K，则第k条路径的长度会大于前k-1条路径的总和。
//由此我们可知两个推断：
//（1）在添加第k条路径时，如果路径k连接的两个城市A 、B已经通过其他路径间接的连通了，
//那么第k条路径绝对不是AB间的最短路径（第k条路径之后的路径也不可能有比当前AB路径更短的
//路径了，因为第k条路径的长度会大于前k-1条路径的总和）
//（2）在添加第k条路径时，如果路径k连接的两个城市A 、B是第一次被连通了（也就是说此前没有
//任何路径能连通AB，包括通过多条路径间接连通），那么路径k就是AB之间的最短距离了，
//因为以后不可能存在更短的路径连接AB，以后的单条路径只会越来越长。
//除此之外我们还可以看看通过这条路径能不能让A集合里的城市到B集合里的城市的路径更短呢？
//通过上述的推断，我们可以利通过建立一个最小生成树的同时算出0号城市到各个城市的最小路径。
//*/
//int FindRoot(int*& Tree, int x)
//{
//	if (Tree[x] == -1)
//		return x;
//	else
//	{
//		Tree[x] = FindRoot(Tree, Tree[x]);
//		return Tree[x];
//	}
//}
//int mod(int x, int y)
//{
//	int ret = 1;
//	while (y--)
//		ret = (ret * x) % 100000;
//	return ret;
//}
//void test1()
//{
//	int n, m;
//	while (cin>>n>>m) 
//	{
//		int i, j, k, a, b, x, y, dist;
//		int* Tree = new int[n];
//		int** dis = new int* [n];
//		for (i = 0; i < n; i++) 
//		{
//			Tree[i] = -1;
//			dis[i] = new int[n];
//			for (j = 0; j < n; j++)
//				dis[i][j] = -1;
//			dis[i][i] = 0;
//		}
//		for (i = 0; i < m; i++) 
//		{
//			cin >> a >> b;
//			x = FindRoot(Tree, a);
//			y = FindRoot(Tree, b);
//			if (x != y) 
//			{
//				dist = mod(2, i);
//				//检查通过这条路的其他路程能不能变短
//				for (j = 0; j < n; j++) 
//				{
//					if (x == FindRoot(Tree, j)) 
//					{
//						for (k = 0; k < n; k++) 
//						{
//							if (y == FindRoot(Tree, k)) 
//							{
//								dis[j][k] = dis[k][j] = 
//									(dis[j][a] + dis[b][k] + dist) % 100000;
//							}
//						}
//					}
//				}
//				Tree[y] = x;
//			}
//		}
//		for (i = 1; i < n; i++) 
//			cout << dis[0][i] << endl;
//	}
//}
//int main()
//{
//	//test();
//	test1();
//	return 0;
//}