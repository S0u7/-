//#include <algorithm>
//#include <string>
//#include <iostream>
//using namespace std;
///*
//二进制逆序数
//1000位 十进制数转二进制数，二进制再转逆序，逆序二进制数再转十进制
//*/
//string conversion(int pre, string  num, int cur) //pre进制数字num转换为cur进制
//{
//    int rem, i = 0;
//    string result;
//    while (i < num.size()) 
//    {
//        rem = 0;
//        for (int j = i; j < num.size(); j++)
//        {
//            int temp = rem * pre + num[j] - '0'; 
//            num[j] = temp / cur + '0';//商
//            rem = temp % cur;//余数
//        }
//        result.insert(0, 1, rem + '0');
//        while (num[i] == '0') 
//            i++;//跳过这一次产生的高位的0
//    }
//    return result;
//}
//int main()
//{
//    string a, b;
//    while (cin >> a) 
//    {
//        b = conversion(10, a, 2);
//        reverse(b.begin(), b.end()); 
//        a = conversion(2, b, 10);
//        cout << a << endl;
//    }
//}