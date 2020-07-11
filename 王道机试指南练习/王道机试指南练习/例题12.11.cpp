//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<cmath>
////#define max(a, b) (a > b ? a : b)
////#define abs(a) (a >= 0 ? a : 0-a)
///*monkey banana problem*/
//int main()
//{
//	int case_num, N, number;
//	cin >> case_num;
//	for (int t = 0; t < case_num; t++)
//	{
//		cin >> N;
//		int** matrix = new int* [2 * N - 1];
//		for (int i = 0; i < 2 * N - 1; i++)
//		{
//			number = N - abs(i + 1 - N);//方程 y = N - |x - N|，1 <=  x <= 2 * N-1
//			matrix[i] = new int[number];
//			for (int j = 0; j < number; j++)
//				cin >> matrix[i][j];
//		}
//
//		for (int i = 2 * N - 3; i >= 0; i--)
//		{
//			number = N - abs(i + 1 - N);
//			for (int j = 0; j < number; j++)
//			{
//				if (i < N - 1)//上方
//					matrix[i][j] += max(matrix[i + 1][j], matrix[i + 1][j + 1]);
//				else//下方
//				{
//					if(j == 0)//下方最左端，只能往右下移动
//						matrix[i][j] += matrix[i + 1][j];
//					else if (j == number)//下方最右端，只能往左下移动
//						matrix[i][j] += matrix[i + 1][j - 1];
//					else
//						matrix[i][j] += max(matrix[i + 1][j], matrix[i + 1][j - 1]);
//				}	
//			}
//		}
//
//		cout << "Case " << t + 1 << ": " << matrix[0][0] << endl;
//
//		for (int i = 0; i < 2 * N - 1; i++)
//			delete[] matrix[i];
//		delete[] matrix;
//	}
//	return 0;
//}
///*
//2
//4
//7
//6 4
//2 5 10
//9 8 12 2
//2 12 7
//8 2
//10
//2
//1
//2 3
//1
//
//Case 1: 63
//Case 2: 5
//*/