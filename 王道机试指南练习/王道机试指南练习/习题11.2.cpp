//#include <iostream>
//#include <set>
//using namespace std;
///*ͳ��ͼ����ͨ������*/
//const int N = 1000000;
//int Tree[N];
//int findRoot(int x) //��x���ڼ��ϵĸ�
//{
//    if (Tree[x] == -1) 
//        return x;
//    int temp = findRoot(Tree[x]);
//    Tree[x] = temp;//·��ѹ��
//    return temp;
//}
//int main() 
//{
//    int a, b;
//    set<int>s;
//    for (int i = 0; i < N; i++) //��ʼ����ÿ���ڵ㶼��һ������
//        Tree[i] = -1;
//    while (cin >> a >> b) //���鼯
//    {
//        s.insert(a);
//        s.insert(b);//��ÿ���ڵ㲻�ظ��Ĵ�����
//        a = findRoot(a);
//        b = findRoot(b);
//        if (a != b) 
//            Tree[a] = b;
//    }
//    int ans = 0;
//    set<int>::iterator it;
//    for (it = s.begin(); it != s.end(); it++)//���ÿ���ڵ����ڼ���
//        if (Tree[*it] == -1) 
//            ans++;
//    cout << ans << endl;
//    return 0;
//}