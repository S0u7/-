//#include<iostream>
//using namespace std;
//#include<vector>
///*����һ������n(2<=n<=10000)��Ҫ��������д�1���������֮��(������1���������)
//  ��λΪ1�����������û�������-1������֮���ÿո���������һ����������û�пո�*/
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v;
//		if (n <= 11)
//		{
//			cout << -1 << endl;
//			continue;
//		}
//		bool* mark = new bool[n];//ɸ���������
//		for (int k = 0; k < n; k++)
//			mark[k] = 1;//Ĭ�϶�������
//		mark[0] = false;
//		mark[1] = false;
//		
//		for (int i = 2; i < n; i++)
//		{
//			if (mark[i] == 0)//������ ����
//				continue;
//			if(i % 10 == 1)
//				v.push_back(i);//��λΪ1������
//			for (int j = i * i; j < n; j += i)//�����ı���Ϊ������
//				mark[j] = false;
//		}
//		for (int t = 0;t < v.size(); t++)
//			if (t != v.size())
//				cout << v[t] << " ";
//			else
//				cout << v[t];
//		cout << endl;
//
//		delete[] mark;
//		v.clear();
//	}
//	return 0;
//}