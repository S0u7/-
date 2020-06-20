//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
///*square:给若干4<=M<=20长度木棍，判断能否构成一个正方形
//思想：深度优先搜索DFS + 条件剪枝*/
//const int maxn = 25;
//int stick[maxn];
//bool visit[maxn];
//
//bool DFS(int side, int m, int sum, int num, int pos)
//{
//	if (num == 3)//三边都构成了,剩下一个边肯定也构成
//		return true;
//	int current = 0;//记录当前搜索的木棍长度,若它失败遇到同样长度的可以直接跳过(剪枝)
//	for (int i = pos; i < m; i++)//排序后每次不用从头开始找(剪枝)
//	{
//		if (visit[i] || sum + stick[i] > side || stick[i] == current)
//			continue;
//		visit[i] = true;
//		if (sum + stick[i] == side)//完成一条边
//			if (DFS(side, m, 0, num + 1, 0))
//				return true;
//			else
//				current = stick[i];//没找到时遇到一样长的就不用找了
//		else
//			if (DFS(side, m, sum + stick[i], num, i + 1))//没拼够一条边，接着找下一个
//				return true;
//			else
//				current = stick[i];
//		visit[i] = false;//若下一层递归没找到，要退到现在这根
//	}
//	return false;
//}
//
//bool comp(int x, int y)
//{
//	return x > y;
//}
//
//int main()
//{
//	int n, side, m;
//	cin >> n;
//	while (n--)
//	{
//		int length = 0;
//		cin >> m;
//		for (int i = 0; i < m; i++)
//		{
//			cin >> stick[i];
//			length += stick[i];
//		}
//		memset(visit, false, sizeof(visit));
//		if (length % 4 != 0)//总长度不能除4
//		{
//			cout << "no" << endl;
//			continue;
//		}
//		side = length / 4;
//		sort(stick, stick + m, comp);
//		if (stick[0] > side)
//		{
//			cout << "no" << endl;
//			continue;
//		}
//		if (DFS(side, m, 0, 0, 0))
//			cout << "yes" << endl;
//		else
//			cout << "no" << endl;
//	}
//	return 0;
//}