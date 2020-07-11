//#include<iostream>
//using namespace std;
//#define max(a, b) (a > b ? a : b)
///*The triangle*/
//int main()
//{
//	int n;
//	cin >> n;
//	int** triangle = new int* [n];
//	for (int i = 0; i < n; i++)
//	{
//		triangle[i] = new int[i + 1];
//		for (int j = 0; j <= i; j++)
//			cin >> triangle[i][j];
//	}
//	//现在的triangle[i][j]代表从(i, j)点出发到底部的路径之和最大值，从底部往顶部递推
//	for (int i = n - 2; i >= 0; i--)
//		for (int j = 0; j <= i; j++)
//	//状态转移方程：只能沿对角线向左下或向右下前进
//			triangle[i][j] += max(triangle[i + 1][j], triangle[i + 1][j + 1]);
//
//	cout << triangle[0][0] << endl;
//
//	for (int i = 0; i < n; i++)
//		delete[] triangle[i];
//	delete[] triangle;
//
//	return 0;
//}