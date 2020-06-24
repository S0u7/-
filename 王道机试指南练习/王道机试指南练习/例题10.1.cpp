//#include<iostream>
//#include<string>
//using namespace std;
///*二叉树遍历：根据二叉树先序遍历字符串，要求输出中序遍历结果*/
//struct TNode
//{
//	char data;
//	TNode* left, * right;
//};
////根据先序构造二叉树
//TNode* build(string &pre, int& i)//i 必须要用引用类型,否则递归时 i会产生错误
//{
//	if (pre[i] == '#')
//	{
//		i++;//没有孩子，坐标i也要++
//		return NULL;
//	}
//	TNode* root = new TNode;
//	root->data = pre[i++];
//	root->left = build(pre, i);
//	root->right = build(pre, i);
//	return root;
//}
//void InOrder(TNode* tree)
//{
//	if (tree != NULL)
//	{
//		InOrder(tree->left);
//		cout << tree->data << " ";
//		InOrder(tree->right);
//	}
//}
//int main()
//{
//	string pre;
//	while (cin>>pre)
//	{
//		int i = 0;
//		TNode* tree = build(pre, i);
//		InOrder(tree);
//		cout << endl;
//	}
//	return 0;
//}