//#include<iostream>
//#include<string>
//using namespace std;
///*�����������������Ͷ���ķǸ�10��������A��B(<=231-1)��
//���A+B��m (1 < m <10)��������*/
//
//string convert(int pre, string num, int cur)
//{
//	int i = 0, rem;
//	string result;
//	while (i < num.size())
//	{
//		rem = 0;
//		for (int j = i; j < num.size(); j++)
//		{
//			int temp = rem * pre + num[j] - '0';
//			num[j] = temp / cur + '0';
//			rem = temp % cur;
//		}
//		result.insert(0, 1, rem + '0');
//		while (num[i] == '0')
//			i++;
//	}
//	return result;
//}
//
//int main()
//{
//	int m;
//	long long A, B;//�������ĺͿ��ܻᳬ��int��Χ
//	while (cin>>m)
//	{
//		cin >> A >> B;
//		string temp = to_string(A + B);
//		cout << convert(10, temp, m) << endl;
//	}
//	return 0;
//}