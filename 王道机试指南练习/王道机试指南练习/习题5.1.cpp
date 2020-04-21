//#include<iostream>
//using namespace std;
//#include<stack>
///*堆栈的使用，按符号进行进栈、出栈、取栈顶的操作*/
//int main()
//{
//	int n;
//	while (cin>>n)
//	{
//		char type;
//		int num;
//		stack<int> s;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> type;
//			if (type == 'P')
//			{
//				cin >> num;
//				s.push(num);
//			}
//			else if (type == 'O' && !s.empty())
//				s.pop();
//			else if (type == 'A')
//				if (!s.empty())
//					cout << s.top() << endl;
//				else
//					cout << 'E' << endl;
//		}
//		cout << endl;
//	}
//	return 0;
//}