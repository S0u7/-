//#include <algorithm>
//#include <string>
//#include <iostream>
//using namespace std;
///*
//������������
//1000λ ʮ������ת������������������ת�����������������תʮ����
//*/
//string conversion(int pre, string  num, int cur) //pre��������numת��Ϊcur����
//{
//    int rem, i = 0;
//    string result;
//    while (i < num.size()) 
//    {
//        rem = 0;
//        for (int j = i; j < num.size(); j++)
//        {
//            int temp = rem * pre + num[j] - '0'; 
//            num[j] = temp / cur + '0';//��
//            rem = temp % cur;//����
//        }
//        result.insert(0, 1, rem + '0');
//        while (num[i] == '0') 
//            i++;//������һ�β����ĸ�λ��0
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