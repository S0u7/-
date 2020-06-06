//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
///*
//To Fill or Not to Fill
//核心思路:利用贪心策略,从最便宜的加油站开始,每个加油站加的油最多能走cmax*davg路程.
//利用一个30000大小的flag数组记录是否有重合区域
//*/
//struct gas_stations
//{
//    double pi;
//    int di;
//};
//bool compare(gas_stations g1, gas_stations g2)
//{
//    return g1.pi < g2.pi;
//}
//int main()
//{
//    int C, D, Davg, N;
//    double cost;
//    while (cin>>C>>D>>Davg>>N)
//    {
//        gas_stations* G = new gas_stations[N];
//        for (int i = 0; i < N; i++)//输入加油站位置、价格
//            cin >> G[i].pi >> G[i].di;
//
//        sort(G, G + N,compare);//按价格排序
//
//        cost = 0;//记录花费
//        int max = C * Davg, need, dis;
//        int* flag = new int[D+10];
//        memset(flag, 0, (D + 10) * sizeof(int));
//        //关键代码
//        for (int i = 0; i < N; i++)
//        { //如果到终点距离<max,只需加上足够走到终点的油
//            need = (G[i].di + max < D ? max : D - G[i].di);    
//            dis = 0;    //记录有多长距离需要该加油站的油
//            for (int j = G[i].di; j < G[i].di + need; j++)
//            {
//                if (flag[j] == 0)
//                {
//                    flag[j] = 1;
//                    dis++;
//                }
//            }
//            cost += dis / (Davg * 1.0) * G[i].pi; //加上在该加油站的花销
//        }
//        //输出
//        cout.precision(2);
//        int i;
//        for (i = 0; i < D; i++)
//        {//有的路程没有被覆盖到说明走不到这里
//            if (flag[i] == 0)
//            {
//                cout << "The maximum travel distance = " <<fixed<< (double)i << endl;
//                break;
//            }
//        }
//        if (i == D)//到达目的地
//            cout <<fixed<< cost << endl;
//        delete[] G, flag;
//    }
//    return 0;
//}