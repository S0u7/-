//#include<iostream>
//using namespace std;
///*输入两个正整数，求其最大公约数*/
//int main()
//{
//	int a, b;
//	while (cin>>a>>b)
//	{
//		while (b != 0)//辗转相除法，例如49 21
//		{
//			int t = b;//21、7
//			b = a % b;//7、0。下一个a是上一个b,下一个b是当前a mod b
//			a = t;//21、7
//		}
//		cout << a << endl;
//	}
//	return 0;
//}