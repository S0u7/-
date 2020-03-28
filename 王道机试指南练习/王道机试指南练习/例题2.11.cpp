//#include<iostream>
//using namespace std;
///*
//xxx定律 
//对于一个数n，如果是偶数，就把n砍掉一半；如果是奇数，
//把n变成 3*n+ 1后砍掉一半，直到该数变为1为止。
//请计算需要经过几步才能将n变到1，具体可见样例。
//*/
//
//int main()
//{
//	int n, count;
//	while (cin>>n && n)
//	{
//		count = 0;
//		while ( n != 1 )
//		{
//			if (n % 2 == 0)
//			{
//				n /= 2;
//			}
//			else
//			{
//				n = (3 * n + 1)/2;
//			}
//			count++;
//		}
//		cout << count << endl;
//
//	}
//	return 0;
//}