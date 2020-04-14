//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
/*找位置*/
//int main()
//{
//	string str;
//	string::iterator it;//string相当于容器
//	vector<char> mark;//标记重复字符是不是第一次遇到
//	while (cin>>str)
//	{
//		for (int i = 0; i < str.size(); i++)
//		{
//			it = str.begin();
//			int num = count(str.begin(), str.end(), str[i]);//统计出现次数
//			if (num >= 2)
//			{	
//				if (find(mark.begin(), mark.end(), str[i]) == mark.end())
//				{//第一个重复字符进行找位置
//					while (num--)
//					{
//						it = find(it, str.end(), str[i]);
//						cout << str[i] << ":" << it - str.begin();
//						if (num >= 1)
//							cout << ",";
//						it++;
//					}
//					cout << endl;
//				}
//				mark.push_back(str[i]);
//			}
//			
//		}
//	}
//	return 0;
//}