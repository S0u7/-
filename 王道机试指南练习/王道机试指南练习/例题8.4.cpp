//#include<iostream>
//#include<algorithm>
//using namespace std;
///*���������(��ȫ)��ĳ���ڵ����������Ͻڵ����,������1��ʼ
//�㷨��f(m)=f(2m)+f(2m+1)+1 �ݹ����:f(m>n)=0,1 <= m <= n <= 1000000000
//*/
//
//int count_node(int m, int n)//���ƣ��洢����̫�࣬���׿ռ䳬�ޣ�
//{
//	int* ans = new int[n + 1];
//	for (int i = n; i >= 1; i--)
//	{
//		if (2 * i > n && 2 * i + 1 > n)
//			ans[i] = 1;
//		else if(2 * i <= n && 2 * i + 1 > n)
//			ans[i] = ans[2 * i]  + 1;
//		else if (2 * i > n && 2 * i + 1 <= n)
//			ans[i] = ans[2 * i + 1] + 1;
//		else
//			ans[i] = ans[2 * i] + ans[2 * i + 1] + 1;
//	}
//	return ans[m];
//}
//int count_node_2(int m, int n)//���Σ��ݹ飬�������ֻ���ǲ��ַ�֧
//{
//	if (m > n)
//		return 0;
//	else
//		return count_node_2(2 * m, n) + count_node_2(2 * m + 1, n) + 1;
//}
//int main()
//{
//	int m, n;
//	while (cin>>m>>n)
//	{
//		if (m == 0 && n == 0)
//			break;
//		//cout << count_node(m, n) << endl;
//		cout << count_node_2(m, n) << endl;
//	}
//	return 0;
//}