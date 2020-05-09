//#include <iostream>
//using namespace std;
///*M行N列(M and N (≤10))矩阵A+B，计算全为0的行列个数*/
//int main()
//{
//    int M , N , ans; 
//    int matrix[10][10];
//    while (cin >> M >> N && M != 0)
//    {
//        int row[10] = { 0 };
//        int col[10] = { 0 };
//
//        for (int i = 0; i < M; i++) //输入矩阵A
//            for (int j = 0; j < N; j++)  
//                cin >> matrix[i][j];
//
//        for (int i = 0; i < M; i++) //输入矩阵B，顺便A+B，同时记录不为零的行列
//            for (int j = 0; j < N; j++) 
//            { 
//                int temp;
//                cin >> temp; 
//                matrix[i][j] += temp; 
//                if (matrix[i][j] != 0) 
//                    row[i] = col[j] = 1; 
//            }
//        ans = M + N; 
//        while (M--) 
//            ans -= row[M]; 
//        while (N--)
//            ans -= col[N]; 
//        cout << ans << endl;
//    }
//    return 0;
//}