//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector> 
///*
//���·��
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
//        //����
//        for (int i = 0; i < n; i++)
//        {
//            cin >> s;
//            vec[i].clear();
//            int j = 0, index;
//            while (j < s.size())
//            {
//                if ((index = s.find('\\', j)) != string::npos)
//                {
//                    //��jλ��ʼ����ȡindex-jλ
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
//        sort(vec, vec + n);//����
//
//        //��ӡ
//        for (int i = 0; i < n; i++)
//        {
//            if (i == 0)
//            {//��һ���ַ���ֱ�����
//                for (int j = 0; j < vec[i].size(); j++)
//                {
//                    for (int k = 0; k < j; k++)
//                        cout << "  ";
//                    cout << vec[i][j] << endl;
//                }
//            }
//            else {
//                //���ҵ���ǰһ����ʼ����ȵ�λ�ã���a\b\c��a\d\e
//                int j = 0;
//                while (j < vec[i - 1].size() && j < vec[i].size())
//                {
//                    if (vec[i][j] == vec[i - 1][j])
//                        j++;
//                    else
//                        break;
//                }
//                //��һ����ĸ�Ͳ���ͬ��ֱ�����
//                if (j == 0)
//                {
//                    for (int k = 0; k < vec[i].size(); k++)
//                    {
//                        for (int l = 0; l < k; l++)
//                            cout << "  ";
//                        cout << vec[i][k] << endl;
//                    }
//                }
//                //jǰ����ͬ����j��ʼ���
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