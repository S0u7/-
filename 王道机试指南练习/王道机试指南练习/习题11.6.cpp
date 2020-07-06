//#include<iostream>
//#include<vector>
//#include<queue>
//#include<string>
//using namespace std;
///*���·����N�����У���Ŵ�0��N-1��M����·����K����·��K��0��ʼ���ĳ���Ϊ2^K��
//����Ϊ0�ĳ��е��������е���̾��루2<=N<=100��M(M<=500),����*/
//struct edge
//{
//	int stop;
//	string length;
//	edge(int s, string l) :stop(s), length(l) {}
//};
//struct point
//{
//	int num;
//	string distance;
//	point(int n, string d) :num(n), distance(d) {}
//	bool operator<(const point& p)const
//	{
//		return this->distance > p.distance;
//	}
//};
//string str_add(const string& str1, const string& str2)//�����ӷ�
//{
//	string ans = "";
//	int i = str1.size() - 1, j = str2.size() - 1, carry = 0;
//	while (i != -1 && j != -1)
//	{
//		int temp = (str1[i] - '0') + (str2[j] - '0') + carry;
//		ans.insert(0, 1, (temp % 10) + '0');
//		carry = temp / 10;
//		i--;
//		j--;
//	}
//	while (i != -1)
//	{
//		int temp = (str1[i] - '0') + carry;
//		ans.insert(0, 1, (temp % 10) + '0');
//		carry = temp / 10;
//		i--;
//	}
//	while (j != -1)
//	{
//		int temp = (str2[j] - '0') + carry;
//		ans.insert(0, 1, (temp % 10) + '0');
//		carry = temp / 10;
//		j--;
//	}
//	if (carry != 0)
//		ans.insert(0, 1, carry + '0');
//	return ans;
//}
//string str_mul(string& str,int x)//�����˷�
//{
//	string ans = "";
//	int i = str.size() - 1, carry = 0;;
//	while (i != -1)
//	{
//		int temp = (str[i] - '0') * x + carry;
//		ans.insert(0, 1, (temp % 10) + '0');
//		carry = temp / 10;
//		i--;
//	}
//	if (carry != 0)
//		ans.insert(0, 1, carry + '0');
//	return ans;
//}
//int str_mod(string str) //����ȡģ
//{
//	int rem = 0;
//	for (unsigned int i = 0; i < str.size(); i++) 
//	{
//		int current = 10 * rem + str[i] - '0';
//		rem = current % 100000;
//		str[i] = current / 100000;
//	}
//	return rem;
//}
//bool str_less(const string& str1, const string& str2)//�����Ƚϴ�С
//{
//	if (str1.size() < str2.size())
//		return true;
//	else if (str1.size() > str2.size())
//		return false;
//	else
//	{
//		for (unsigned int i = 0; i < str1.size(); i++)
//		{
//			if (str1[i] - '0' > str2[i] - '0')
//				return false;
//			else if (str1[i] - '0' < str2[i] - '0')
//				return true;
//		}
//	}
//	return false;//���
//}
//
//string*& Dijkstra(vector<edge>*& road, int& n)
//{
//	string* dis = new string[n];
//	for (int i = 0; i < n; i++)//��ʼ��
//		dis[i] = "inf";
//	dis[0] = "0";
//
//	priority_queue<point> PQ;//���ȶ��У�������ѡÿ�غϾ�����С�ĵ�
//	PQ.push(point(0, dis[0]));
//
//	while (!PQ.empty())
//	{
//		int current = PQ.top().num;
//		PQ.pop();
//		for (unsigned int i = 0; i < road[current].size(); i++)
//		{
//			if (dis[current] == "inf")
//				continue;
//			else
//			{
//				int end = road[current][i].stop;
//				string length = road[current][i].length;
//				string l = str_add(dis[current], length);
//				//���ͨ��current����end���� < ֮ǰ·������end����ѡ����·
//				if (dis[end] == "inf" || str_less(l, dis[end]))
//				{
//					dis[end] = l;
//					PQ.push(point(end, dis[end]));
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)//���ɴ���-1
//		if (dis[i] == "inf")
//			dis[i] = "-1";
//	return dis;
//}
///*���·���Ͻ�˹�����㷨*/
//void test()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		vector<edge>* road = new vector<edge>[n];//�ڽӱ�
//		string l = "1";
//		for (int i = 1; i <= m; i++)
//		{
//			int s, e;
//			cin >> s >> e;
//			road[s].push_back(edge(e, l));
//			road[e].push_back(edge(s, l));//����ͼ������Ҳ���ȥ���ں������
//			l = str_mul(l, 2);
//		}
//		string* ans = Dijkstra(road, n);
//		for (int i = 1; i < n; i++)
//			cout << str_mod(ans[i]) << endl;
//	}
//}
///*���鼯��С����������
//ע�⵽��k��·���ĳ���Ϊ2^K�����k��·���ĳ��Ȼ����ǰk-1��·�����ܺ͡�
//�ɴ����ǿ�֪�����ƶϣ�
//��1������ӵ�k��·��ʱ�����·��k���ӵ���������A ��B�Ѿ�ͨ������·����ӵ���ͨ�ˣ�
//��ô��k��·�����Բ���AB������·������k��·��֮���·��Ҳ�������бȵ�ǰAB·�����̵�
//·���ˣ���Ϊ��k��·���ĳ��Ȼ����ǰk-1��·�����ܺͣ�
//��2������ӵ�k��·��ʱ�����·��k���ӵ���������A ��B�ǵ�һ�α���ͨ�ˣ�Ҳ����˵��ǰû��
//�κ�·������ͨAB������ͨ������·�������ͨ������ô·��k����AB֮�����̾����ˣ�
//��Ϊ�Ժ󲻿��ܴ��ڸ��̵�·������AB���Ժ�ĵ���·��ֻ��Խ��Խ����
//����֮�����ǻ����Կ���ͨ������·���ܲ�����A������ĳ��е�B������ĳ��е�·�������أ�
//ͨ���������ƶϣ����ǿ�����ͨ������һ����С��������ͬʱ���0�ų��е��������е���С·����
//*/
//int FindRoot(int*& Tree, int x)
//{
//	if (Tree[x] == -1)
//		return x;
//	else
//	{
//		Tree[x] = FindRoot(Tree, Tree[x]);
//		return Tree[x];
//	}
//}
//int mod(int x, int y)
//{
//	int ret = 1;
//	while (y--)
//		ret = (ret * x) % 100000;
//	return ret;
//}
//void test1()
//{
//	int n, m;
//	while (cin>>n>>m) 
//	{
//		int i, j, k, a, b, x, y, dist;
//		int* Tree = new int[n];
//		int** dis = new int* [n];
//		for (i = 0; i < n; i++) 
//		{
//			Tree[i] = -1;
//			dis[i] = new int[n];
//			for (j = 0; j < n; j++)
//				dis[i][j] = -1;
//			dis[i][i] = 0;
//		}
//		for (i = 0; i < m; i++) 
//		{
//			cin >> a >> b;
//			x = FindRoot(Tree, a);
//			y = FindRoot(Tree, b);
//			if (x != y) 
//			{
//				dist = mod(2, i);
//				//���ͨ������·������·���ܲ��ܱ��
//				for (j = 0; j < n; j++) 
//				{
//					if (x == FindRoot(Tree, j)) 
//					{
//						for (k = 0; k < n; k++) 
//						{
//							if (y == FindRoot(Tree, k)) 
//							{
//								dis[j][k] = dis[k][j] = 
//									(dis[j][a] + dis[b][k] + dist) % 100000;
//							}
//						}
//					}
//				}
//				Tree[y] = x;
//			}
//		}
//		for (i = 1; i < n; i++) 
//			cout << dis[0][i] << endl;
//	}
//}
//int main()
//{
//	//test();
//	test1();
//	return 0;
//}