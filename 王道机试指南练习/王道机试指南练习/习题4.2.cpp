//#include<iostream>
//using namespace std;
//#include<string>
///*�����滻*/
//int main()
//{
//	string str, old, rep;
//	while (getline(cin,str))
//	{
//		getline(cin, old);
//		getline(cin, rep);
//		int start = 0;//˫ָ��
//		int pos = 0;
//		while (pos != string::npos)
//		{
//			pos = str.find(" ", start);//�ҿո�λ��
//			string temp = str.substr(start,pos-start);//�ص���
//			if (pos != -1 && temp == old)//�Ƚ����滻
//			{
//				str.replace(start, old.size(), rep);//�滻����
//				pos = start + rep.size() + 1;
//				start = pos;
//			}
//			else
//				start = pos + 1;
//		}
//		cout << str << endl;
//	}
//	return 0;
//}