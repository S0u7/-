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
//	queue<int> zero_inDegree;//�������Ϊ0���¼�
//
//	int* earlist = new int[n];//�����¼������翪ʼʱ��
//	fill(earlist, earlist + n, 0);
//
//	for (int i = 0; i < n; i++)//���ڲ�������Դ�㣬�����Ϊ0���¼������翪ʼ�¼���Ϊ1
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
//			//ΪʲôҪ��max����Ϊ�� >= һ����(�)ָ�������(�¼�)
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
//		vector<edge>* adjlist = new vector<edge>[n];//�ڽӱ�
//		int* inDegree = new int[n];//��ȱ�
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