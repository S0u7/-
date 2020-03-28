//#include<iostream>
//using namespace std;
//#include<cmath>
//#include<vector>
///*
//repeater problem
//*/
//char picture[6][6];
//int n;
//int Q;
//
//void  draw(vector<vector<char>> v)
//{
//    for (vector<vector<char>>::iterator it=v.begin();it!=v.end();it++)
//    {
//        for (vector<char>::iterator itx = (*it).begin(); itx != (*it).end(); itx++)
//        {
//            cout << *itx;
//        }
//        cout << endl;
//    }
//
//}
//
//void showPicture(int n, char p[][6], int m, vector<vector<char>> &v)
//{
//    static int start1 = 0;
//    static int start2 = 0;
//    int begin1 = start1;
//    int begin2 = start2;
//
//    if (m == 1)
//    {
//        for (int i1 = start2,i2=0; i1 < start2+n,i2 < n; i1++,i2++)
//        {
//            for (int j1 = start1,j2=0; j1 < start1+n,j2 < n; j1++,j2++)
//            {
//                v[i1][j1] = p[i2][j2];
//            }
//        }
//    }
//    else
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (p[i][j] != 32)
//                {
//                   showPicture(n, p, m - 1,v);
//                }
//                start1 += pow(n,m-1);
//              
//            }
//            start1 = begin1;
//            start2 += pow(n,m-1);
//        }
//        start2 = begin2;
//    }
//
//}
//
//int main()
//{
//    n = 1;
//    Q = 1;
//    while (n) 
//    {
//        cin >> n;
//
//        cin.ignore();//Ìø¹ý»Ø³µ
//        for (int i = 0; i < n; i++) 
//        {
//            cin.getline(picture[i], 6);
//         }
//
//        cin >> Q;
//
//        vector<vector<char>> v(pow(n, Q), vector<char>(pow(n, Q), ' '));
//
//        showPicture(n,picture,Q,v);
//
//        draw(v);
//
//        v.clear();
//    }
//	return 0;
//}
//
