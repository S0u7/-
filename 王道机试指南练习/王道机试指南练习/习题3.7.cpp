//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
/*��λ��*/
//int main()
//{
//	string str;
//	string::iterator it;//string�൱������
//	vector<char> mark;//����ظ��ַ��ǲ��ǵ�һ������
//	while (cin>>str)
//	{
//		for (int i = 0; i < str.size(); i++)
//		{
//			it = str.begin();
//			int num = count(str.begin(), str.end(), str[i]);//ͳ�Ƴ��ִ���
//			if (num >= 2)
//			{	
//				if (find(mark.begin(), mark.end(), str[i]) == mark.end())
//				{//��һ���ظ��ַ�������λ��
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