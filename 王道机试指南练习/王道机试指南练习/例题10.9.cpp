//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
///*�Ӵ�������������һ��01�ַ��������Ȳ�����100��
//����ÿһ������ һ������ ���Ӵ�������Ӵ����ֵĴ���*/
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