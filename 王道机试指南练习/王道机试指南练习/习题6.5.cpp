//#include<iostream>
//using namespace std;
///*给出n个正整数，任取两个数分别作为分子和分母组成最简真分数,求共有几个这样的组合
//最简分数：分子、分母只有公因数 1 的分数
//真分数：分子比分母小*/
///*辗转相除法
//a   b   mod
//3   10  3
//10  3   1
//3   1   0
//1   0   结束
//*/
//int GCD(int a, int b)
//{
//	while (b != 0)//辗转相除法
//	{
//		int t = b;
//		b = a % b;//下一个a是上一个b,下一个b是当前a mod b
//		a = t;
//	}
//	return a;
//}
//int gcd(int a, int b)//递归
//{
//	if (b == 0) 
//		return a;
//	else 
//		return gcd(b, a % b);
//}
//int main()
//{
//	int n,sum;
//	while (cin>>n && n != 0)
//	{
//		sum = 0;
//		int* num = new int[n];
//		for (int i = 0; i < n; i++)
//			cin >> num[i];
//		for (int j = 0; j < n; j++)
//			for (int k = j; k < n; k++)
//				if (GCD(num[j], num[k]) == 1)
//					sum++;
//		cout << sum << endl;
//	}
//	return 0;
//}