//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
///*
//To Fill or Not to Fill
//����˼·:����̰�Ĳ���,������˵ļ���վ��ʼ,ÿ������վ�ӵ����������cmax*davg·��.
//����һ��30000��С��flag�����¼�Ƿ����غ�����
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
//        for (int i = 0; i < N; i++)//�������վλ�á��۸�
//            cin >> G[i].pi >> G[i].di;
//
//        sort(G, G + N,compare);//���۸�����
//
//        cost = 0;//��¼����
//        int max = C * Davg, need, dis;
//        int* flag = new int[D+10];
//        memset(flag, 0, (D + 10) * sizeof(int));
//        //�ؼ�����
//        for (int i = 0; i < N; i++)
//        { //������յ����<max,ֻ������㹻�ߵ��յ����
//            need = (G[i].di + max < D ? max : D - G[i].di);    
//            dis = 0;    //��¼�ж೤������Ҫ�ü���վ����
//            for (int j = G[i].di; j < G[i].di + need; j++)
//            {
//                if (flag[j] == 0)
//                {
//                    flag[j] = 1;
//                    dis++;
//                }
//            }
//            cost += dis / (Davg * 1.0) * G[i].pi; //�����ڸü���վ�Ļ���
//        }
//        //���
//        cout.precision(2);
//        int i;
//        for (i = 0; i < D; i++)
//        {//�е�·��û�б����ǵ�˵���߲�������
//            if (flag[i] == 0)
//            {
//                cout << "The maximum travel distance = " <<fixed<< (double)i << endl;
//                break;
//            }
//        }
//        if (i == D)//����Ŀ�ĵ�
//            cout <<fixed<< cost << endl;
//        delete[] G, flag;
//    }
//    return 0;
//}