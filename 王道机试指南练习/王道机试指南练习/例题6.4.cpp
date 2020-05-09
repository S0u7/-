//#include <algorithm>
//#include <string>
//#include <iostream>
//using namespace std;
///*M进制数转N进制，2<=M,N<=36。
//输入时如有字母，则字母为大写，输出时如有字母，则字母为小写*/
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
//
//        while (num[i] == '0') 
//            i++;//跳过高位的0
//    }
//    for (int k = 0; k < result.size(); k++)//输出字母小写
//        if (result[k] >= 'A' && result[k] <= 'Z')
//            result[k] += ('a' - 'A');
//
//    return result;
//}
//int main()
//{
//    int M, N;
//    string num;
//    while (cin >> M >> N)
//    {
//        cin >> num;
//        cout << conversion(M, num, N) << endl;
//    }
//}