//#include<iostream>
//using namespace std;
//#include<queue>
////#include<map>
//#include<cstring>
////#include<unordered_map>
///*Catch That Cow, (0 <= N <= 100,000),(0 <= K <= 100,000)
//�㷨˼�룺��������α���(�����������)*/
//struct TNode
//{
//	int pos[4];
//	TNode() {}//�޲ι���(����ʡ)
//	TNode(int p)//�вι���
//	{
//		pos[0] = p;//��ǰλ��
//		pos[1] = p - 1;
//		pos[2] = p + 1;
//		pos[3] = 2 * p;
//	}
//};
//void test2()
//{
//	int N, K;
//	queue<TNode> Q;//��α�������
//	//unordered_map<int, bool> mark;//����߹���λ�ã��ù�ϣmap��ѯ��,���Ǳ�������֧��
//	//map<int,bool> mark;//mapʹ�ú����,��ѯO(logn)����Ҳ��ʱ
//	bool* mark = new bool[100001];
//
//	while (cin >> N >> K)
//	{
//		//l_c:��ǰ�����һ���ڵ�,l_n:��һ�����һ���ڵ�
//		TNode FJ(N), last_current, last_next;
//		int cost = 0;
//
//		Q.push(FJ);
//		last_current = FJ;
//		last_next = NULL;
//		mark[N] = true;
//
//		while (FJ.pos[0] != K)
//		{
//			for (int i = 1; i <= 3; i++)//���ַ�ʽ��
//			{
//				if (FJ.pos[i] >= 0 && FJ.pos[i] <= 100000 
//					&& mark[FJ.pos[i]] != true)//û�ҹ���λ�����
//				{
//					Q.push(TNode(FJ.pos[i]));//���
//					mark[FJ.pos[i]] = true;//���
//					last_next = TNode(FJ.pos[i]);
//				}
//				else
//					continue;
//			}
//			if (FJ.pos[0] == last_current.pos[0])
//			{
//				last_current = last_next;
//				cost++;
//			}
//			Q.pop();
//			FJ = Q.front();
//		}
//		cout << cost << endl;
//		//�ƺ�:�����ÿ�
//		while (!Q.empty())
//			Q.pop();
//		//mark.clear();
//		memset(mark, false, 100001*sizeof(bool));
//	}
//}
//int main()
//{
//	test2();
//	return 0;
//}