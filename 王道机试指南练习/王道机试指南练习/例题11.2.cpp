//#include<iostream>
//using namespace std;
///*��ͨͼ������һ������ͼ�����е����бߣ��ж����ͼ�Ƿ����ж��㶼����ͨ��0<=n<=1000*/
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
//		father[x] = find_root(father[x]);//·��ѹ��
//	return father[x];
//}
//void Union(int x, int y)
//{
//	x = find_root(x);
//	y = find_root(y);
//	if (x != y)
//	{//�����������ϲ�
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