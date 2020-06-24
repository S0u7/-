//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
///*子串计算器：给出一个01字符串（长度不超过100）
//求其每一个出现 一次以上 的子串和这个子串出现的次数*/
//int main()
//{
//	string str, key;
//	map<string, int> m;
//	while (cin>>str)
//	{
//		for (unsigned int i = 0; i < str.size(); i++)
//		{
//			for (unsigned int j = 1; j <= str.size() - i; j++)
//			{
//				key = str.substr(i, j);
//				m[key]++;
//			}
//		}
//		for (map<string,int>::iterator it = m.begin(); it != m.end(); it++)
//			if (it->second > 1)
//				cout << it->first << " " << it->second << endl;
//		m.clear();
//	}
//	return 0;
//}