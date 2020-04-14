//#include<iostream>
//using namespace std;
//#include<algorithm>
///*小白鼠排队*/
//struct Rat
//{
//	string color;
//	int weight;
//};
//bool comp(Rat s1, Rat s2)//比较函数
//{
//	return	s1.weight > s2.weight;
//}
//
//int main()
//{
//	int n = 0;
//	Rat rat[101];
//	while (cin >> n)
//	{
//		for (int i = 0; i < n; i++)
//			cin >> rat[i].weight>> rat[i].color ;
//		sort(rat, rat + n, comp);
//		for (int j = 0; j < n; j++)
//			cout << rat[j].color << endl;
//	}
//	return 0;
//}