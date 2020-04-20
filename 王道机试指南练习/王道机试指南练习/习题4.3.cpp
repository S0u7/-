//#include<iostream>
//using namespace std;
//#include<string>
///*µ¥´ÊÊ××ÖÄ¸´óÐ´*/
//int main()
//{
//	string str;
//	int sub = 0;
//	while (getline(cin,str))
//	{
//		if (str[0] >= 'a' && str[0] <= 'z')
//		{
//			sub = str[0] - 'a';
//			str[0] = 'A' + sub;
//		}
//		int pos = 1;
//		while (pos < str.size() - 1)
//		{
//			if ((str[pos] == ' ') || (str[pos] == '\t')||
//				(str[pos] == '\r')||(str[pos] =='\n')||(str[pos]==','))
//			{
//				pos++;
//				if (str[pos] >= 'a' && str[pos] <= 'z')
//				{
//					sub = str[pos] - 'a';
//					str[pos] = 'A' + sub;
//				}
//			}
//			else
//				pos++;
//		}
//		cout << str << endl;
//	}
//	return 0;
//}