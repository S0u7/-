//#include<iostream>
//using namespace std;
//#include<string>
///*2���ݴη���137=2(2(2)+2 +2(0))+2(2+2(0))+2(0),n<=20000
//������+�ݹ�*/
//string trans(int n)
//{
//	if (n == 0 || n == 2)
//		return to_string(n);
//	else if (n == 1)
//		return "2";
//	else
//	{
//		int x = 0;//��¼ģ2�Ĵ���
//		string ans = "";
//		while (n != 0)
//		{
//			if (n % 2 == 1)
//			{	
//				if (x != 1)
//					ans.insert(0, ")");
//
//				ans.insert(0, trans(x));
//				
//				if (x != 1)
//					ans.insert(0, "2(");
//				if (n != 1)
//					ans.insert(0, "+");
//			}
//			x++;
//			n /= 2;
//		}
//		return ans;
//	}
//}
//int main()
//{
//	int n;
//	while (cin>>n)
//	{
//		cout << trans(n) << endl;
//	}
//	return 0;
//}