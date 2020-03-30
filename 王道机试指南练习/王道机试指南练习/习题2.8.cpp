//#include<iostream>
//using namespace std;
//#include<iomanip>
//
///*
//日期类，输出后一天日期。无闰年
//*/
//
//int Month[12] = { 31, 28,  31,  30,  31,  30,  31,  31,  30,  31,  30,  31 };
//
//class date
//{
//private:
//	int year;
//	int month;
//	int	day;
//public:
//	date(){}//无参构造
//	date(int y, int m, int d) :year(y), month(m), day(d){}//参数初始化表
//	friend ostream& operator<<(ostream& output, date& d);//重载<<运算符
//};
//
//
//ostream& operator<<(ostream& output, date& d)
//{
//	if (d.day==Month[d.month-1])//在当月最后一天
//	{
//		if (d.month==12)//当月是十二月，后一天为下一年
//		{
//			output << d.year + 1 << "-" << setw(2) << setfill('0') << 1 
//				<< "-" << setw(2) << setfill('0') << 1 << endl;
//		}
//		else//当月不是十二月，后一天在下个月
//		{
//			output << d.year << "-" << setw(2) << setfill('0') 
//				<< d.month + 1 << "-" << setw(2) << setfill('0') <<1 << endl;
//		}
//	}
//	else//不在当月最后一天，后一天肯定在本月里
//	{
//		output << d.year << "-" << setw(2) << setfill('0')
//			<< d.month << "-" << setw(2) << setfill('0') << d.day+1 << endl;
//	}
//
//	return output;
//}
//
//
//int main()
//{
//	int year, month, day;
//	int m;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> year >> month >> day;
//		date D(year, month, day);
//		cout << D ;
//	}
//
//
//	return 0;
//}