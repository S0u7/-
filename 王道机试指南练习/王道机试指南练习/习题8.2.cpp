//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<cstring>
///*ȫ���У�����һ���ɲ�ͬ��Сд��ĸ��ɵ��ַ�����
//��֪�ַ����ĳ�����1��6֮�䣬�������ַ���������ȫ����,Ҫ����ĸ��Ƚ�С��������ǰ��
//�㷨˼�룺�ݹ�,ͬn�ʺ����⣬ֻ������ȫ���е����ֻ�Ϊ��ĸ��*/
//
//const int num = 7;
//bool used[num] = { false };
//char result[num];//����ȫ���н��������
//
//void permutation_1(int index, char str[], int n)//�ݹ飬��������
//{
//    if (index == n)//�ݹ�߽�
//    {
//        for (int i = 0; i < n; i++)//�����ǰ����
//            cout<<result[i];
//        cout << endl;
//        return;
//    }
//    for (int j = 0; j < n; j++)
//    {
//        if (used[j] == false)//��û���ù�
//        {
//            result[index] = str[j];
//            used[j] = true;
//            permutation_1(index + 1, str, n);
//            used[j] = false;
//        }
//    }
//}
//
//bool next_permut(char* str, int n)//�ǵݹ�
//{
//    int index = n - 1;
//    while (index >= 1 && str[index - 1] > str[index])//�ҹյ�
//        index--;
//    index--;
//    if (index < 0)//����յ����ײ���˵��ȫ�������
//        return false;
//
//    for (int i = n-1; i > index; i--)
//    {
//        if (str[i] > str[index])
//        {
//            swap(str[i], str[index]);
//            break;
//        }
//    }
//    reverse(str + index + 1, str + n);
//    return true;
//}
//
//void test01(char* str)//�ݹ鷽��
//{
//    int n = strlen(str);
//    sort(str, str + n);//ԭʼ�ַ�����������
//    permutation_1(0, str, n);
//    cout << endl;//��Ŀ�п�,���ӻس���AC
//}
//void test02(char* str)//STL��������
//{
//    int n = strlen(str);
//    sort(str, str + n);
//    do 
//    {
//        cout << str << endl;
//    } while (next_permutation(str, str + n));//�¸����к�������βҪ�зֺ�
//    cout << endl;
//}
//void test03(char* str)//�ǵݹ�������
//{
//    int n = strlen(str);
//    sort(str, str + n);
//    do
//    {
//        cout << str << endl;
//    } while (next_permut(str, n));//�¸����к�������βҪ�зֺ�
//    cout << endl;
//}
//int main()
//{
//    char str[num];
//    while (cin>>str)
//    {
//        //test01(str);
//        //test02(str);
//        test03(str);
//    }
//    return 0;
//}