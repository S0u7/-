//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
///*����ѧ����Ϣ*/
//int main()
//{
//	int n, m;
//	map<string, string> student;
//	string num, info;
//	cin >> n;
//	getchar();//������getline������cin����Ҫ�ѻس��Ե�
//	for (int i = 0; i < n; i++)
//	{
//		getline(cin, info);
//		int pos = info.find(" ");
//		num = info.substr(0, pos);
//		student[num] = info;
//	}
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> num;
//		if (student[num] == "")
//			cout << "No Answer!" << endl;
//		else
//			cout << student[num] << endl;
//	}
//	return 0;
//}