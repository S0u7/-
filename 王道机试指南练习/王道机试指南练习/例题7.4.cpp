//#include<iostream>
//#include<map>
//using namespace std;
///*������ٲ�AC:���ݽ�Ŀ��ʼʱ�䣬����ʱ�䣬�����������ۿ���Ŀ��*/
//int main()
//{
//	int n;
//	while (cin>>n && n != 0)
//	{
//		map<int, int> m;
//		for (int i = 0; i < n; i++)
//		{
//			int ts, te;
//			cin >> ts >> te;
//			m[te] = ts;//key:����ʱ�� value:��ʼʱ��,��Ϊmap��key����
//		}
//		int high = 0, count = 0;
//		//ѡ�����ʱ������Ľ�Ŀ
//		for (map<int,int>::iterator it = m.begin(); it != m.end(); it++)
//		{
//			if (it->second >= high)//�俪ʼʱ�䲻����ǰ��Ľ�Ŀʱ�����
//			{
//				count++;
//				high = it->first;
//			}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}