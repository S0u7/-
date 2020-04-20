//#include<iostream>
//using namespace std;
//#include<string>
///* 本题不完全是字符串匹配问题
//   1，数据中中括号不止一个，即存在abc[def]ghi[jkl]mn
//   2，括号内无空数据，即测试数据中不存在a[]b这种
//   3，文本串、模式串中不存在相同前后缀，只比较一次就够了
//   4，基本文本串与模式串长度相同，一趟扫描即可
//*/
//int main() 
//{
//    int n;
//    string pat;
//    while (cin>>n) 
//    {
//        string* text=new string[n];
//        for (int i = 0; i < n; i++)
//            cin >> text[i];//n个文本串
//        cin >> pat;//模式串
//
//        int index_t, index_p, flag = 0;//flag:括号内 存在 匹配字符标志
//        for (int i = 0; i < n; i++) 
//        {
//            index_t = 0;
//            index_p = 0;
//            while (index_t != text[i].size() && index_p != pat.size()) 
//            {
//                if (text[i][index_t] == pat[index_p] 
//                    || text[i][index_t] - ('A' - 'a') == pat[index_p] 
//                    || text[i][index_t] + ('A' - 'a') == pat[index_p]) 
//                {//匹配，指针后移
//                    index_t++;
//                    index_p++;
//                }
//                else if (pat[index_p] == '[') 
//                {
//                    index_p++;
//                    flag = 0;
//                    while (pat[index_p] != ']') 
//                    {
//                        if ( pat[index_p] == text[i][index_t] 
//                            || text[i][index_t] - ('A' - 'a') == pat[index_p] 
//                            || text[i][index_t] + ('A' - 'a') == pat[index_p]) 
//                            flag = 1;//括号内存在匹配字符
//
//                        index_p++;
//                    }
//                    if (flag == 1)//括号内存在匹配字符，则接着往后比较 
//                    {
//                        index_p++;
//                        index_t++;
//                    }
//                    else//括号内不存在匹配字符
//                        break;
//                }//失配
//                else
//                    break;
//            }
//            if (index_t == text[i].size() && index_p == pat.size())
//                cout << i + 1 << " " << text[i] << endl;
//        }
//    }
//    return 0;
//}
///*
//12
//aaaACCcaAC
//aACACAaccA
//aCacCCCACA
//cCcAccCacC
//aAACAACACc
//AaCcAccAcC
//aaaaCAcCCc
//CAacCccCaC
//ACcaaCAaCc
//cAcCAaaACA
//ACaaAAccCC
//CaaACaaCca
//caa[abcd]c[ac]ac[abc]a
//*/