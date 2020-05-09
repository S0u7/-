//#include<iostream>
//using namespace std;
//#include<stack>
//#include<string>
///*
//二进制逆序数
//1000位 十进制数转二进制数，二进制再转逆序，逆序二进制数再转十进制
//*/
//
//stack<unsigned int> decimal_to_binary(string num)//十进制转二进制
//{
//	stack<unsigned int> s;//容器中存的正序就是得到二进制的逆序
//	string result;
//	int i, rem, b = 2;//i指针,rem余数,b基数
//	bool head;//商为0是否在头部标记
//	while (!num.empty())
//	{
//		head = 1;
//		i = 0;
//		rem = 0;
//		while (i != num.size())//30位大数除法
//		{
//			int temp = 10 * rem + (num[i] - '0');
//			if (temp / b == 0 && head == 1)
//				head = 1;
//			else
//			{
//				result += (temp / b) + '0';
//				head = 0;
//			}
//			rem = temp % b;
//			i++;
//		}
//		s.push(rem);
//		num = result;
//		result.clear();
//	}
//	return s;
//}
//
//string str_mul_2(string a)//大数乘2
//{
//	int ca = 0;
//	string result;
//	for(int i = a.size()-1;i >= 0;i--)
//	{
//		int temp = ca + (a[i]-'0') * 2;
//		result.insert(0, 1,temp % 10 + '0');
//		ca = temp / 10;
//	}
//	if (ca != 0)
//		result.insert(0, 1, ca+'0');
//	return result;
//}
//
//string str_add(string a, string b)//两个大数相加
//{
//	int ca = 0;
//	if (a.size() > b.size())
//		b.insert(0, a.size() - b.size(), '0');
//	else
//		a.insert(0, b.size() - a.size(), '0');
//
//	string result;
//	for (int i =a.size()-1 ; i >= 0; i--)
//	{
//		int temp = ca + (a[i] - '0') + (b[i] - '0');
//		result.insert(0, 1, temp % 10 + '0');
//		ca = temp / 10;
//	}
//	if (ca != 0)
//		result.insert(0, 1, ca+'0');
//	return result;
//}
//
//string binary_to_decimal(string num)//逆序二进制转十进制
//{
//	stack<unsigned int> st = decimal_to_binary(num);
//	string result = "0";
//	string temp = "1";
//	while (!st.empty())
//	{
//		if (st.top() == 1)
//			result = str_add(temp, result);
//		st.pop();
//		temp=str_mul_2(temp);
//	}
//	return result;
//}
//
//int main()
//{
//	string num;
//	while(cin>>num)
//	cout << binary_to_decimal(num) << endl;
//	return 0;
//}