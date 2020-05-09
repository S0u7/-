//#include<iostream>
//using namespace std;
///*求A^B(1<=A,B<=10000)的 最后三位 数表示的整数。
//如果A=0, B=0，则表示输入数据的结束，不做处理*/
//
//int power_last_3(int a, int b, int mod)
//{
//	int ans = 1;
//	while (b != 0)
//	{
//		if (b % 2 == 1)
//		{
//			ans *= a;
//			ans %= mod;
//		}
//		b /= 2;
//		a *= a;
//		a %= mod;
//	}
//	return ans;
//}
//int main()
//{
//	int A, B;
//	while (cin>>A>>B)
//	{
//		if (A == 0 && B == 0)
//			break;
//		cout << power_last_3(A, B, 1000) << endl;;
//	}
//	return 0;
//}