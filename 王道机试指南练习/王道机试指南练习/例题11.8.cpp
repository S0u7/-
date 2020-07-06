//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
///*legall or not:给出一些师徒关系，判断这些关系是否成立2 <= N, M <= 100*/
//bool TopoSort(vector<int>*& master,int*& inDegree, int& n)
//{
//	queue<int> zero_degree;
//	for (int i = 0; i < n; i++)//放入度为0的点
//		if (inDegree[i] == 0)
//			zero_degree.push(i);
//	int i = 0;
//	while (!zero_degree.empty())
//	{
//		int cur = zero_degree.front();
//		zero_degree.pop();
//		i++;
//		for (int i = 0; i < master[cur].size(); i++)
//		{
//			int x = master[cur][i];
//			inDegree[x]--;
//			if (inDegree[x] == 0)
//				zero_degree.push(x);
//		}
//	}
//	return i == n;
//}
//int main()
//{
//	int n, m;
//	 
//	while (cin>>n>>m)
//	{	
//		if (n == 0)
//			break;
//		vector<int>* relation = new vector<int>[n];//邻接表
//		int* inDegree = new int[n];
//		fill(inDegree, inDegree + n, 0);
//		for (int i = 0; i < m; i++)
//		{
//			int m, p;
//			cin >> m >> p;
//			relation[m].push_back(p);//master -> precint
//			inDegree[p]++;
//		}
//		if (TopoSort(relation, inDegree, n))
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//	return 0;
//}