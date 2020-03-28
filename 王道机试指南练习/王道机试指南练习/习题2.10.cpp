//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector> 
///*
//输出路径
//4
//a\b\c
//b\c\d
//a\b\e
//b\d\e
//*/
//const int MAX = 11;
//vector<string> vec[MAX];
//
//int main()
//{
//    int n; 
//    string s;
//    while (cin >> n && n != 0)
//    {
//        //输入
//        for (int i = 0; i < n; i++)
//        {
//            cin >> s;
//            vec[i].clear();
//            int j = 0, index;
//            while (j < s.size())
//            {
//                if ((index = s.find('\\', j)) != string::npos)
//                {
//                    //从j位开始，截取index-j位
//                    vec[i].push_back(s.substr(j, index - j));
//                    j = index + 1;
//                }
//                else
//                {
//                    vec[i].push_back(s.substr(j, s.size() - j));
//                    break;
//                }
//            }
//        }
//        sort(vec, vec + n);//技巧
//
//        //打印
//        for (int i = 0; i < n; i++)
//        {
//            if (i == 0)
//            {//第一个字符串直接输出
//                for (int j = 0; j < vec[i].size(); j++)
//                {
//                    for (int k = 0; k < j; k++)
//                        cout << "  ";
//                    cout << vec[i][j] << endl;
//                }
//            }
//            else {
//                //先找到和前一个开始不相等的位置，如a\b\c和a\d\e
//                int j = 0;
//                while (j < vec[i - 1].size() && j < vec[i].size())
//                {
//                    if (vec[i][j] == vec[i - 1][j])
//                        j++;
//                    else
//                        break;
//                }
//                //第一个字母就不相同，直接输出
//                if (j == 0)
//                {
//                    for (int k = 0; k < vec[i].size(); k++)
//                    {
//                        for (int l = 0; l < k; l++)
//                            cout << "  ";
//                        cout << vec[i][k] << endl;
//                    }
//                }
//                //j前面相同，从j开始输出
//                else
//                {
//                    for (int k = j; k < vec[i].size(); k++)
//                    {
//                        for (int l = 0; l < k; l++)
//                            cout << "  ";
//                        cout << vec[i][k] << endl;
//                    }
//                }
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}