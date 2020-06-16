//#include<iostream>
//using namespace std;
///*杨辉三角*/
///*递归求杨辉三角形i行j列的元素值
//但是递归效率很低，因为每一步都要重复计算之前已经算过的内容*/
//int triangle_YH(int i, int j)
//{
//    if (j == 1) //该行第一个是 1
//        return 1;
//    else if (j == i) //该行最后一个是 1
//        return 1;
//    else //否则为上层两个值相加
//        return triangle_YH(i - 1, j) + triangle_YH(i - 1, j - 1);
//}
//
//int triangle_YH_2(int i, int j, int num)//递归存储中间过程
//{
//    static int* notes=new int[num + 1];//共存n*(n+1)/2个数，0空置
//    for (int i = 0; i < num + 1; i++)//赋初值0
//        notes[i] = 0;
//
//    if (j == 1)
//        return 1;
//    else if (j == i)
//        return 1;
//    else
//    {
//        int p = (i * i - i) / 2 + j;
//        if (notes[p] != 0)
//            return notes[p];
//        else
//        {
//            notes[p]= triangle_YH_2(i - 1, j, num) 
//                + triangle_YH_2(i - 1, j - 1, num);
//            return notes[p];
//        }
//    }
//}
//void display(int n)
//{
//    int num = (n * n + n) / 2;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            //cout << triangle_YH(i, j);
//            cout << triangle_YH_2(i, j, num);
//            if (j != i)
//                cout << " ";
//            else
//                cout << endl;
//        }
//    }
//}
//
//int main()
//{
//	int n;
//	while (cin>>n)
//	{
//        display(n);
//	}
//	return 0;
//}