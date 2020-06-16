//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<cstring>
///*全排列：给定一个由不同的小写字母组成的字符串，
//已知字符串的长度在1到6之间，输出这个字符串的所有全排列,要求字母序比较小的排列在前面
//算法思想：递归,同n皇后问题，只不过将全排列的数字换为字母。*/
//
//const int num = 7;
//bool used[num] = { false };
//char result[num];//储存全排列结果的数组
//
//void permutation_1(int index, char str[], int n)//递归，排列树法
//{
//    if (index == n)//递归边界
//    {
//        for (int i = 0; i < n; i++)//输出当前排列
//            cout<<result[i];
//        cout << endl;
//        return;
//    }
//    for (int j = 0; j < n; j++)
//    {
//        if (used[j] == false)//还没被用过
//        {
//            result[index] = str[j];
//            used[j] = true;
//            permutation_1(index + 1, str, n);
//            used[j] = false;
//        }
//    }
//}
//
//bool next_permut(char* str, int n)//非递归
//{
//    int index = n - 1;
//    while (index >= 1 && str[index - 1] > str[index])//找拐点
//        index--;
//    index--;
//    if (index < 0)//如果拐点在首部，说明全排列完成
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
//void test01(char* str)//递归方法
//{
//    int n = strlen(str);
//    sort(str, str + n);//原始字符串进行排序
//    permutation_1(0, str, n);
//    cout << endl;//题目有坑,不加回车不AC
//}
//void test02(char* str)//STL函数方法
//{
//    int n = strlen(str);
//    sort(str, str + n);
//    do 
//    {
//        cout << str << endl;
//    } while (next_permutation(str, str + n));//下个排列函数；结尾要有分号
//    cout << endl;
//}
//void test03(char* str)//非递归升降法
//{
//    int n = strlen(str);
//    sort(str, str + n);
//    do
//    {
//        cout << str << endl;
//    } while (next_permut(str, n));//下个排列函数；结尾要有分号
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