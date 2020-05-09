//#include<iostream>
//#include<cmath>
//#include<map>
//using namespace std;
///*给定2<=n<=1000，2<=a<=1000求最大的k，使n!可以被a^k整除但不能被a^(k+1)整除
//  n！和a的相同质因数的幂次相除的结果中最小的为所求k */
//
//void prime_factor(int N, map<int, int> &m)//分解质因数。二元组:质因子,幂次
//{
//	for (int j = 2; j <= sqrt(N); j++)//短除法
//	{
//	    while (N % j == 0)
//	    {
//			if (m[j] >= 1)
//				m[j]++;
//			else
//				m[j] = 1;
//	        N = N / j;
//	    }
//	    if (N <= 1)//除到1，即分解完了
//	        break;
//	}
//	if (N > 1)//本身是质数 或最后的余数是质数
//	   if (m[N] >= 1)
//		   m[N]++;
//	   else
//		   m[N] = 1;
//}
//int main()
//{
//	int n, a, k;
//	map<int, int>::iterator index, it;		
//	map<int, int> m_a;//map存储 质因子：幂次
//	map<int, int> m_n;
//	while (cin>>n>>a)
//	{
//		prime_factor(a, m_a);//计算a的质因子及其幂次
//		for (int i = 2; i <= n; i++)//计算n!的质因子及其幂次
//			prime_factor(i, m_n);
//
//		k = 10000;
//		for (it = m_a.begin(); it != m_a.end(); it++)//查找相同的质因子
//		{
//			index = m_n.find(it->first);
//			if (index != m_n.end())
//			{
//				int temp = index->second / it->second;
//				if (temp < k)
//					k = temp;
//			}
//		}
//		m_a.clear();
//		m_n.clear();
//		cout << k << endl;
//	}
//	return 0;
//}