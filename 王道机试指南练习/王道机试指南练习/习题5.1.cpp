//#include<iostream>
//using namespace std;
//#include<stack>
///*��ջ��ʹ�ã������Ž��н�ջ����ջ��ȡջ���Ĳ���*/
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