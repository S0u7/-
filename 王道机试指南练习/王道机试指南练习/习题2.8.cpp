//#include<iostream>
//using namespace std;
//#include<iomanip>
//
///*
//�����࣬�����һ�����ڡ�������
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
//	date(){}//�޲ι���
//	date(int y, int m, int d) :year(y), month(m), day(d){}//������ʼ����
//	friend ostream& operator<<(ostream& output, date& d);//����<<�����
//};
//
//
//ostream& operator<<(ostream& output, date& d)
//{
//	if (d.day==Month[d.month-1])//�ڵ������һ��
//	{
//		if (d.month==12)//������ʮ���£���һ��Ϊ��һ��
//		{
//			output << d.year + 1 << "-" << setw(2) << setfill('0') << 1 
//				<< "-" << setw(2) << setfill('0') << 1 << endl;
//		}
//		else//���²���ʮ���£���һ�����¸���
//		{
//			output << d.year << "-" << setw(2) << setfill('0') 
//				<< d.month + 1 << "-" << setw(2) << setfill('0') <<1 << endl;
//		}
//	}
//	else//���ڵ������һ�죬��һ��϶��ڱ�����
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