//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
///*head of a gang:���ݵ绰��¼���Ż�ͷĿ
//˼·��ʹ���˲��鼯��ÿ���˶��������ͨ�����Լ��Լ��ĸ���(�뱾���й����Ҹ���ͨ�������ڵ����ҵ�)��ֻ�����ϲ�ĸ�����ͨ��������������Ч�ġ�
//find������Ҫ��Ѱ���������ڹ�����ѹ��·����
//Union�������ںϲ�����Ԫ�أ����еĲ���t�Ǳ��κϲ�˫����ͨ���������ڼ���˫���ĸ���totalͨ�����У�������Ѱ��˫���ĸ���������ͬ�Ļ����������Ӧ�ĺϲ�������ͨ����С�Ĳ���ͨ������ģ����޸�father������ԭ����num_people��total���ƹ������������ε�ͨ�������ӵ���������ͨ�����У����������ϴ��ˡ�
//�ϲ������У��п��ܱ��κϲ����������ĸ���ͨ�����ȸ��ĸ���ͨ��������ʱ���Ҫ���ϴ��ˡ���Ѱ˫���ĸ���������ͬһ����ᣬ��ʱ��ֻ�轫���ε�ͨ���������ϴ�ά���İ����ͨ����total��������Ƿ���Ҫ���ϴ󣬼���κϲ��������ڵ����Ƿ��бȸ���ͨ������ġ�
//�����Ǳ���map�ˣ��ҳ�ÿ�����ɵ��ϴ󣬼�������������࣬��ͨ�����Ƿ�����в��*/
//struct Node 
//{
//    string father;//���ĸ�
//    int num_people;//���������˴�绰
//    int time;//�����ۼƴ��˶�õ绰
//    int gang_time;//����Ϊ���ļ���(�Ż�)���˶�õ绰
//    Node() {}
//    Node(string f, int n, int ti,int tt) 
//        :father(f), num_people(n), time(ti), gang_time(tt) {}
//};
//
//map<string, Node> m;
//
//string find(string root) //��root���ڼ��ϵĸ�,ͬʱѹ��·��
//{
//    string son = root, tmp;
//    while (m[root].father != root)//�����Ҹ�
//        root = m[root].father;
//    while (son != root) //·��ѹ������Ѱ��·���ϵĽڵ�һ���Զ�ֱ��ָ�򼯺ϸ��ڵ�
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
//    if (a != b)//����ͬһ�����ϣ��ϲ��Ҵ��Ϊ��
//    {                                           //���Ų��ܶ�
//        m[a].time >= m[b].time ? (more = a, less = b) : (more = b, less = a);
//        m[less].father = more;//ͨ��ʱ���ٵĲ���ͨ��ʱ����
//        m[more].num_people += m[less].num_people;
//        m[more].gang_time += m[less].gang_time + t;
//    }
//    else//��ͬһ�����ϣ�ֻҪ���ۼ�ʱ��
//    {
//        m[a].gang_time += t;
//        more = a;
//    }
//    if (m[more].time < m[larger].time)//����ĳһ��ͨ��ʱ���ȴ˼��ϸ�ʱ������������Ϊ��
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
//            //��ͨ�����ϲ�ʱ�ټӵ���
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
//            Union(s1, s2, time);//���뼯��
//        }
//        int gangs = 0;//�Ż�����
//        vector<string> head;
//        for (map<string, Node>::iterator it = m.begin(); it != m.end(); it++) 
//        {   //�Ǽ��ϵĸ�(�ϴ�)+������в+�Ż���������2
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