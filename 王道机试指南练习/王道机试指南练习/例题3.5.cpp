//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
///*≤È’“*/
//int main()
//{
//	int n, m;
//	vector<int> v, f;
//	while (cin>>n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			int temp;
//			cin >> temp;
//			v.push_back(temp);
//		}
//		cin >> m;
//		for (int i = 0; i < m; i++)
//		{
//			int temp;
//			cin >> temp;
//			f.push_back(temp);
//		}
//		vector<int>::iterator pos, it;
//		for (it=f.begin();it!=f.end();it++)
//		{
//			pos= find(v.begin(), v.end(), (*it));
//			if (pos!=v.end()) 
//				cout << "YES"<< endl;
//			else
//				cout <<"NO" <<endl;
//		}
//	}
//	return 0;
//}