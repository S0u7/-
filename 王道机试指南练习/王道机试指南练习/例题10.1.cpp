//#include<iostream>
//#include<string>
//using namespace std;
///*���������������ݶ�������������ַ�����Ҫ���������������*/
//struct TNode
//{
//	char data;
//	TNode* left, * right;
//};
////���������������
//TNode* build(string &pre, int& i)//i ����Ҫ����������,����ݹ�ʱ i���������
//{
//	if (pre[i] == '#')
//	{
//		i++;//û�к��ӣ�����iҲҪ++
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