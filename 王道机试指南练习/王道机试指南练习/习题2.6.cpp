//#include<iostream>
//using namespace std;
//#include<string>
//#include<ctime>
//#include<cmath>
///*
//有两个日期，求两个日期之间的天数，如果两个日期是连续的我们规定他们之间的天数为两天
//*/
//
//void input_tm(string &str, tm &t)
//{
//	int year = stoi(str.substr(0, 4));
//	int month = stoi(str.substr(4, 2));
//	int day = stoi(str.substr(6, 2));
//
//	t.tm_year = year-1900;
//	t.tm_mon = month-1;
//	t.tm_mday = day;
//	t.tm_hour = 0;
//	t.tm_min = 0;
//	t.tm_sec = 0;
//}
//
//int main()
//{	
//	string str1, str2;
//	tm date1, date2;
//	time_t t1, t2;
//	double dif;
//	int day;
//
//	while (cin>>str1>>str2)
//	{
//		input_tm(str1, date1);
//		input_tm(str2, date2);
//
//		t1 = mktime(&date1);
//		t2 = mktime(&date2);
//		//cout << date1.tm_wday << endl;
//
//		dif = difftime(t1, t2);
//		day = abs(dif / 86400.0);
//		cout << day+1 << endl;
//
//	}
//	return 0;
//}