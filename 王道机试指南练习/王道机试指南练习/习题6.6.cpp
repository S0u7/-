//#include<iostream>
//using namespace std;
//#include<vector>
///*�����K������k<=10000*/
//int main()
//{
//	int k;
//	while (cin >> k)
//	{
//		vector<int> v;
//		int scope = k * 11;
//		bool* mark = new bool[scope];//ɸ���������
//		for (int i = 0; i < scope; i++)
//			mark[i] = 1;//Ĭ�϶�������
//		mark[0] = false;
//		mark[1] = false;
//
//		for (int i = 2; i < scope; i++)
//		{
//			if (mark[i] == 0)//������ ����
//				continue;
//				v.push_back(i);
//			for (int j = 2 * i; j < scope; j += i)//�����ı���Ϊ������
//				mark[j] = false;
//		}
//		cout << v[k - 1] << endl;
//		delete[] mark;
//		v.clear();
//	}
//	return 0;
//}