//#include<iostream>
//using namespace std;
///* ����n<=1000������,�������ÿ����1<=Num<=1000000000�� Լ���ĸ���*/
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