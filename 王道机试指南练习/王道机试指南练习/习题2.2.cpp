//#include<iostream>
//using namespace std;
//#include<string>
///*  用小于等于n元去买100只鸡，大鸡5元/只，小鸡3元/只,还有1/3元每只的一种小鸡，分别记为x只,y只,z只。编程求解x,y,z所有可能解。
//*/
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i <= n/5; i++)
//	{
//		for (int j = 0; j <= (n-i*5)/3; j++)
//		{
//			for (int k = 0; k <= (n-i*5-j*3)*3; k++)
//			{
//				if (i+j+k==100)
//				{
//					cout << "x=" << i << ','
//						<< "y=" << j << ','
//						<< "z=" << k << endl;
//				}
//			}
//		}
//	}
//
//	return 0;
//}