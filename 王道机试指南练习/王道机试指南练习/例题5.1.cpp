//#include<iostream>
//using namespace std;
//#include<vector>
///*完数与盈数,注意输出时数前面有个空格*/
//int main()
//{
//	vector<int> E, G;
//	for (int i = 2; i <= 60; i++)
//	{
//		int sum = 0;
//		for (int j = 1; j < i; j++)//因子
//			if (i % j == 0)
//				sum += j;
//		
//		if (sum == i)
//			E.push_back(i);
//		else if(sum > i)
//			G.push_back(i);
//	}
//	//输出
//	vector<int>::iterator it;
//	cout << "E:";
//	for ( it = E.begin(); it != E.end(); it++)
//		//if (*it == E.back())
//		//	cout << *it << endl;
//		//else
//			cout << " "<< *it;
//	cout << endl;
//	cout << "G:";
//	for (it = G.begin(); it != G.end(); it++)
//		//if (*it == G.back())
//		//	cout << *it << endl;
//		//else
//			cout << " "<< *it ;
//	return 0;
//}