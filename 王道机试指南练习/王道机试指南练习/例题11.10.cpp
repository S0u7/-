//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
///*Instrction Arrangement*/
//struct edge
//{
//	int end, length;
//	edge(int e, int l) :end(e), length(l) {}
//};
//
//int& CriticalPath(vector<edge>*& adjlist, int* inDegree, int& n)
//{
//	queue<int> zero_inDegree;//保存入度为0的事件
//
//	int* earlist = new int[n];//保存事件的最早开始时间
//	fill(earlist, earlist + n, 0);
//
//	for (int i = 0; i < n; i++)//由于采用虚拟源点，将入度为0的事件的最早开始事件设为1
//		if (inDegree[i] == 0)
//		{
//			zero_inDegree.push(i);
//			earlist[i] = 1;
//		}
//	while (!zero_inDegree.empty())
//	{
//		int cur = zero_inDegree.front();
//		zero_inDegree.pop();
//		for (int i = 0; i < adjlist[cur].size(); i++)
//		{
//			int end = adjlist[cur][i].end;
//			int length = adjlist[cur][i].length;
//			//为什么要用max，因为有 >= 一条边(活动)指向这个点(事件)
//			earlist[end] = max(earlist[end], earlist[cur] + length);
//			if (--inDegree[end] == 0)
//				zero_inDegree.push(end);
//		}
//	}
//	int ans = 0;
//	for (int i = 0; i < n; i++)
//		ans = max(ans, earlist[i]);
//	return ans;
//}
//int main()
//{
//	int n, m;
//	while (cin>>n>>m)
//	{
//		vector<edge>* adjlist = new vector<edge>[n];//邻接表
//		int* inDegree = new int[n];//入度表
//		fill(inDegree, inDegree + n, 0);
//		for (int i = 0; i < m; i++)
//		{
//			int s, e, l;
//			cin >> s >> e >> l;
//			adjlist[s].push_back(edge(e, l));
//			inDegree[e]++;
//		}
//		cout << CriticalPath(adjlist, inDegree, n) << endl;
//	}
//	return 0;
//}