//#include<iostream>
//using namespace std;
//#include<set>
//#include<algorithm>
//#include<iterator>//迭代器相关头文件
///*
//剩下的树
//*/
//int main()
//{
//	int N, M;
//	int a, b;
//
//	set<int> s, p, temp;
//
//	while (cin >> N >> M)
//	{
//		for (int k = 0; k < N + 1; k++)
//		{
//			s.insert(k);
//		}
//
//		for (int i = 0; i < M; i++)
//		{
//			cin >> a >> b;
//
//			for (int j = a; j <= b; j++)
//			{
//				p.insert(j);
//			}
//			
//			set_difference(s.begin(), s.end(), p.begin(), p.end(),
//				inserter(temp, temp.begin()));//集合求差集
//			p.clear();//被差集合清空
//			s.swap(temp);//设为求差集后的集合
//			temp.clear();
//		}
//
//		cout << s.size() << endl;
//		s.clear();
//	}
//	return 0;
//}