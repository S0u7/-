//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<map>
///*������������*/
//struct country
//{
//	/*0���˿��� 1������ 2�������� 3�������˿ڱ��� 4�������˿ڱ���*/
//	double property[5];
//	int order;//Ψһ��ʶһ������
//	//��Ų�ͬ���򷽷���������(��Ԫ��)
//	multimap<int, int> mark;
//	bool operator==(const int& c)
//	{
//		return order == c;
//	}
//};
////���ֱȽϺ���
//bool comp_gold(country con1, country con2)
//{
//	return con1.property[1] > con2.property[1];
//}
//bool comp_medal(country con1, country con2)
//{
//	return con1.property[2] > con2.property[2];
//}
//bool comp_ratio_g(country con1, country con2)
//{
//	return con1.property[3] > con2.property[3];
//}
//bool comp_ratio(country con1, country con2)
//{
//	return con1.property[4] > con2.property[4];
//}
//
//int main()
//{
//	int N, M;
//	vector<country> con;
//	vector<int> num;
//	//����ָ�룬ָ��ͬ���������е���
//	typedef bool (*funcName)(country, country);
//	map<int, funcName> m;
//	m[1] = comp_gold;
//	m[2] = comp_medal;
//	m[3] = comp_ratio_g;
//	m[4] = comp_ratio;
//
//	while (cin >> N >> M)
//	{
//		for (int i = 0; i < N; i++)//�����������
//		{
//			country temp;//��ʱ����
//			cin >> temp.property[1] >> temp.property[2] >> temp.property[0];
//			temp.property[3] = temp.property[1] / temp.property[0];
//			temp.property[4] = temp.property[2] / temp.property[0];
//			temp.order = i;
//			con.push_back(temp);
//		}
//		while (M--)//���������������
//		{
//			int index;
//			cin >> index;
//			num.push_back(index);
//		}
//		//����������
//		vector<int>::iterator it;
//		vector<country>::iterator itx;
//		//�������򷽷�
//		for (int k = 1; k <= 4; k++)
//		{
//			sort(con.begin(), con.end(), *m[k]);//���й�������
//			for (it = num.begin(); it != num.end(); it++)//���������
//			{	//�ҵ�ԭ��������������ڵ�λ��
//				int pos = find(con.begin(), con.end(), *it) - con.begin();
//				for (itx = con.begin(); itx != con.end(); itx++)
//				{	//�������򷽷����ҵ�����
//					if ((*itx).property[k] == con[pos].property[k])
//					{
//						con[pos].mark.insert(make_pair(itx - con.begin(), k));
//						break;
//					}
//				}
//			}
//		}
//		//������
//		for (it = num.begin(); it != num.end(); it++)
//		{
//			for (itx = con.begin(); itx != con.end(); itx++)
//			{
//				if ((*itx).order == (*it))
//				{
//					cout << (((*itx).mark.begin())->first) + 1 << ":"
//						<< ((*itx).mark.begin())->second << endl;
//					break;
//				}
//			}
//
//		}
//		cout << endl;
//		num.clear();
//		con.clear();
//	}
//	return 0;
//}