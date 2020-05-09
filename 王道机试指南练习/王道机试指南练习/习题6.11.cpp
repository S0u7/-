//#include<iostream>
//using namespace std;
///*给定a0,a1,以及an=p*a(n-1) + q*a(n-2)中的p,q。这里n >= 2。 求第k个数对10000的模*/
//
//int cal_an(int a0,int a1,int p,int q,int k) //递归，但k比较大时消耗较大
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