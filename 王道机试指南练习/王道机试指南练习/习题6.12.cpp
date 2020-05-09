//#include<iostream>
//#include<string>
//using namespace std;
///*给定a和n，计算a+aa+aaa+a...a(n个a)的和（1<=a<=9,1<=n<=100）
//        a
// +     aa
// +    aaa
// +   aaaa
// +  aaaaa
// +    ...
//*/
//int main() 
//{
//    int a, n;
//    while (cin>>a>>n) 
//    {
//        string res;
//        int c = 0;//进位
//        char rem;
//        for (int i = n; i >= 1; i--) 
//        {
//            int temp = a * i + c;
//            rem = temp % 10 + '0';//余数
//            res.insert(0, 1, rem);//头插
//            c = temp / 10;
//        }
//        if (c != 0)
//            res.insert(0, 1, c + '0');
//        cout << res << endl;
//    }
//}