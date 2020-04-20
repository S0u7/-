//#include<iostream>
//using namespace std;
//#include<string>
///*简单密码，字母(大写)用前五位代替*/
//int main()
//{
//	string str;
//	while (getline(cin,str) && str != "ENDOFINPUT")
//	{
//		getline(cin, str);
//		for (int i = 0; i < str.size(); i++)
//		{
//			if (str[i] >= 'A' && str[i] <= 'Z')
//				str[i] = (str[i] - 'A' + 21 ) % 26 + 'A';
//		}
//		cout << str << endl;
//		getline(cin, str);
//	}
//	return 0;
//}