//#include <algorithm>
//#include <string>
//#include <iostream>
//using namespace std;
///*д��һ�����򣬽���һ��ʮ�����Ƶ���ֵ�ַ������������ֵ��ʮ�����ַ���
//(ע����ܴ��ڵ�һ������������Ķ�������)��*/
//
//int char_to_num(char c)//���ַ��������
//{
//    int a;
//    if (c >= 'A' && c <= 'Z')
//        a = c - 'A' + 10;
//    else
//        a = c - '0';
//    return a;
//}
//char num_to_char(int n)//�����ֱ���ַ�
//{
//    char c;
//    if (n >= 10)
//        c = n - 10 + 'A';//������ַ�
//    else
//        c = n + '0';//���������
//    return c;
//}
//
//string conversion(int pre, string  num, int cur) //pre��������numת��Ϊcur����
//{
//    int i = 0;
//    char rem;//ÿһ�������������ַ�����Ϊ�˷���result��������ͳһ
//    string result;
//    while (i < num.size()) 
//    {
//        rem = '0';
//        for (int j = i; j < num.size(); j++)
//        {
//            int a, b;//a,b��������
//            a = char_to_num(rem);
//            b = char_to_num(num[j]);
//            int temp = (a * pre + b);//�����ּ���ÿ�����
//            //��ԭΪ�ַ�
//            num[j] = num_to_char(temp / cur);
//            rem = num_to_char(temp % cur);
//        }
//        result.insert(0, 1, rem);//ͷ����
//
//        while (num[i] == '0') 
//            i++;//������λ��0
//    }
//    return result;
//}
//int main()
//{
//    string num;
//    while (cin>>num)
//    {
//        num.erase(0, 2);
//        cout << conversion(16, num, 10) << endl;
//    }
//}