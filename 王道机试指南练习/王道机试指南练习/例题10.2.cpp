//#include<iostream>
//#include<string>
//using namespace std;
///*����һ�ö�������ǰ��������������������������
//�������еĽ�������Դ�д��ĸ��ʾ��A��B��C....���26�����
//����ǰ���������������ܹ�Ψһȷ���������
//�ݹ�*/
//void PostOrder(string pre, string mid)
//{
//	if (pre.size() != 0)
//	{
//		int pos = mid.find(pre[0]);//���������е�λ��
//		PostOrder(pre.substr(1, pos), mid.substr(0, pos));//��������
//		PostOrder(pre.substr(pos + 1), mid.substr(pos + 1));//������ұ�
//		cout << pre[0];//��������
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