//#include <algorithm>
//#include <string>
//#include <iostream>
//using namespace std;
///*输入包含三个整数a，n，b。将a进制整数n转换成b进制整数。
//a，b是十进制整数，2 =< a，b <= 16。
//数据可能存在包含前导零的情况
//输出时字母符号全部用大写表示*/
//
//int char_to_num(char c)//将字符变成数字
//{
//    int a;
//    if (c >= 'A' && c <= 'Z')
//        a = c - 'A' + 10;
//    else
//        a = c - '0';
//    return a;
//}
//char num_to_char(int n)//将数字变成字符
//{
//    char c;
//    if (n >= 10)
//        c = n - 10 + 'A';//结果是字符
//    else
//        c = n + '0';//结果是数字
//    return c;
//}
//
//string conversion(int pre, string  num, int cur) //pre进制数字num转换为cur进制
//{
//    int i = 0;
//    char rem;//每一步的余数，用字符型是为了方便result插入类型统一
//    string result;
//    while (i < num.size()) 
//    {
//        rem = '0';
//        for (int j = i; j < num.size(); j++)
//        {
//            int a, b;//a,b代表数字
//            a = char_to_num(rem);
//            b = char_to_num(num[j]);
//            int temp = (a * pre + b);//用数字计算每步结果
//            //还原为字符
//            num[j] = num_to_char(temp / cur);
//            rem = num_to_char(temp % cur);
//        }
//        result.insert(0, 1, rem);//头插结果
//        while (num[i] == '0')
//            i++;//跳过高位的0
//    }
//    return result;
//}
//int main()
//{
//    int a, b;
//    string n;
//    while (cin >> a >> n >> b)
//    {
//        for (int k = 0; k < n.size(); k++)//统一成大写字母
//            if (n[k] >= 'a' && n[k] <= 'z')
//                n[k] += ('A'- 'a');
//        cout << conversion(a, n, b) << endl;
//    }
//}