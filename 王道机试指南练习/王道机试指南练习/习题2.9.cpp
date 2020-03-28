//#include<iostream>
//using namespace std;
//#include<cmath>
//#include<algorithm>
//#include<iomanip>
///*
//Grading
//*/
//int main()
//{
//	double P, T, G1, G2, G3, GJ;
//	while (cin>> P>> T>> G1>> G2>> G3>> GJ)
//	{
//		if (abs(G1 - G2) <= T)
//		{
//			cout <<setiosflags(ios::fixed)<<setprecision(1)<< (G1 + G2) / 2 << endl;
//		}
//		else
//		{
//			if (abs(G3 - G2) <= T && abs(G3 - G1) <= T)
//			{
//				cout << setiosflags(ios::fixed) << setprecision(1) <<
//					max(G1, max(G2, G3)) << endl;
//			}
//			else if (abs(G3 - G1) <= T || abs(G3 - G2) <= T)
//			{
//				double close;
//				abs(G3 - G1) > abs(G3 - G2) ? close = G2 : close = G1;
//				cout << setiosflags(ios::fixed) << setprecision(1) <<
//					(G3 + close) / 2 << endl;
//			}
//			else
//			{
//				cout << setiosflags(ios::fixed) << setprecision(1) <<
//					GJ << endl;
//			}
//		}
//	}
//	return 0;
//}