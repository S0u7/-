//#include<iostream>
//#include<algorithm>
//#include<functional>
//using namespace std;
///*Senior's Gun:n֧ǹa[1-n]��mֻ����b[1-m],һ֧ǹֻ��ɱ��һֻ���ޣ�һ������ֻ����һ��
//1<n,m<100000 -10^9<a,b<10^9*/
//int main()
//{
//	int t, n, m;
//	long long bonus;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n >> m;
//		long long* a = new long long[n];
//		long long* b = new long long[m];
//		int i;
//		for (i = 0; i < n; i++)
//			cin >> a[i];
//		for (i = 0; i < m; i++)
//			cin >> b[i];
//		sort(a, a + n,greater<long long>());
//		sort(b, b + m);
//
//		bonus = 0;
//		for (i = 0; i < m; i++)
//		{
//			if (a[i] >= b[i])
//				bonus += a[i] - b[i];
//			else
//				break;
//		}
//		cout << bonus << endl;
//		delete[] a, b;
//	}
//	return 0;
//}