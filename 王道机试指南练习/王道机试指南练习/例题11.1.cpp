//#include<iostream>
//using namespace std;
///*��ͨ���̣�N < 1000������M��·����ʹÿ������֮�䶼����ͨ�ģ�����Ҫ����·
//���鼯��1������������ �ϲ� 2���ø����ڵ����һ������*/
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
//	if (x != father[x])//��Ԫ�ز��Ǽ��ϸ���ʱ
//		father[x] = Find(father[x]);//·��ѹ����ֱ��ָ����ڵ㣬ʹ������С
//	return father[x];
//}
//void Union(int x, int y)
//{
//	x = Find(x);//���ҵ����ϸ���
//	y = Find(y);
//	if (x != y)//����ͬһ�����ϸ�����������ͬһ������
//	{//�����������ϲ�,��߲�ѯЧ��
//		if (height[x] < height[y])
//			father[x] = y;
//		else if (height[x] > height[y])
//			father[y] = x;
//		else//һ����
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
//		int ans = -1;//N����������N-1��·������ͨ��
//		for (int i = 1; i <= N; i++)
//			if (Find(i) == i)//��鼯����������û��ͨ�ĳ�������
//				ans++;
//		cout << ans << endl;
//	}
//	return 0;
//}