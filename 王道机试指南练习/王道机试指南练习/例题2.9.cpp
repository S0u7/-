//#include<iostream>
//using namespace std;
//#include<set>
//#include<algorithm>
//#include<iterator>//���������ͷ�ļ�
///*
//ʣ�µ���
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
//				inserter(temp, temp.begin()));//������
//			p.clear();//��������
//			s.swap(temp);//��Ϊ����ļ���
//			temp.clear();
//		}
//
//		cout << s.size() << endl;
//		s.clear();
//	}
//	return 0;
//}