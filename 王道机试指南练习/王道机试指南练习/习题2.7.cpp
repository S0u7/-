//#include<iostream>
//using namespace std;
//#include<string>
//#include<ctime>
///*
//Day of week
//*/
//
//string Month[12]
//{
//	"January", "February", "March", "April", "May", "June", "July", 
//	"August", "September", "October", "November", "December"
//};
//
//string Week[7]
//{
//	"Sunday","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
//};
//
//istream& operator>>(istream& input, tm& t)
//{
//	int day, year;
//	string month;
//	input >> day >> month >> year;
//
//	t.tm_year = year-1900;
//	for (int i = 0; i < 12; i++)
//	{
//		if (month==Month[i])
//		{
//			t.tm_mon = i;
//		}
//	}
//	t.tm_mday = day;
//	t.tm_hour = 0;
//	t.tm_min = 0;
//	t.tm_sec = 0;
//	t.tm_wday = 1;
//	t.tm_yday = 0;
//
//	return input;
//}
//
//
//int main()
//{
//	tm date;
//	time_t time;
//	while (cin>>date)
//	{
//		time = mktime(&date);
//		cout << Week[date.tm_wday] << endl;
//	}
//
//	return 0;
//}