//#include<iostream>
//using namespace std;
///*n�Ľ׳�1<=n<=20*/
//
//long long fact_1(int n)//�ݹ�
//{
//	if (n == 0 || n == 1)
//		return 1;
//	else
//		return n * fact_1(n - 1);
//}
//
//long long fact_2(int n)//ѭ������
//{
//	long long ans = 1;
//	if (n == 0)
//		ans = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ans *= i;
//	}
//	return ans;
//}
//
//int main()
//{
//	int n;
//	while (cin>>n)
//	{
//		cout << fact_1(n) << endl;
//		cout << fact_2(n) << endl;
//	}
//	return 0;
//}