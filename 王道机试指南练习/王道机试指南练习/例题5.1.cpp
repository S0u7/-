//#include<iostream>
//using namespace std;
//#include<vector>
///*������ӯ��,ע�����ʱ��ǰ���и��ո�*/
//int main()
//{
//	vector<int> E, G;
//	for (int i = 2; i <= 60; i++)
//	{
//		int sum = 0;
//		for (int j = 1; j < i; j++)//����
//			if (i % j == 0)
//				sum += j;
//		
//		if (sum == i)
//			E.push_back(i);
//		else if(sum > i)
//			G.push_back(i);
//	}
//	//���
//	vector<int>::iterator it;
//	cout << "E:";
//	for ( it = E.begin(); it != E.end(); it++)
//		//if (*it == E.back())
//		//	cout << *it << endl;
//		//else
//			cout << " "<< *it;
//	cout << endl;
//	cout << "G:";
//	for (it = G.begin(); it != G.end(); it++)
//		//if (*it == G.back())
//		//	cout << *it << endl;
//		//else
//			cout << " "<< *it ;
//	return 0;
//}