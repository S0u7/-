//#include<iostream>
//#include<cmath>
//#include<map>
//using namespace std;
///*����2<=n<=1000��2<=a<=1000������k��ʹn!���Ա�a^k���������ܱ�a^(k+1)����
//  n����a����ͬ���������ݴ�����Ľ������С��Ϊ����k */
//
//void prime_factor(int N, map<int, int> &m)//�ֽ�����������Ԫ��:������,�ݴ�
//{
//	for (int j = 2; j <= sqrt(N); j++)//�̳���
//	{
//	    while (N % j == 0)
//	    {
//			if (m[j] >= 1)
//				m[j]++;
//			else
//				m[j] = 1;
//	        N = N / j;
//	    }
//	    if (N <= 1)//����1�����ֽ�����
//	        break;
//	}
//	if (N > 1)//���������� ����������������
//	   if (m[N] >= 1)
//		   m[N]++;
//	   else
//		   m[N] = 1;
//}
//int main()
//{
//	int n, a, k;
//	map<int, int>::iterator index, it;		
//	map<int, int> m_a;//map�洢 �����ӣ��ݴ�
//	map<int, int> m_n;
//	while (cin>>n>>a)
//	{
//		prime_factor(a, m_a);//����a�������Ӽ����ݴ�
//		for (int i = 2; i <= n; i++)//����n!�������Ӽ����ݴ�
//			prime_factor(i, m_n);
//
//		k = 10000;
//		for (it = m_a.begin(); it != m_a.end(); it++)//������ͬ��������
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