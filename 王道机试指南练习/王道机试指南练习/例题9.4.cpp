//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
///*square:������4<=M<=20����ľ�����ж��ܷ񹹳�һ��������
//˼�룺�����������DFS + ������֦*/
//const int maxn = 25;
//int stick[maxn];
//bool visit[maxn];
//
//bool DFS(int side, int m, int sum, int num, int pos)
//{
//	if (num == 3)//���߶�������,ʣ��һ���߿϶�Ҳ����
//		return true;
//	int current = 0;//��¼��ǰ������ľ������,����ʧ������ͬ�����ȵĿ���ֱ������(��֦)
//	for (int i = pos; i < m; i++)//�����ÿ�β��ô�ͷ��ʼ��(��֦)
//	{
//		if (visit[i] || sum + stick[i] > side || stick[i] == current)
//			continue;
//		visit[i] = true;
//		if (sum + stick[i] == side)//���һ����
//			if (DFS(side, m, 0, num + 1, 0))
//				return true;
//			else
//				current = stick[i];//û�ҵ�ʱ����һ�����ľͲ�������
//		else
//			if (DFS(side, m, sum + stick[i], num, i + 1))//ûƴ��һ���ߣ���������һ��
//				return true;
//			else
//				current = stick[i];
//		visit[i] = false;//����һ��ݹ�û�ҵ���Ҫ�˵��������
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
//		if (length % 4 != 0)//�ܳ��Ȳ��ܳ�4
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