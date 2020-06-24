//#include<iostream>
//#include<string>
//using namespace std;
///*判断两序列是否为同一二叉搜索树序列,序列长度小于10，包含(0~9)的数字，没有重复数字
//开始一个数n，(1<=n<=20) 表示有n个需要判断，n= 0 的时候输入结束。
//：相同元素的不同二叉排序树中序遍历一定相同，但先序/层次遍历可能不同*/
//struct TNode
//{
//	char data;
//	TNode* left, * right;
//	TNode(char c) :data(c), left(nullptr), right(nullptr) {}
//};
//void Insert(char node, TNode*& tree)
//{
//	if (tree == nullptr)
//		tree = new TNode(node);
//	else if (node < tree->data)
//		Insert(node, tree->left);
//	else
//		Insert(node, tree->right);
//}
//bool judge(TNode*& mode, TNode*& check)
//{
//	if (mode == nullptr && check == nullptr)//出口,即检索到了最后也没false,故两个相同
//		return true;
//	if (mode && check && mode->data == check->data)
//		return judge(mode->left, check->left) && judge(mode->right, check->right);
//	else
//		return false;
//}
//int main()
//{
//	int n, m;
//	string mode, check;;//模式序列,带匹配序列
//	TNode* tree_mode, * tree_check;
//	while (cin >> n && n != 0)
//	{
//		cin >> mode;
//		m = mode.size();
//		tree_mode = nullptr;
//		for (int i = 0; i < m; i++)
//			Insert(mode[i], tree_mode);
//
//		for (int i = 0; i < n; i++)
//		{
//			cin >> check;
//			tree_check = nullptr;
//			for (int i = 0; i < m; i++)
//				Insert(check[i], tree_check);
//
//			if (judge(tree_mode, tree_check))
//				cout << "YES" << endl;
//			else
//				cout << "NO" << endl;
//		}
//	}
//	return 0;
//}