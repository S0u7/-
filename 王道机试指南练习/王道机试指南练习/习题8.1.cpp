//#include<iostream>
//using namespace std;
///*�������*/
///*�ݹ������������i��j�е�Ԫ��ֵ
//���ǵݹ�Ч�ʺܵͣ���Ϊÿһ����Ҫ�ظ�����֮ǰ�Ѿ����������*/
//int triangle_YH(int i, int j)
//{
//    if (j == 1) //���е�һ���� 1
//        return 1;
//    else if (j == i) //�������һ���� 1
//        return 1;
//    else //����Ϊ�ϲ�����ֵ���
//        return triangle_YH(i - 1, j) + triangle_YH(i - 1, j - 1);
//}
//
//int triangle_YH_2(int i, int j, int num)//�ݹ�洢�м����
//{
//    static int* notes=new int[num + 1];//����n*(n+1)/2������0����
//    for (int i = 0; i < num + 1; i++)//����ֵ0
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