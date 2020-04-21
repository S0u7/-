//#include<iostream>
//using namespace std;
//#include<string>
//#include<stack>
///*括号匹配问题，)不匹配输出？(不匹配底下输出$, */
//int main()
//{
//	string str;
//	stack<int> brackets;//括号栈
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