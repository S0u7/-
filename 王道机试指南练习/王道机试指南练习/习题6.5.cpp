//#include<iostream>
//using namespace std;
///*����n������������ȡ�������ֱ���Ϊ���Ӻͷ�ĸ�����������,���м������������
//�����������ӡ���ĸֻ�й����� 1 �ķ���
//����������ӱȷ�ĸС*/
///*շת�����
//a   b   mod
//3   10  3
//10  3   1
//3   1   0
//1   0   ����
//*/
//int GCD(int a, int b)
//{
//	while (b != 0)//շת�����
//	{
//		int t = b;
//		b = a % b;//��һ��a����һ��b,��һ��b�ǵ�ǰa mod b
//		a = t;
//	}
//	return a;
//}
//int gcd(int a, int b)//�ݹ�
//{
//	if (b == 0) 
//		return a;
//	else 
//		return gcd(b, a % b);
//}
//int main()
//{
//	int n,sum;
//	while (cin>>n && n != 0)
//	{
//		sum = 0;
//		int* num = new int[n];
//		for (int i = 0; i < n; i++)
//			cin >> num[i];
//		for (int j = 0; j < n; j++)
//			for (int k = j; k < n; k++)
//				if (GCD(num[j], num[k]) == 1)
//					sum++;
//		cout << sum << endl;
//	}
//	return 0;
//}