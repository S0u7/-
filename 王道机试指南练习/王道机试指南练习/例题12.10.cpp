//#include<iostream>
//using namespace std;
//#define max(a, b) (a > b ? a : b)
///*The triangle*/
//int main()
//{
//	int n;
//	cin >> n;
//	int** triangle = new int* [n];
//	for (int i = 0; i < n; i++)
//	{
//		triangle[i] = new int[i + 1];
//		for (int j = 0; j <= i; j++)
//			cin >> triangle[i][j];
//	}
//	//���ڵ�triangle[i][j]�����(i, j)��������ײ���·��֮�����ֵ���ӵײ�����������
//	for (int i = n - 2; i >= 0; i--)
//		for (int j = 0; j <= i; j++)
//	//״̬ת�Ʒ��̣�ֻ���ضԽ��������»�������ǰ��
//			triangle[i][j] += max(triangle[i + 1][j], triangle[i + 1][j + 1]);
//
//	cout << triangle[0][0] << endl;
//
//	for (int i = 0; i < n; i++)
//		delete[] triangle[i];
//	delete[] triangle;
//
//	return 0;
//}