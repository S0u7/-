//#include<iostream>
//using namespace std;
//#include<map>
///*Is it a tree�����鼯*/
//int find(map<int, int>& m, int x)//��x���ڼ��ϵĸ�
//{
//    int r = x;
//    while (m.find(r) != m.end() && m[r] != x)//r�и��Ҹ����ǲ�������
//        r = m[r];
//    m[x] = r;//�ҵ����ڼ��ϵĸ����ͽ���ֱ��ָ�򣬼������ĸ߶�(·��ѹ��)
//    return r;
//}
//bool isTree(map<int, int>& m) 
//{
//    int r = find(m, m.begin()->first);
//    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) 
//    {   //���ղ�ֹһ������ ���� �ж�����ָ��ͬһ���ڵ㣬������һ����
//        if (find(m, it->first) != r || find(m, it->first) == -1)
//            return false;
//    }
//    return true;
//}
//int main() 
//{
//    int a, b, num = 0;
//    map<int, int> m;//key:�� value:������:key<-value
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
//        {//����Ѿ���ָ��b�ı���,��˵������һ����
//            if (m.find(b) != m.end() || a == b)
//                m[b] = -1;
//            else
//                m[b] = a;
//        }
//    }
//}