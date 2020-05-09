//#include<iostream>
//#include<string>
//using namespace std;
///*输入两个不超过整型定义的非负10进制整数A和B(<=231-1)，
//输出A+B的m (1 < m <10)进制数。*/
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
//	long long A, B;//两个数的和可能会超过int范围
//	while (cin>>m)
//	{
//		cin >> A >> B;
//		string temp = to_string(A + B);
//		cout << convert(10, temp, m) << endl;
//	}
//	return 0;
//}