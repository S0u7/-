//#include<iostream>
//#include<string>
//using namespace std;
///*输入一个整数N(0<=N<=100000)，将其转换成八进制数输出
//用字符串解决进制转换问题，解决方法是统一的*/
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
//	string N;
//	while (cin>>N)
//		cout << convert(10, N, 8) << endl;
//
//	return 0;
//}