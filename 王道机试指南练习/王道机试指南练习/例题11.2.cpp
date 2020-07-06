//#include<iostream>
//using namespace std;
///*连通图：给定一个无向图和其中的所有边，判断这个图是否所有顶点都是连通的0<=n<=1000*/
//const int maxn = 1000;
//int father[maxn];
//int	height[maxn];
//void Initial(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		father[i] = i;
//		height[i] = 0;
//	}
//}
//int find_root(int x)
//{
//	if (x != father[x])
//		father[x] = find_root(father[x]);//路劲压缩
//	return father[x];
//}
//void Union(int x, int y)
//{
//	x = find_root(x);
//	y = find_root(y);
//	if (x != y)
//	{//矮树往高树合并
//		if (height[x] > height[y])
//			father[y] = x;
//		else if (height[x] < height[y])
//			father[x] = y;
//		else
//		{
//			father[y] = x;
//			height[x]++;
//		}
//	}
//}
//int main()
//{
//	int n, m, i;
//	while (cin>>n>>m)
//	{
//		if (n == 0 && m == 0)
//			break;
//		Initial(n);
//		for (i = 0; i < m; i++)
//		{
//			int x, y;
//			cin >> x >> y;
//			Union(x, y);
//		}
//		for (i = 1; i <= n; i++)
//		{
//			if (father[i] != father[1])
//			{
//				cout << "NO" << endl;
//				break;
//			}
//		}
//		if (i == n + 1)
//			cout << "YES" << endl;
//	}
//	return 0;
//}