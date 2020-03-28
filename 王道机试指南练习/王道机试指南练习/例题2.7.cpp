//#include<iostream>
//using namespace std;
//#include<iomanip>
///*
//给出年分m和一年中的第n天，算出第n天是几月几号。
//*/
//int	main()
//{
//	int m, n;
//	int a, b;
//	int month[12]={31, 28,  31,  30,  31,  30,  31,  31,  30,  31,  30,  31};
//	while (cin>>m>>n)
//	{
//		a = 1;
//		b = 1;
//		month[1] = 28;
//		if ((m % 4 == 0 && m % 100 != 0) || m % 400 == 0)
//		{
//			month[1] = 29;
//		}
//		while (n>month[1])
//		{
//			n -= month[a-1];
//			a++;
//
//		}
//		if (n==0)
//		{
//			a--;
//			b = month[a - 1];
//		}
//		else
//		{
//			b = n;
//		}
//		cout << m << '-' <<setw(2)<<setfill('0')<< a << '-' << setw(2) << setfill('0') << b << endl;
//	}
//	return 0;
//}