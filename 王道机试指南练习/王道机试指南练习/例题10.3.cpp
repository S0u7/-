//#include<iostream>
//using namespace std;
///*��������������N<=100���ؼ���ֵ������ͬ�Ľڵ㣬��Щֵ������10^8
//Ҫ��˳�����һ����ʼΪ�����Ķ����������У�
//ÿ�β����ɹ�������Ӧ�ĸ��׽ڵ�Ĺؼ���ֵ��
//���û�и��׽ڵ㣬�����-1��*/
//struct TNode
//{
//	int data;
//	TNode* left, * right;
//	TNode(int d) :data(d), left(nullptr), right(nullptr) {}
//};
//int Insert(int node, TNode*& tree)//tree����Ҫ����������
//{
//	int father = -1;
//	TNode* move = tree, * parent = nullptr;
//	while (move != nullptr)//��Ҫ����ڵ�ĸ��ڵ�
//	{
//		parent = move;
//		father = move->data;
//		if (node > move->data)
//			move = move->right;
//		else
//			move = move->left;
//	}
//	TNode* temp = new TNode(node);//��ʱ�ڵ�
//	if (parent == nullptr)//���뵽������������
//		tree = temp;
//	else if (node < parent->data)
//		parent->left = temp;
//	else
//		parent->right = temp;
//	return father;
//}
//
//int Insert2(int node, TNode*& tree, int& father)//�ݹ�
//{
//	if (tree == nullptr)
//		tree = new TNode(node);
//	else	
//	{
//		father = tree->data;
//		if (node < tree->data)
//			Insert2(node, tree->left,father);
//		else
//			Insert2(node, tree->right,father);
//	}
//	return father;
//}
//
//int main()
//{
//	int N, node;
//	while (cin>>N)
//	{
//		TNode* tree = nullptr;
//		int father = -1;
//		for (int i = 0; i < N; i++)
//		{
//			cin >> node;
//			//cout << Insert(node, tree) << endl;
//			cout << Insert2(node, tree, father) << endl;
//		}
//	}
//	return 0;
//}