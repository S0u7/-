//#include<iostream>
//using namespace std;
//#include<cmath>
///*��ŵ��III����ŵ�������ϣ����������ƶ�1<=N=35*/
//long long hanno_1(int N)//�Ƶ���ʽ 3^N-1
//{
//	//return pow(3, N) - 1;
//	long long ans = 1;
//	for (int i = 1; i <= N; i++)
//		ans *= 3;
//
//	return ans - 1;
//}
//
//long long hanno_2(int N)//�ݹ�
//{
//	if (N == 1)
//		return 2;
//	else
//		return 3 * hanno_2(N - 1) + 2;
//}
//
//int main()
//{
//	int N;
//	while (cin>>N)
//	{
//		cout << hanno_1(N) << endl;
//		cout << hanno_2(N) << endl;
//	}
//	return 0;
//}