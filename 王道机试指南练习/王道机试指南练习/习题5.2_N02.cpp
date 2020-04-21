//#include<stdio.h>
///*计算表达式，没括号没空格*/
//int main()
//{
//    char ch;
//    double results[1000], num;
//    while (scanf_s("%lf", &num) != EOF)
//    {
//        results[0] = 0;
//        results[1] = num;
//        int i = 1;
//        while (scanf_s("%c", &ch) != EOF && ch != '\n')
//        {
//            scanf_s("%lf", &num);
//            if (ch == '+')
//                results[++i] = num;
//            else if (ch == '-')
//                results[++i] = -num;
//            else if (ch == '*')
//                results[i] *= num;
//            else if (ch == '/')
//                results[i] /= num;
//        }
//        for (int j = 1; j <= i; j++)
//            results[0] += results[j];
//        printf("%.0f\n", results[0]);
//
//    } return 0;
//}
