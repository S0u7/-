//#include<iostream>
//#include<algorithm>
//using namespace std;
///*case of fugitive:����2<n<2*10^5С��������1<m<2*10^5����1<l,r<10^18���ţ�С�������*/
//struct island 
//{
//    long long left, right;
//};
//struct bridge 
//{
//    long long length, number;//number:�ŵ����
//    bool isUsed;//false��ʾ��δ��ʹ�ã�true��ʾ�ѱ�ʹ��
//};
//struct dis 
//{
//    long long min, max;
//    int num;//���
//    bool isOK;
//};
//const int MAXN = 2e5 + 20;
//
//island isle[MAXN];
//bridge b[MAXN];
//dis d[MAXN];
//int ans[MAXN];
//
//bool BCompare(bridge a, bridge b)//���ų�����������
//{
//    return a.length < b.length;
//}
//bool DCompare(dis a, dis b)//������С��֮����������������
//{
//    return a.max < b.max;
//}
//
//int main() 
//{
//    int n, m;
//    while (cin>>n>>m) 
//    {
//        for (int i = 0; i < n; i++)//����С������
//            cin >> isle[i].left >> isle[i].right;
//
//        for (int i = 0; i < m; i++)//��ʼ��ÿ����
//        {
//            cin >> b[i].length;
//            b[i].number = i + 1;
//            b[i].isUsed = false;
//        }
//        for (int i = 1; i < n; i++) //��������С��֮�����̣������
//        {
//            d[i].min = isle[i].left - isle[i - 1].right;
//            d[i].max = isle[i].right - isle[i - 1].left;
//            d[i].num = i;
//            d[i].isOK = false;
//        }
//        d[0].max = -1;
//
//        sort(b, b + m, BCompare);//���ų�������
//        sort(d, d + n, DCompare);//�������������
//
//        int count = 1;//�����Ӽ���
//        for (int i = 0; i < m; i++) 
//        {//���ŵĳ���ѡ�񵺼���룬̰��
//            for (int j = 1; j < n; j++) 
//            {
//                if (b[i].length <= d[j].max && b[i].length >= d[j].min && !d[j].isOK) 
//                {
//                    ans[d[j].num] = b[i].number;
//                    d[j].isOK = true;
//                    count++;
//                    break;
//                }
//            }
//        }       
//        //�ж��Ƿ����ӳɹ�
//        bool can = true;
//        if (count == n) 
//            can = true;
//        else 
//            can = false;
//        //���
//        if (can)
//        {
//            cout << "YES" << endl;
//            for (int i = 1; i < n; i++)
//            {
//                if (i == n - 1)
//                    cout << ans[i]<<" ";
//                else
//                    cout << ans[i]<<" ";
//            }
//            cout << endl;
//        }
//        else
//            cout << "NO" << endl;
//    }
//    return 0;
//}
///*
//4 4
//1 4
//7 8
//9 10
//12 14
//4 5 3 8
//2 2
//11 14
//17 18
//2 9
//2 1
//1 1
//1000000000000000000 1000000000000000000
//999999999999999999
//*/