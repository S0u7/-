//#include<iostream>
//using namespace std;
//#include<vector>
///*输入一个整数n(2<=n<=10000)，要求输出所有从1到这个整数之间(不包括1和这个整数)
//  个位为1的素数，如果没有则输出-1。素数之间用空格隔开，最后一个素数后面没有空格*/
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v;
//		if (n <= 11)
//		{
//			cout << -1 << endl;
//			continue;
//		}
//		bool* mark = new bool[n];//筛法标记数组
//		for (int k = 0; k < n; k++)
//			mark[k] = 1;//默认都是素数
//		mark[0] = false;
//		mark[1] = false;
//		
//		for (int i = 2; i < n; i++)
//		{
//			if (mark[i] == 0)//非素数 跳过
//				continue;
//			if(i % 10 == 1)
//				v.push_back(i);//个位为1的素数
//			for (int j = i * i; j < n; j += i)//素数的倍数为非素数
//				mark[j] = false;
//		}
//		for (int t = 0;t < v.size(); t++)
//			if (t != v.size())
//				cout << v[t] << " ";
//			else
//				cout << v[t];
//		cout << endl;
//
//		delete[] mark;
//		v.clear();
//	}
//	return 0;
//}