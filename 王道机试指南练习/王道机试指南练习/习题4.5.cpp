//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
///*后缀子串字典顺序输出*/
//int main() 
//{
//    string str;
//    while (cin >> str) 
//    {
//        string* sub = new string[str.size()];//后缀子串数组
//        for (int i = 0; i < str.size(); i++) 
//            sub[i] = str.substr(i, str.size() - i);
//
//        sort(sub, sub + str.size());
//
//        for (int j = 0; j < str.size(); j++)
//            cout << sub[j] << endl;
//    }
//    return 0;
//}