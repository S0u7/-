//#include<iostream>
//#include<map>
//using namespace std;
///*今年暑假补AC:根据节目开始时间，结束时间，输出最多完整观看节目数*/
//int main()
//{
//	int n;
//	while (cin>>n && n != 0)
//	{
//		map<int, int> m;
//		for (int i = 0; i < n; i++)
//		{
//			int ts, te;
//			cin >> ts >> te;
//			m[te] = ts;//key:结束时间 value:开始时间,因为map按key排序
//		}
//		int high = 0, count = 0;
//		//选择结束时间最早的节目
//		for (map<int,int>::iterator it = m.begin(); it != m.end(); it++)
//		{
//			if (it->second >= high)//其开始时间不能在前面的节目时间段内
//			{
//				count++;
//				high = it->first;
//			}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}