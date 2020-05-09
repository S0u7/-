//#include<iostream>
//using namespace std;
///*输入一个正整数N(0<=N<=1000)，输出N的阶乘*/
//void  factorial(int n) 
//{//超出10000的部分开始进位，相当于一万进制数，输出时再补0
//    int i, j, k = 0, a[1000] = { 0 };
//    a[0] = 1;
//
//    for (i = 1; i <= n; i++) //n的阶乘=1*2*...*n
//    {
//        for (j = 0; j <= k; j++)
//            a[j] *= i;
//        for (j = 0; j <= k; j++)//检查有没有超过10000
//        {
//            if (a[j] >= 10000)//达到10000的就进位，存到下一位
//            {
//                a[j + 1] += a[j] / 10000;
//                a[j] %= 10000;
//            }
//        }
//        if (a[j] != 0) //此时j=k+1
//            k++;//k是数组a最右边不为0的下标      
//    }
//    for (i = k; i >= 0; i--)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    for (i = k; i >= 0; i--) 
//    {
//        if (i != k) //超出10000产生的余数，要补前面位的0,例如79=X0079 % 10000
//        {
//            if (a[i] < 10) 
//                cout<<"000";
//            else if (a[i] < 100) 
//                cout<<"00";
//            else if (a[i] < 1000) 
//                cout<<"0";
//        }
//        cout<<a[i]<<" ";        
//    }
//    cout << endl;
//}
//int main() 
//{
//    int n;
//    while (cin>>n) 
//    {
//        factorial(n);
//    }
//    return 0;
//}