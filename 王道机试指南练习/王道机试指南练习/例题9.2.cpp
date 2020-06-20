//#include<iostream>
//using namespace std;
//#include<vector>
//#include<string>
//#include<queue>
///*find the multiple:找到n<=200的只含0 1的倍数m <=100位
//BFS*/
//bool divisible(string mul, int n)//大数整除
//{
//	int i = 0, temp, rem = 0;
//	while (i != mul.size())
//	{
//		temp = rem * 10 + mul[i] - '0';
//		rem = temp % n;
//		i++;
//	}
//	if (rem != 0)
//		return false;
//	else
//		return true;
//}
//void test()
//{
//	int n;
//	vector<char> tree;
//	tree.push_back('@');
//	/*
//	[]1 10 1010 10101010 1010101010101010
//	*/
//	while (cin >> n)
//	{
//		tree.push_back('1');
//		string mul = "1";
//		int point = 1;
//		while (divisible(mul, n) == false)
//		{
//			tree.push_back('1');
//			tree.push_back('0');
//			point++;
//			mul = "";
//			for (int i = point; i != 0; i /= 2)
//				mul.insert(mul.begin(), tree[i]);
//		}
//		cout << mul << endl;
//		tree.clear();
//	}
//}
////1 10,11 100,101,110,111 此方法更好
//void search(int n)
//{
//	queue<long long> Q;
//	Q.push(1);
//	while (!Q.empty())
//	{
//		long long now;
//		now = Q.front();
//		if (now % n == 0) 
//		{ 
//			cout << now << endl; 
//			return; 
//		}
//		Q.pop();
//		Q.push(now * 10);
//		Q.push(now * 10 + 1);
//	}
//}
//void test2()
//{
//	int n;
//	while (cin >> n)
//	{
//		search(n);
//	}
//}
//int main()
//{
//	//test();
//	test2();
//	return 0;
//}