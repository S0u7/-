//#include<iostream>
//using namespace std;
//#include<string>
//#include<stack>
///*����ƥ�����⣬)��ƥ�������(��ƥ��������$, */
//int main()
//{
//	string str;
//	stack<int> brackets;//����ջ
//	while (cin>>str)
//	{
//		string mark(str.size(), ' ');
//		for (int i = 0; i < str.size(); i++)
//		{
//			if (str[i] == '(')
//				brackets.push(i);
//			else if (str[i] == ')')
//			{
//				if (!brackets.empty())
//					brackets.pop();
//				else
//					mark[i] = '?';
//			}
//		}
//		while (!brackets.empty())
//		{
//			mark[brackets.top()] = '$';
//			brackets.pop();
//		}
//		cout << str << endl << mark << endl;
//	}
//	return 0;
//}