//#include<iostream>
//using namespace std;
//#include<map>
//#include<algorithm>
///*����С��(��Ԫ��)*/
//int main()
//{
//	int n;
//	multimap<int, int> m;
//	while (cin>>n)
//	{
//		for (int i = 0; i < n; i++)//����
//		{
//			int a, b;
//			cin >> a >> b;
//			m.insert(make_pair(a, b));
//		}
//		multimap<int, int>::iterator it;
//		pair<int,int> min;
//		min = *m.begin();
//		for (it= m.begin(); it->first == m.begin()->first; it++)
//		{
//			if (it->second < min.second)
//				min = *it;
//		}
//		cout << min.first << " " << min.second << endl;
//	}
//	return 0;
//}