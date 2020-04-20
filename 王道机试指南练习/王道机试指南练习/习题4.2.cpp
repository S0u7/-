//#include<iostream>
//using namespace std;
//#include<string>
///*单词替换*/
//int main()
//{
//	string str, old, rep;
//	while (getline(cin,str))
//	{
//		getline(cin, old);
//		getline(cin, rep);
//		int start = 0;//双指针
//		int pos = 0;
//		while (pos != string::npos)
//		{
//			pos = str.find(" ", start);//找空格位置
//			string temp = str.substr(start,pos-start);//截单词
//			if (pos != -1 && temp == old)//比较与替换
//			{
//				str.replace(start, old.size(), rep);//替换函数
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