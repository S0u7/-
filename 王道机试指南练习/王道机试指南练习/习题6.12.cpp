//#include<iostream>
//#include<string>
//using namespace std;
///*����a��n������a+aa+aaa+a...a(n��a)�ĺͣ�1<=a<=9,1<=n<=100��
//        a
// +     aa
// +    aaa
// +   aaaa
// +  aaaaa
// +    ...
//*/
//int main() 
//{
//    int a, n;
//    while (cin>>a>>n) 
//    {
//        string res;
//        int c = 0;//��λ
//        char rem;
//        for (int i = n; i >= 1; i--) 
//        {
//            int temp = a * i + c;
//            rem = temp % 10 + '0';//����
//            res.insert(0, 1, rem);//ͷ��
//            c = temp / 10;
//        }
//        if (c != 0)
//            res.insert(0, 1, c + '0');
//        cout << res << endl;
//    }
//}