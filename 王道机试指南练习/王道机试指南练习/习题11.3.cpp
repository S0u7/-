//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
///*head of a gang:根据电话记录找团伙头目
//思路：使用了并查集，每个人都有自身的通信量以及自己的父级(与本人有关联且个人通信量大于等于我的)，只有最上层的根的总通信量和人数是有效的。
//find函数主要是寻根，并且在过程中压缩路径。
//Union函数用于合并两个元素，其中的参数t是本次合并双方的通信量，用于加在双方的根的total通信量中，首先先寻找双方的根，若根不同的话，则进行相应的合并（个人通信量小的并入通信量大的）即修改father，并将原根的num_people、total复制过来，并将本次的通信量增加到本帮会的总通信量中，表明我是老大了。
//合并过程中，有可能本次合并的两个结点的个人通信量比根的个人通信量大，这时候就要换老大了。若寻双方的根后发现是在同一个帮会，这时候只需将本次的通信量加入老大维护的帮会总通信量total，并检查是否需要换老大，即这次合并的两个节点中是否有比根的通信量大的。
//最后就是遍历map了，找出每个帮派的老大，检查人数够不够多，总通信量是否有威胁。*/
//struct Node 
//{
//    string father;//他的根
//    int num_people;//他跟多少人打电话
//    int time;//此人累计打了多久电话
//    int gang_time;//以他为根的集合(团伙)打了多久电话
//    Node() {}
//    Node(string f, int n, int ti,int tt) 
//        :father(f), num_people(n), time(ti), gang_time(tt) {}
//};
//
//map<string, Node> m;
//
//string find(string root) //找root所在集合的根,同时压缩路劲
//{
//    string son = root, tmp;
//    while (m[root].father != root)//不断找根
//        root = m[root].father;
//    while (son != root) //路劲压缩，将寻根路劲上的节点一次性都直接指向集合根节点
//    {
//        tmp = m[son].father;
//        m[son].father = root;
//        son = tmp;
//    }
//    return root;
//}
//void Union(string a, string b, int t) 
//{
//    string larger = m[a].time > m[b].time ? a : b;
//    a = find(a);
//    b = find(b);
//    string more, less;
//    if (a != b)//不在同一个集合，合并且大的为根
//    {                                           //括号不能丢
//        m[a].time >= m[b].time ? (more = a, less = b) : (more = b, less = a);
//        m[less].father = more;//通话时间少的并入通话时间多的
//        m[more].num_people += m[less].num_people;
//        m[more].gang_time += m[less].gang_time + t;
//    }
//    else//在同一个集合，只要根累加时长
//    {
//        m[a].gang_time += t;
//        more = a;
//    }
//    if (m[more].time < m[larger].time)//可能某一次通话时长比此集合根时长长，将其置为根
//    {
//        m[more].father = larger;
//        m[larger].father = larger;
//        m[larger].num_people = m[more].num_people;
//        m[larger].gang_time = m[more].gang_time;
//    }
//}
//
//int main() 
//{
//    int n, k;
//    while (cin>>n>>k) 
//    {
//        m.clear();
//        while (n--) 
//        {
//            string s1, s2;
//            int time;
//            cin >> s1 >> s2 >> time;
//            //总通信量合并时再加到根
//            if (m.find(s1) == m.end()) 
//            {
//                Node tmp(s1,1,time,0);
//                m[s1] = tmp;
//            }
//            else
//                m[s1].time += time;
//            if (m.find(s2) == m.end()) 
//            {
//                Node tmp(s2, 1, time, 0);
//                m[s2] = tmp;
//            }
//            else
//                m[s2].time += time;
//
//            Union(s1, s2, time);//并入集合
//        }
//        int gangs = 0;//团伙数量
//        vector<string> head;
//        for (map<string, Node>::iterator it = m.begin(); it != m.end(); it++) 
//        {   //是集合的根(老大)+超过威胁+团伙人数大于2
//            if (it->second.father == it->first 
//                && it->second.gang_time > k && it->second.num_people > 2) 
//            {
//                head.push_back(it->first);
//                gangs++;
//            }
//        }
//        sort(head.begin(), head.end());
//        cout << gangs << endl;
//        for (int i = 0; i < head.size(); i++)
//            cout << head[i] << " " << m[head[i]].num_people << endl;
//        head.clear();
//    }
//    return 0;
//}