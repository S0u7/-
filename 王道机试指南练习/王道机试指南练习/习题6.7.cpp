//#include<iostream>
//using namespace std;
///* 输入n<=1000个整数,依次输出每个数1<=Num<=1000000000的 约数的个数*/
//int divisor(int num)
//{
//	int count = 0, i;
//	for (i = 1; i*i < num; i++)
//		if (num % i == 0)
//			count += 2;
//
//	if (i * i == num)
//		count++;
//
//	return count;
//}
//int main()
//{
//	int n, num;
//	while (cin>>n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			cin >> num;
//			cout << divisor(num) << endl;
//		}
//	}
//	return 0;
//}