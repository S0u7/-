//#include<iostream>
//using namespace std;
//#include<string>
///*已知正整数k满足2<=k<=9，现给出长度最大为30位的十进制非负整数c，求所有能整除c的k
//每一个c的结果占一行
//1) 若存在满足 c%k == 0 的k，输出所有这样的k，中间用空格隔开，最后一个k后面没有空格。
//2) 若没有这样的k则输出"none"
//注意整数溢出问题
//不要对-1进行计算*/
//int mod(string a, int b) 
//{
//    int rem = 0;
//    for (int i = 0; i < a.size(); i++) 
//        rem = (rem * 10 + (a[i] - '0')) % b;
//    return rem;
//}
//int main() 
//{
//    string c;
//    while (cin >> c && c != "-1") 
//    {
//        int flag = 1;//是第一个满足的k,前面不输出空格
//        for (int k = 2; k <= 9; k++)
//            if (!mod(c, k))
//            {
//                if (flag != 1)
//                    cout << " ";
//                else
//                    flag = 0;
//                cout << k;
//            }
//        if (flag)
//            cout << "none";
//        cout << endl;
//    }
//}