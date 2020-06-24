//#include<iostream>
//using namespace std;
///*二叉排序树：给N<=100个关键字值各不相同的节点，这些值不超过10^8
//要求按顺序插入一个初始为空树的二叉排序树中，
//每次插入后成功后，求相应的父亲节点的关键字值，
//如果没有父亲节点，则输出-1。*/
//struct TNode
//{
//	int data;
//	TNode* left, * right;
//	TNode(int d) :data(d), left(nullptr), right(nullptr) {}
//};
//int Insert(int node, TNode*& tree)//tree必须要用引用类型
//{
//	int father = -1;
//	TNode* move = tree, * parent = nullptr;
//	while (move != nullptr)//找要插入节点的父节点
//	{
//		parent = move;
//		father = move->data;
//		if (node > move->data)
//			move = move->right;
//		else
//			move = move->left;
//	}
//	TNode* temp = new TNode(node);//临时节点
//	if (parent == nullptr)//插入到二叉排序树中
//		tree = temp;
//	else if (node < parent->data)
//		parent->left = temp;
//	else
//		parent->right = temp;
//	return father;
//}
//
//int Insert2(int node, TNode*& tree, int& father)//递归
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