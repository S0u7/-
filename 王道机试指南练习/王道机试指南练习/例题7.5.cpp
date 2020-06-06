//#include<iostream>
//#include<algorithm>
//using namespace std;
///*case of fugitive:若干2<n<2*10^5小岛，若干1<m<2*10^5长度1<l,r<10^18的桥，小岛间架桥*/
//struct island 
//{
//    long long left, right;
//};
//struct bridge 
//{
//    long long length, number;//number:桥的序号
//    bool isUsed;//false表示尚未被使用，true表示已被使用
//};
//struct dis 
//{
//    long long min, max;
//    int num;//序号
//    bool isOK;
//};
//const int MAXN = 2e5 + 20;
//
//island isle[MAXN];
//bridge b[MAXN];
//dis d[MAXN];
//int ans[MAXN];
//
//bool BCompare(bridge a, bridge b)//按桥长度升序排序
//{
//    return a.length < b.length;
//}
//bool DCompare(dis a, dis b)//按相邻小岛之间最大距离升序排序
//{
//    return a.max < b.max;
//}
//
//int main() 
//{
//    int n, m;
//    while (cin>>n>>m) 
//    {
//        for (int i = 0; i < n; i++)//输入小岛坐标
//            cin >> isle[i].left >> isle[i].right;
//
//        for (int i = 0; i < m; i++)//初始化每个桥
//        {
//            cin >> b[i].length;
//            b[i].number = i + 1;
//            b[i].isUsed = false;
//        }
//        for (int i = 1; i < n; i++) //计算相邻小岛之间的最短，最长距离
//        {
//            d[i].min = isle[i].left - isle[i - 1].right;
//            d[i].max = isle[i].right - isle[i - 1].left;
//            d[i].num = i;
//            d[i].isOK = false;
//        }
//        d[0].max = -1;
//
//        sort(b, b + m, BCompare);//按桥长度排序
//        sort(d, d + n, DCompare);//按岛间距离排序
//
//        int count = 1;//；连接计数
//        for (int i = 0; i < m; i++) 
//        {//按桥的长度选择岛间距离，贪心
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
//        //判断是否连接成功
//        bool can = true;
//        if (count == n) 
//            can = true;
//        else 
//            can = false;
//        //输出
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