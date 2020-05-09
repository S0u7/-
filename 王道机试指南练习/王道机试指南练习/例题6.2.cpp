//#include<iostream>
//using namespace std;
//#include<stack>
//#include<string>
///*十进制转二进制,最长30位十进制数,用字符串模拟数字*/
//
//int main()
//{
//	string num;
//	stack<unsigned int> s;
//	string result;
//	int i , rem , b = 2;//i指针,rem余数,b基数
//	bool head;//商为0是否在头部标记
//	while (cin >> num)
//	{
//		while (!num.empty() )
//		{
//			head = 1;
//			i = 0;
//			rem = 0;
//			while (i != num.size())//30位大数除法
//			{
//				int temp = 10 * rem + (num[i] - '0');
//				if (temp / b == 0 && head == 1)
//					head = 1;
//				else
//				{
//					result += (temp / b) + '0';
//					head = 0;
//				}
//				rem = temp % b;
//				i++;
//			}
//			s.push(rem);
//			num = result;
//			result.clear();
//		}
//		
//		while (!s.empty())
//		{
//			cout << s.top();
//			s.pop();
//		}
//		cout << endl;
//	}
//	return 0;
//}