//#include<iostream>
//using namespace std;
///*鸡兔同笼：一个笼子里面关了鸡和兔子（鸡有2只脚，兔子有4只脚，没有例外）。已经知道了笼子里面脚的总数a < 32768，问笼子里面至少有多少只动物，至多有多少只动物。*/
//int main()
//{
//	int a, max, min;
//	while (cin >> a)
//	{
//		min = a / 4;
//		int rem = a % 4;
//		rem % 2 == 0 ? min += rem / 2 : min = 0;
//		a % 2 == 0 ? max = a / 2 : max = 0;
//		cout << min << " " << max << endl;
//	}
//	return 0;
//}