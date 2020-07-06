//#include <iostream>
//#include <set>
//using namespace std;
///*统计图的连通分量数*/
//const int N = 1000000;
//int Tree[N];
//int findRoot(int x) //找x所在集合的根
//{
//    if (Tree[x] == -1) 
//        return x;
//    int temp = findRoot(Tree[x]);
//    Tree[x] = temp;//路劲压缩
//    return temp;
//}
//int main() 
//{
//    int a, b;
//    set<int>s;
//    for (int i = 0; i < N; i++) //初始化，每个节点都是一个集合
//        Tree[i] = -1;
//    while (cin >> a >> b) //并查集
//    {
//        s.insert(a);
//        s.insert(b);//把每个节点不重复的存起来
//        a = findRoot(a);
//        b = findRoot(b);
//        if (a != b) 
//            Tree[a] = b;
//    }
//    int ans = 0;
//    set<int>::iterator it;
//    for (it = s.begin(); it != s.end(); it++)//检查每个节点所在集合
//        if (Tree[*it] == -1) 
//            ans++;
//    cout << ans << endl;
//    return 0;
//}