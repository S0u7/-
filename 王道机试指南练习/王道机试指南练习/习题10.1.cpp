//#include<iostream>
//#include<string>
//using namespace std;
///*�ж��������Ƿ�Ϊͬһ��������������,���г���С��10������(0~9)�����֣�û���ظ�����
//��ʼһ����n��(1<=n<=20) ��ʾ��n����Ҫ�жϣ�n= 0 ��ʱ�����������
//����ͬԪ�صĲ�ͬ�����������������һ����ͬ��������/��α������ܲ�ͬ*/
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
//	if (mode == nullptr && check == nullptr)//����,�������������Ҳûfalse,��������ͬ
//		return true;
//	if (mode && check && mode->data == check->data)
//		return judge(mode->left, check->left) && judge(mode->right, check->right);
//	else
//		return false;
//}
//int main()
//{
//	int n, m;
//	string mode, check;;//ģʽ����,��ƥ������
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