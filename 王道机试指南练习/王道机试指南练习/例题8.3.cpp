//#include<iostream>
//using namespace std;
///*쳲���������*/
//int fibonacci_1(int n)//���εݹ�O(2^n),Ч�ʵ�
//{
//	if (n == 1 || n == 0)
//		return n;
//	else
//		return fibonacci_1(n - 1) + fibonacci_1(n - 2);
//}
//int fibonacci_2(int n)//���Ʒ�O(n)
//{
//	if (n == 0 || n == 1)
//		return n;
//	else
//	{
//		int* fib = new int[n + 1];
//		fib[0] = 0, fib[1] = 1;
//		for (int i = 2; i <= n; i++)
//			fib[i] = fib[i - 1] + fib[i - 2];
//		//delete[] fib;//������new�Ŀռ���ϵͳ�Զ��ͷţ��Լ������ͷ�����ʱ�����
//		return fib[n];
//	}
//}
//
//int** multi(int** m1, int** m2)//���׾���˷�
//{
//	int** ans = new int* [2];
//	for (int t = 0; t < 2; t++)
//		ans[t] = new int[2];
//
//	for (int i = 0; i < 2; i++)//i:��
//	{
//		
//		for (int j = 0; j < 2; j++)//j:��
//		{
//			int sum = 0;
//			for (int k = 0; k < 2; k++)//k:Ԫ��
//			{
//				sum += m1[i][k] * m2[k][j];
//			}	
//			ans[i][j] = sum;
//		}			
//	}
//	return ans;
//}
//int fibonacci_3(int n)//��������ݷ�O(logn)
//{
//	int i;
//	int** mat = new int* [2];
//	for ( i = 0; i < 2; i++)
//		mat[i] = new int[2];
//	mat[0][0] = 1, mat[0][1] = 1, mat[1][0] = 1, mat[1][1] = 0;
//	/*//��n����һ��д��
//	int** base = mat;
//	for ( i = 0; i < n; i++)
//	{
//		mat = multi(mat, base);
//	}
//	reutrn mat[0][1];*/
//	//������
//	int** ans = new int* [2];
//	for (i = 0; i < 2; i++)
//		ans[i] = new int[2];
//	ans[0][0] = 1, ans[0][1] = 0, ans[1][0] = 0, ans[1][1] = 0;//��λ��
//	while (n != 0)
//	{
//		if (n % 2 == 1)
//			ans = multi(ans, mat);
//		n /= 2;
//		mat = multi(mat, mat);
//	}
//	return ans[0][1];
//}
//
//int main()
//{
//	int n;
//	while (cin>>n)
//	{
//		//cout << fibonacci_1(n) << endl;
//		
//		//cout << fibonacci_2(n) << endl;
//		cout << fibonacci_3(n) << endl;
//	}
//	return 0;
//}