//#include<iostream>
//using namespace std;
///*畅通工程：N < 1000个城镇，M条路。问使每个城镇之间都是联通的，还需要几条路
//并查集：1、操作：查找 合并 2、用根部节点代表一个集合*/
//const int maxn = 1000;
//int father[maxn];
//int height[maxn];
//
//void Initial(int n)
//{
//	for (int i = 0; i <= n; i++)
//	{
//		father[i] = i;
//		height[i] = 0;
//	}
//}
//int Find(int x)
//{
//	if (x != father[x])//当元素不是集合根部时
//		father[x] = Find(father[x]);//路劲压缩，直接指向根节点，使树高最小
//	return father[x];
//}
//void Union(int x, int y)
//{
//	x = Find(x);//先找到集合根部
//	y = Find(y);
//	if (x != y)//不是同一个集合根部，即不是同一个集合
//	{//矮树往高树合并,提高查询效率
//		if (height[x] < height[y])
//			father[x] = y;
//		else if (height[x] > height[y])
//			father[y] = x;
//		else//一样高
//		{
//			father[y] = x;
//			height[x]++;
//		}
//	}
//}
//int main()
//{
//	int N, M;
//	while (cin>>N && N != 0 && cin>>M)
//	{
//		Initial(N);
//		while (M--)
//		{
//			int x, y;
//			cin >> x >> y;
//			Union(x, y);
//		}
//		int ans = -1;//N个城镇最少N-1条路就能连通了
//		for (int i = 1; i <= N; i++)
//			if (Find(i) == i)//检查集合数量，即没连通的城镇数量
//				ans++;
//		cout << ans << endl;
//	}
//	return 0;
//}