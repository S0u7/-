//#include<iostream>
//using namespace std;
//#include<stack>
//#include<string>
///*逆向输出序列，0<n<10000,ai大小很夸张*/
//int main()
//{
//	int n;
//	stack<string> seq;
//	while (cin>>n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			string temp;
//			cin >> temp;
//			seq.push(temp);
//		}
//		while (!seq.empty())
//		{
//			if (seq.size() == 1)
//				cout << seq.top();
//			else
//				cout << seq.top() << " ";
//			seq.pop();
//		}
//	}
//	return 0;
//}