//#include<iostream>
//using namespace std;
///*
//old bill
//*/
//
//int main()
//{
//	int n, x, y, z;
//	cin >> n;
//	cin >> x >> y >> z;
//	int a = x * 1000 + y * 100 + z * 10;
//	bool flag = 0;
//	for (int i = a+90000; i >=a+10000 ; i-=10000)
//	{
//		for (int j = i+9; j >=i; j--)
//		{
//			if (j%n == 0)
//			{
//				cout << (i - a) / 10000 << " " << j%10 << " " << j / n<<endl;
//				flag = 1;
//				break;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//	if (!flag)
//	{
//		cout << 0 << endl;
//	}
//	return 0;
//}