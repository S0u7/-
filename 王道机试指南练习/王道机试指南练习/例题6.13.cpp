//#include<iostream>
//#include<cstring>
//using namespace std;
///*ʵ��һ���ӷ�����ʹ���ܹ����a+b��ֵ,����a��b��λ��������1000λ*/
//int main()
//{
//	char a[1010], b[1010],c[1010];
//	int rem;
//	while (cin>>a>>b)
//	{
//		int i = strlen(a) - 1;
//		int j = strlen(b) - 1;
//		int k;
//		i > j ? k = i : k = j;
//		c[k + 1] = '\0';
//		int temp = 0;
//		rem = 0;
//		while (i != -1 && j != -1)
//		{
//			temp = rem + a[i--] - '0' + b[j--] - '0';
//			c[k--] = temp % 10 + '0';
//			rem = temp / 10;
//		}
//		while (i != -1)
//		{
//			temp = rem + a[i--] - '0';
//			c[k--] = temp % 10 + '0';
//			rem = temp / 10;
//		}
//		while (j != -1)
//		{
//			temp = rem + b[j--] - '0';
//			c[k--] = temp % 10 + '0';
//			rem = temp / 10;
//		}
//		cout << c << endl;
//	}
//	return 0;
//}