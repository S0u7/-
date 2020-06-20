//#include<iostream>
//using namespace std;
//#include<queue>
////#include<map>
//#include<cstring>
////#include<unordered_map>
///*Catch That Cow, (0 <= N <= 100,000),(0 <= K <= 100,000)
//算法思想：三叉树层次遍历(宽度优先搜索)*/
//struct TNode
//{
//	int pos[4];
//	TNode() {}//无参构造(不可省)
//	TNode(int p)//有参构造
//	{
//		pos[0] = p;//当前位置
//		pos[1] = p - 1;
//		pos[2] = p + 1;
//		pos[3] = 2 * p;
//	}
//};
//void test2()
//{
//	int N, K;
//	queue<TNode> Q;//层次遍历队列
//	//unordered_map<int, bool> mark;//标记走过的位置，用哈希map查询快,但是编译器不支持
//	//map<int,bool> mark;//map使用红黑树,查询O(logn)建树也耗时
//	bool* mark = new bool[100001];
//
//	while (cin >> N >> K)
//	{
//		//l_c:当前层最后一个节点,l_n:下一层最后一个节点
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
//			for (int i = 1; i <= 3; i++)//三种方式找
//			{
//				if (FJ.pos[i] >= 0 && FJ.pos[i] <= 100000 
//					&& mark[FJ.pos[i]] != true)//没找过的位置入队
//				{
//					Q.push(TNode(FJ.pos[i]));//入队
//					mark[FJ.pos[i]] = true;//标记
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
//		//善后:容器置空
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