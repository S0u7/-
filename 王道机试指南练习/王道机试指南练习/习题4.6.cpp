//#include<iostream>
//using namespace std;
//#include<string>
///* ���ⲻ��ȫ���ַ���ƥ������
//   1�������������Ų�ֹһ����������abc[def]ghi[jkl]mn
//   2���������޿����ݣ������������в�����a[]b����
//   3���ı�����ģʽ���в�������ͬǰ��׺��ֻ�Ƚ�һ�ξ͹���
//   4�������ı�����ģʽ��������ͬ��һ��ɨ�輴��
//*/
//int main() 
//{
//    int n;
//    string pat;
//    while (cin>>n) 
//    {
//        string* text=new string[n];
//        for (int i = 0; i < n; i++)
//            cin >> text[i];//n���ı���
//        cin >> pat;//ģʽ��
//
//        int index_t, index_p, flag = 0;//flag:������ ���� ƥ���ַ���־
//        for (int i = 0; i < n; i++) 
//        {
//            index_t = 0;
//            index_p = 0;
//            while (index_t != text[i].size() && index_p != pat.size()) 
//            {
//                if (text[i][index_t] == pat[index_p] 
//                    || text[i][index_t] - ('A' - 'a') == pat[index_p] 
//                    || text[i][index_t] + ('A' - 'a') == pat[index_p]) 
//                {//ƥ�䣬ָ�����
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
//                            flag = 1;//�����ڴ���ƥ���ַ�
//
//                        index_p++;
//                    }
//                    if (flag == 1)//�����ڴ���ƥ���ַ������������Ƚ� 
//                    {
//                        index_p++;
//                        index_t++;
//                    }
//                    else//�����ڲ�����ƥ���ַ�
//                        break;
//                }//ʧ��
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