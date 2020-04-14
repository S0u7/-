//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
///*≥…º®≈≈–Ú*/
//struct student
//{
//	string name;
//	int score;
//};
//
//bool comp_asc(student s1, student s2)
//{
//	return	s1.score < s2.score;
//}
//bool comp_dec(student s1, student s2)
//{
//	return	s1.score > s2.score;
//}
//
//int main()
//{
//	int n = 0;
//	student stu[1001];
//	bool flag = 0;
//	while (cin>>n)
//	{
//		cin >> flag;
//		for (int i = 0; i < n; i++)
//			cin >> stu[i].name >> stu[i].score;
//		if (flag)
//			stable_sort(stu, stu + n, comp_asc);//Œ»∂®≈≈–Ú
//		
//		else
//			stable_sort(stu, stu + n, comp_dec);
//		for (int j = 0; j < n; j++)
//			cout << stu[j].name << " " << stu[j].score << endl;
//
//	}
//	return 0;
//}