//#include<iostream>
//using namespace std;
//#include<vector>
///*输出第K个素数k<=10000*/
//int main()
//{
//	int k;
//	while (cin >> k)
//	{
//		vector<int> v;
//		int scope = k * 11;
//		bool* mark = new bool[scope];//筛法标记数组
//		for (int i = 0; i < scope; i++)
//			mark[i] = 1;//默认都是素数
//		mark[0] = false;
//		mark[1] = false;
//
//		for (int i = 2; i < scope; i++)
//		{
//			if (mark[i] == 0)//非素数 跳过
//				continue;
//				v.push_back(i);
//			for (int j = 2 * i; j < scope; j += i)//素数的倍数为非素数
//				mark[j] = false;
//		}
//		cout << v[k - 1] << endl;
//		delete[] mark;
//		v.clear();
//	}
//	return 0;
//}