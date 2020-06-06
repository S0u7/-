//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
///*FatMouseTrade，注意：钱不一定会花完，花费可能为0*/
//struct trade
//{
//	double J, F, ratio;
//};
//bool Compare(trade t1, trade t2)
//{
//	if(t1.ratio != t2.ratio)
//		return t1.ratio >= t2.ratio;
//	else 
//		return t1.F < t2.F;
//}
//int main()
//{
//	int M, N;
//	vector<trade> v;
//	while (cin >> M >> N)
//	{
//		if (M == -1 && N == -1)
//			break;
//
//		while (N--)
//		{
//			trade T;
//			cin >> T.J >> T.F;
//			T.ratio = T.J / T.F;
//			v.push_back(T);
//		}
//		sort(v.begin(), v.end(), Compare);
//		double sum = 0;
//		for (int i = 0; i < v.size(); i++) 
//		{
//			if (M >= v[i].F) 
//			{
//				sum += v[i].J;
//				M -= v[i].F;
//			}
//			else
//			{
//				sum += M * v[i].ratio;
//				break;
//			}
//		}
//		/*注意：钱M不是都要花完，所以底下的写法会有问题
//		while (M != 0)
//		{
//			if (M >= v[i].F)
//			{
//				sum += v[i].J;
//				M -= v[i].F;
//				i++;
//			}
//			else
//			{
//				sum += M * v[i].ratio;
//				M = 0;
//			}
//		}*/
//		cout.precision(3);
//		cout <<fixed<< sum << endl;
//		v.clear();
//	}
//	return 0;
//}