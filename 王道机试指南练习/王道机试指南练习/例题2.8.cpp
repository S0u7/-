//#include<iostream>
//using namespace std;
//#include<iomanip>
//#include<numeric>
///*
//设计一个程序能计算一个日期加上若干天后是什么日期。
//*/
//int main()
//{
//	int num;
//	cin >> num;
//
//	int y, m, d, later;
//	int sum, sub, s;
//
//	int month[12]={31, 28,  31,  30,  31,  30,  31,  31,  30,  31,  30,  31};
//
//	for(int i=0;i<num;i++)
//	{
//		cin >> y >> m >> d >> later;
//
//		sum = accumulate(month, month + 12, 0);//累加函数
//		s = accumulate(month, month + m - 1, 0) + d + later;
//		
//		while (s > sum)//超过一年
//		{
//			y++;
//			m = 1;
//			d = 0;
//			later = s - sum;
//
//			month[1] = 28;
//			if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//			{
//				month[1] = 29;
//			}
//			sum = accumulate(month, month + 12, 0);
//			s = accumulate(month, month + m - 1, 0) + d + later;
//		}
//
//		month[1] = 28;
//		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		{
//			month[1] = 29;
//		}
//
//		sub = 0;
//		sub = month[m - 1] - d;
//		if (later>sub)
//		{
//			later -= sub;
//			while (later > month[m])
//			{
//				later -= month[m];
//				m++;
//			}
//			m++;
//			d = later;
//		}
//		else
//		{
//			d += later;
//		}
//
//		cout << y << '-' << setw(2) << setfill('0') << m << '-' << setw(2) << setfill('0') << d << endl;
//	}
//	return 0;
//}