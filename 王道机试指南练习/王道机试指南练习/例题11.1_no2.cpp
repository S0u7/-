//#include<iostream>
//using namespace std;
//const int N = 1000;
//
//int parent[N];//parent[i]��ʾ�ڵ�i��˫����˭, -1��ʾ������
//
//int FindRoot(int x)//Ѱ��x���ڵ����ĸ��ڵ�
//{
//    if (parent[x] == -1) 
//        return x;
//    else//�ݹ����
//    {
//        int ret = FindRoot(parent[x]);
//        parent[x] = ret;//·��ѹ��
//        return ret;
//    }
//}
//
//int main()
//{
//    int m, n;
//    while (cin>>n)
//    {
//        if (n <= 0) 
//            break;
//        cin >> m;
//        for (int i = 1; i <= n; i++) 
//            parent[i] = -1;//һ��ʼȫ�Ǹ�
//        while (m--)
//        {
//            int x, y;
//            cin >> x >> y;
//            x = FindRoot(x);
//            y = FindRoot(y);
//            if (x != y) 
//                parent[y] = x;//����ͬһ�����Ǿͺϲ�
//        }
//        int count = -1;//ͳ��һ�¸��ڵ�����
//        for (int i = 1; i <= n; i++)
//            if (parent[i] == -1) 
//                count++;
//        cout << count << endl;
//    }
//    return 0;
//}