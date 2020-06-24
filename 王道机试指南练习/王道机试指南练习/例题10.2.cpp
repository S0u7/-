//#include<iostream>
//#include<string>
//using namespace std;
///*给定一棵二叉树的前序遍历和中序遍历，求其后序遍历
//二叉树中的结点名称以大写字母表示：A，B，C....最多26个结点
//给定前序遍历与中序遍历能够唯一确定后序遍历
//递归*/
//void PostOrder(string pre, string mid)
//{
//	if (pre.size() != 0)
//	{
//		int pos = mid.find(pre[0]);//根在中序中的位置
//		PostOrder(pre.substr(1, pos), mid.substr(0, pos));//先输出左边
//		PostOrder(pre.substr(pos + 1), mid.substr(pos + 1));//再输出右边
//		cout << pre[0];//最后输出根
//	}
//}
//int main()
//{
//	string pre, mid;
//	while (cin>>pre>>mid)
//	{
//		PostOrder(pre, mid);
//		cout << endl;
//	}
//	return 0;
//}