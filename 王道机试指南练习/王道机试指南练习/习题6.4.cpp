//#include <algorithm>
//#include <string>
//#include <iostream>
//using namespace std;
///*���������������a��n��b����a��������nת����b����������
//a��b��ʮ����������2 =< a��b <= 16��
//���ݿ��ܴ��ڰ���ǰ��������
//���ʱ��ĸ����ȫ���ô�д��ʾ*/
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
//        while (num[i] == '0')
//            i++;//������λ��0
//    }
//    return result;
//}
//int main()
//{
//    int a, b;
//    string n;
//    while (cin >> a >> n >> b)
//    {
//        for (int k = 0; k < n.size(); k++)//ͳһ�ɴ�д��ĸ
//            if (n[k] >= 'a' && n[k] <= 'z')
//                n[k] += ('A'- 'a');
//        cout << conversion(a, n, b) << endl;
//    }
//}