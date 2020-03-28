//#include<iostream>
//using namespace std;
///*
//输入年、月、日，计算该天是本年的第几天。
//*/
//
//int main()
//{
//	int y, m, d, sum;
//	int month[12]={31, 28,  31,  30,  31,  30,  31,  31,  30,  31,  30,  31};
//	while (cin>>y>>m>>d)
//	{
//		sum = 0;
//		for (int i = 0; i < m-1; i++)
//		{
//			sum += month[i];
//		}
//		sum += d;
//		if(m>2)
//		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		{
//			sum += 1;
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}