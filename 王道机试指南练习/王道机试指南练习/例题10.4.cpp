//#include<iostream>
//using namespace std;
///*����������������1<=n<=100������,��������������,������ǰ��,����,���������
//�����п������ظ�Ԫ�أ���������Ķ����������������ظ�Ԫ�ز��������*/
//struct TNode
//{
//	int data;
//	TNode* left, * right;
//	TNode(int x) :data(x), left(nullptr), right(nullptr) {}
//};
//
//void build(int node, TNode*& tree)
//{
//	TNode* move = tree, * parent = nullptr;
//	while (move != nullptr)
//	{
//		parent = move;
//		if (node < move->data)
//			move = move->left;
//		else if (node > move->data)
//			move = move->right;
//		else
//			return;
//	}
//	TNode* temp = new TNode(node);
//	if (parent == nullptr)
//		tree = temp;
//	else if (node < parent->data)
//		parent->left = temp;
//	else
//		parent->right = temp;
//}
//void preOrder(TNode*& tree)
//{
//	if (tree != nullptr)
//	{
//		cout << tree->data << " ";
//		preOrder(tree->left);
//		preOrder(tree->right);
//	}
//}
//void inOrder(TNode*& tree)
//{
//	if (tree != nullptr)
//	{
//		inOrder(tree->left);
//		cout << tree->data << " ";
//		inOrder(tree->right);
//	}
//}
//
//void postOrder(TNode*& tree)
//{
//	if (tree != nullptr)
//	{
//		postOrder(tree->left);
//		postOrder(tree->right);
//		cout << tree->data << " ";
//	}
//}
//int main()
//{
//	int n;
//	while (cin>>n)
//	{
//		int node;
//		TNode* tree = nullptr;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> node;
//			build(node, tree);
//		}
//		preOrder(tree);
//		cout << endl;
//		inOrder(tree);
//		cout << endl;
//		postOrder(tree);
//		cout << endl;
//	}
//	return 0;
//}