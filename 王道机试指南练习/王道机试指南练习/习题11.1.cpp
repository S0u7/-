//#include<iostream>
//#include<string>
//using namespace std;
///*�ҳ�ֱϵ����,0<=n<=26��������ϵ,0<m<50������*/
//int main()
//{
//	int n, m;
//	string input, question;
//	char child[26];
//	while (cin>>n>>m)
//	{
//		for (int i = 'A'; i <= 'Z'; i++)
//			child[i - 'A'] = '@';//��ʼÿ����ĸû�к���
//
//		for (int i = 0; i < n; i++)//�����ϵ
//		{
//			cin >> input;
//			child[input[1] - 'A'] = input[0];
//			child[input[2] - 'A'] = input[0];
//		}
//		for (int i = 0; i < m; i++)//�����ж�
//		{
//			cin >> question;
//			int generation, j;
//			for (j = 0; j <= 1; j++)//�ж�
//			{
//				char x = question[j];
//				generation = 0;
//				while (x != question[1-j])
//				{
//					if (x == '@')
//					{
//						generation = 0;
//						break;
//					}
//					x = child[x - 'A'];
//					generation++;
//				}
//				if (generation != 0)//�Ѿ��ҳ�������ϵ
//					break;
//			}//jֻ�����������j==0ǰ���ǳ���j==1�����ǳ���j==2û��ֱϵ������ϵ
//			if (generation == 1)
//				cout << (j == 0 ? "parent" : "child") << endl;
//			else if (generation >= 2)
//			{
//				for (int i = 0; i < generation-2; i++)
//					cout << "great-";
//				cout << (j == 0 ? "grandparent" : "grandchild") << endl;
//			}
//			else
//				cout << "-" << endl;
//		}
//	}
//	return 0;
//}
///*
//10 10
//EKL
//LPY
//YQR
//RBG
//GJD
//DWT
//TCA
//AXZ
//ZSN
//NIF
//DF
//LX
//SI
//BG
//GJ
//WK
//DJ
//RW
//TS
//QI
//*/