//#include<iostream>
//using namespace std;
//#include<string>
///*��֪������k����2<=k<=9���ָ����������Ϊ30λ��ʮ���ƷǸ�����c��������������c��k
//ÿһ��c�Ľ��ռһ��
//1) ���������� c%k == 0 ��k���������������k���м��ÿո���������һ��k����û�пո�
//2) ��û��������k�����"none"
//ע�������������
//��Ҫ��-1���м���*/
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
//        int flag = 1;//�ǵ�һ�������k,ǰ�治����ո�
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