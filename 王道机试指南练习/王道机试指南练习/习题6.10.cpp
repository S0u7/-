//#include <iostream>
//using namespace std;
///*M��N��(M and N (��10))����A+B������ȫΪ0�����и���*/
//int main()
//{
//    int M , N , ans; 
//    int matrix[10][10];
//    while (cin >> M >> N && M != 0)
//    {
//        int row[10] = { 0 };
//        int col[10] = { 0 };
//
//        for (int i = 0; i < M; i++) //�������A
//            for (int j = 0; j < N; j++)  
//                cin >> matrix[i][j];
//
//        for (int i = 0; i < M; i++) //�������B��˳��A+B��ͬʱ��¼��Ϊ�������
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