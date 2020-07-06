//#include<iostream>
//using namespace std;
//#include<map>
///*Is it a tree，并查集*/
//int find(map<int, int>& m, int x)//找x所在集合的根
//{
//    int r = x;
//    while (m.find(r) != m.end() && m[r] != x)//r有根且根不是不是自身
//        r = m[r];
//    m[x] = r;//找到所在集合的根，就将其直接指向，减少树的高度(路劲压缩)
//    return r;
//}
//bool isTree(map<int, int>& m) 
//{
//    int r = find(m, m.begin()->first);
//    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) 
//    {   //最终不止一个集合 或者 有多条边指向同一个节点，即不是一个树
//        if (find(m, it->first) != r || find(m, it->first) == -1)
//            return false;
//    }
//    return true;
//}
//int main() 
//{
//    int a, b, num = 0;
//    map<int, int> m;//key:入 value:出，边:key<-value
//    while (cin >> a >> b) 
//    {
//        if (a == -1 && b == -1)
//            return 0;
//        if (a == 0 && b == 0) 
//        {
//            cout << "Case " << ++num << " is " 
//                << (isTree(m) ? "" : "not ") << "a tree." << endl;
//            m.clear();
//        }
//        else 
//        {//如果已经有指向b的边了,就说明不是一个树
//            if (m.find(b) != m.end() || a == b)
//                m[b] = -1;
//            else
//                m[b] = a;
//        }
//    }
//}