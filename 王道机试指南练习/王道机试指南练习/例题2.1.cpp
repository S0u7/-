//#include <iostream>
//using namespace std;
///*题目描述
//设a、b、c均是0到9之间的数字，abc、bcc是两个三位数，且有：abc+bcc=532。求满足条件的所有a、b、c的值。
//*/
//
//int main()
//{
//	int a,b,c,sum = 0;
//	for (a = 0; a <= 9; a++)
//	{
//		for (b = 0; b <= 9; b++)
//		{
//			for (c = 0; c <= 9; c++)
//			{
//				sum = a * 100 + b * 10 + c + b * 100 + c * 11;
//				if (sum == 532)
//					cout << a << " " << b << " " << c << " " << endl;
//			}
//		}
//	}
//	return 0;
//}