//#include<iostream>
//using namespace std;
//const int N = 1000;
//
//int parent[N];//parent[i]表示节点i的双亲是谁, -1表示不存在
//
//int FindRoot(int x)//寻找x所在的树的根节点
//{
//    if (parent[x] == -1) 
//        return x;
//    else//递归调用
//    {
//        int ret = FindRoot(parent[x]);
//        parent[x] = ret;//路径压缩
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
//            parent[i] = -1;//一开始全是根
//        while (m--)
//        {
//            int x, y;
//            cin >> x >> y;
//            x = FindRoot(x);
//            y = FindRoot(y);
//            if (x != y) 
//                parent[y] = x;//不在同一棵树那就合并
//        }
//        int count = -1;//统计一下根节点数量
//        for (int i = 1; i <= n; i++)
//            if (parent[i] == -1) 
//                count++;
//        cout << count << endl;
//    }
//    return 0;
//}