//#include<iostream>
//using namespace std;
///*����a0,a1,�Լ�an=p*a(n-1) + q*a(n-2)�е�p,q������n >= 2�� ���k������10000��ģ*/
//
//int cal_an(int a0,int a1,int p,int q,int k) //�ݹ飬��k�Ƚϴ�ʱ���Ľϴ�
//{
//    if (k == 0)
//        return a0;
//    else if (k == 1)
//        return a1;
//    else
//        return  (p * cal_an(a0,a1,p,q,k - 1) % 10000 
//        + q * cal_an(a0,a1,p,q,k - 2) % 10000)%10000;
//}
//
//int main()
//{
//    int a0, a1, p, q, k;
//    while (cin >> a0 >> a1 >> p >> q >> k)
//    {
//        int* sum = new int[k + 1];
//        sum[0] = a0;
//        sum[1] = a1;
//        for (int i = 2; i <= k; i++)
//            sum[i] = (p * sum[i - 1] + q * sum[i - 2]) % 10000;
//
//        cout << sum[k] << endl;
//
//        cout << cal_an(a0, a1, p, q, k) << endl;
//    }
//    return 0;
//}