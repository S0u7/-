//#include<iostream>
//using namespace std;
//#include<stack>
///*十进制转二进制*/
//int main()
//{
//	unsigned int n;
//	stack<unsigned int> s;
//	while(cin >> n)
//	{
//		if (n == 0)
//			s.push(0);
//
//		while (n != 0)
//		{
//			s.push(n % 2);
//			n /= 2;
//		}
//		while (!s.empty())
//		{
//			cout << s.top();
//			s.pop();
//		}
//		cout << endl;
//	}
//	return 0;
//}