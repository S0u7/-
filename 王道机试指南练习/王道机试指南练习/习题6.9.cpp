//#include<iostream>
//using namespace std;
///* N < kʱ��root(N,k) = N,����,root(N,k) = root(N',k)��N'ΪN��k���Ʊ�ʾ�ĸ�λ����֮�͡�
//   ����x,y,k�����root(x^y,k)��ֵ (����^Ϊ�˷����������)��2=<k<=16��0<x,y<2000000000��
//   ��һ��Ĳ��Ե��� x^y �����int�ķ�Χ(>=2000000000) 
//   
//   ʵ�����ǿ��������⣺�Ƶ��ɵ�root(N,k) = N % (k-1) 
//   ��root(x^y,k) = x^y % k = (((x % k) * x) % k) * x ...
//*/
////����ģ����ģ�Ļ���a * b��mod n = (��a mod n��* b ) mod n ...
////���Խ�ȡģ���뵽�������ݹ�����
//long long fast_power(long long a, long long b, int mod)
//{
//	long long ans = 1;
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
//
//int main()
//{
//    int x, y, k;
//	while (cin>>x>>y>>k)
//	{
//		long long ans = fast_power(x, y, k - 1);
//		if (ans == 0)//���Ϊ0����ʾ�����ˣ�������N=k-1
//			cout << k - 1 << endl;
//		else
//			cout << ans << endl;
//	}
//	
//	return 0;
//}