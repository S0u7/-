//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
///*����
//1<=n<=10^5,1<=m<=5*10^5,1<=ai<=10^6*/
//const int MOD = 1000000000 + 7;
//long long* CriticalPath(vector<int>*& adjlist, int*& inDegree, int*& time, int& n)
//{
///*C++��������һ��������������Ϊ�����Ĳ���������������ͨ��ָ������������������������
//��ָ�������ָ�롣�������Ҫ�Ӻ�������һ��һά���飬����������һ������ָ��ĺ�����
//���⣬C++ ��֧���ں����ⷵ�ؾֲ������ĵ�ַ�����Ƕ���ֲ�����Ϊ static ������
//����ʹ��malloc����Ϊʹ��malloc������ڴ����ڶ��϶�������ջ�ڴ�����*/
//
//	//long long ans[2] = { 0, 1};//��̬���飬������ִ����ͱ��ͷ���
//	//static long long ans[2];//����static�Ͳ��ͷ���
//	long long* ans = new long long[2];//�����ö�̬���飬�����ռ��ڶ���
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