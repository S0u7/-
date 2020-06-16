//#include<iostream>
//using namespace std;
//#include<cmath>
///*汉诺塔III，汉诺塔基础上，不允许跨杆移动1<=N=35*/
//long long hanno_1(int N)//推导公式 3^N-1
//{
//	//return pow(3, N) - 1;
//	long long ans = 1;
//	for (int i = 1; i <= N; i++)
//		ans *= 3;
//
//	return ans - 1;
//}
//
//long long hanno_2(int N)//递归
//{
//	if (N == 1)
//		return 2;
//	else
//		return 3 * hanno_2(N - 1) + 2;
//}
//
//int main()
//{
//	int N;
//	while (cin>>N)
//	{
//		cout << hanno_1(N) << endl;
//		cout << hanno_2(N) << endl;
//	}
//	return 0;
//}