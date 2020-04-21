//#include<iostream>
//using namespace std;
///*简单计算器，不含括号*/
//const int maxn = 201;
//int main()
//{
//    double temp, ans[maxn];
//    char ch;
//    while (cin >> temp && temp)//输入第一个数字
//    {
//        int num = 0;
//        double sum = 0;
//        ans[num] = temp;
//        while (cin >> ch >> temp)//先输入一个运算符，再输入一个数字
//        {
//            switch (ch)
//            {
//            case '+':ans[++num] = temp;
//                break;
//            case '-':ans[++num] = -temp;
//                break;
//            case '*':ans[num] *= temp;
//                break;
//            case '/':ans[num] /= temp;
//                break;
//            }
//            char c = cin.get();
//            if (c == '\n')
//                break;
//        }
//        for (int i = 0; i <= num; i++)
//            sum += ans[i];
//        printf("%0.2f\n", sum);//只输出两位小数
//    }
//    return 0;
//}