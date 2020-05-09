//#include<iostream>
//using namespace std;
//#include<cmath>
///*给定一个数n，要求判断其是否为素数,输出yes,no（0,1，负数都是非素数）*/
//int main()
//{
//	int n, key;
//	while (cin>>n)
//	{
//		key = 1;//默认是素数
//		for (int i = 2; i <= sqrt(n); i++)//2和3此循环不执行
//			if (n % i == 0)
//			{
//				key = 0;
//				break;
//			}
//		if (n < 2 || key == 0)
//			cout << "no" << endl;
//		else if (key == 1)
//			cout << "yes" << endl;
//	}
//	return 0;
//}