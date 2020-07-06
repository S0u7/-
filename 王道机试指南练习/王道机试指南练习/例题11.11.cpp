//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
///*论文
//1<=n<=10^5,1<=m<=5*10^5,1<=ai<=10^6*/
//const int MOD = 1000000000 + 7;
//long long* CriticalPath(vector<int>*& adjlist, int*& inDegree, int*& time, int& n)
//{
///*C++不允许返回一个完整的数组作为函数的参数。但是您可以通过指定不带索引的数组名来返回
//个指向数组的指针。如果您想要从函数返回一个一维数组，您必须声明一个返回指针的函数。
//另外，C++ 不支持在函数外返回局部变量的地址，除非定义局部变量为 static 变量。
//或者使用malloc，因为使用malloc分配的内存是在堆上而不是在栈内存上面*/
//
//	//long long ans[2] = { 0, 1};//静态数组，当函数执行完就被释放了
//	//static long long ans[2];//加上static就不释放了
//	long long* ans = new long long[2];//或者用动态数组，创建空间在堆上
//
//	long long* earlist = new long long[n + 1];
//	fill(earlist, earlist + n + 1, 0);
//	long long* latest = new long long[n + 1];
//	fill(latest, latest + n + 1, 0);
//
//	vector<int> topo_result;
//	queue<int> zero_inDegree;
//	for (int i = 1; i <= n; i++)
//		if (inDegree[i] == 0)
//			zero_inDegree.push(i);
//
//	ans[0] = 0;
//	while (!zero_inDegree.empty())
//	{
//		int cur = zero_inDegree.front();
//		zero_inDegree.pop();
//		topo_result.push_back(cur);
//		for (unsigned int i = 0; i < adjlist[cur].size(); i++)
//		{
//			int next = adjlist[cur][i];
//			earlist[next] = max(earlist[next], earlist[cur] + time[cur]);
//			if (--inDegree[next] == 0)
//			{
//				zero_inDegree.push(next);
//				ans[0] = max(ans[0], earlist[next] + time[next]);
//			}
//		}
//	}
//	for (int i = topo_result.size() - 1; i >= 0; i--)
//	{
//		int cur = topo_result[i];
//		if (adjlist[cur].size() == 0)
//			latest[cur] = ans[0] - time[cur];
//		else
//			latest[cur] = 0xfffffff;
//		for (unsigned int j = 0; j < adjlist[cur].size(); j++)
//		{
//			int next = adjlist[cur][j];
//			latest[cur] = min(latest[cur], latest[next] - time[cur]);
//		}
//	}
//	ans[1] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ans[1] *= latest[i] - earlist[i] + 1;
//		ans[1] %= MOD;
//	}
//	return ans;
//}
//
//int main()
//{
//	int n, m;
//	while (cin>>n>>m)
//	{
//		int* time = new int[n + 1];
//		for (int i = 1; i <= n; i++)
//			cin >> time[i];
//		vector<int>* adjlist = new vector<int>[n + 1];
//		int* inDegree = new int[n + 1];
//		fill(inDegree, inDegree + n + 1, 0);
//		for (int i = 0; i < m; i++)
//		{
//			int s, e;
//			cin >> s >> e;
//			adjlist[s].push_back(e);
//			inDegree[e]++;
//		}
//		long long* ans = CriticalPath(adjlist, inDegree, time, n);
//		cout << ans[0] << endl << ans[1] << endl;
//		delete[] time, adjlist, inDegree, ans;
//	}
//	return 0;
//}
///*
//7 5
//11 20 17 10 11 17 17
//5 4
//6 1
//7 3
//2 4
//2 1
//
//34
//7840
//*/