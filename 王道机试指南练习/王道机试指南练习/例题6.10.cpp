//#include<iostream>
//using namespace std;
///*��A^B(1<=A,B<=10000)�� �����λ ����ʾ��������
//���A=0, B=0�����ʾ�������ݵĽ�������������*/
//
//int power_last_3(int a, int b, int mod)
//{
//	int ans = 1;
//	while (b != 0)
//	{
//		if (b % 2 == 1)
//		{
//			ans *= a;
//			ans %= mod;
//		}
//		b /= 2;
//		a *= a;
//		a %= mod;
//	}
//	return ans;
//}
//int main()
//{
//	int A, B;
//	while (cin>>A>>B)
//	{
//		if (A == 0 && B == 0)
//			break;
//		cout << power_last_3(A, B, 1000) << endl;;
//	}
//	return 0;
//}