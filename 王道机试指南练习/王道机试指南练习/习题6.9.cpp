//#include<iostream>
//using namespace std;
///* N < k时，root(N,k) = N,否则,root(N,k) = root(N',k)。N'为N的k进制表示的各位数字之和。
//   输入x,y,k，输出root(x^y,k)的值 (这里^为乘方，不是异或)，2=<k<=16，0<x,y<2000000000，
//   有一半的测试点里 x^y 会溢出int的范围(>=2000000000) 
//   
//   实际上是快速幂问题：推导可得root(N,k) = N % (k-1) 
//   即root(x^y,k) = x^y % k = (((x % k) * x) % k) * x ...
//*/
////积的模等于模的积（a * b）mod n = (（a mod n）* b ) mod n ...
////所以将取模加入到二分求幂过程中
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
//		if (ans == 0)//结果为0即表示整除了，即最后的N=k-1
//			cout << k - 1 << endl;
//		else
//			cout << ans << endl;
//	}
//	
//	return 0;
//}