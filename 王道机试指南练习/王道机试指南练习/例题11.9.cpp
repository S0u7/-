//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
///*ȷ����������,��Ŵ�1��ʼ,Ҫ��С��������ǰ*/
//int* TopoSort(vector<int>*& adjlist, int*& inDegree, int& n)
//{
//	int* ans = new int[n + 1];
//	priority_queue<int,vector<int>,greater<int> > zeroDegree;//����ѣ����Ϊ0ʱ�ô������ȡ������֤С������ǰ
//	for (int i = 0; i <= n; i++)
//		if (inDegree[i] == 0)
//			zeroDegree.push(i);
//	int i = 0;
//	while (!zeroDegree.empty())
//	{
//		int cur = zeroDegree.top();
//		zeroDegree.pop();
//		ans[i] = cur;
//		i++;
//		for (int i = 0; i < adjlist[cur].size(); i++)
//		{
//			int x = adjlist[cur][i];
//			inDegree[x]--;
//			if (inDegree[x] == 0)
//				zeroDegree.push(x);
//		}
//	}
//	return ans;
//}
//int main()
//{
//	int n, m;
//	while (cin>>n>>m)
//	{
//		vector<int>* adjlist = new vector<int>[n + 1];//1-n�ڽӱ�
//		int* inDegree = new int[n + 1];
//		fill(inDegree, inDegree + n + 1, 0);
//		for (int i = 0; i < m; i++)
//		{
//			int a, b;
//			cin >> a >> b;
//			adjlist[a].push_back(b);
//			inDegree[b]++;//�ظ�����ͬһ����Ҳ��Ӱ�죬��Ϊ���������Ҳ����
//		}
//		int* ans = TopoSort(adjlist, inDegree, n);
//		for (int i = 1; i < n; i++)
//			cout << ans[i] << " ";
//		cout << ans[n] << endl;//���һ������ո�
//	}
//	return 0;
//}
///*
//6 12
//3 1
//3 1
//3 2
//3 2
//4 2
//5 2
//4 3
//4 3
//6 3
//6 4
//6 5
//6 5
//
//6 4 3 1 5 2
//*/