//#include<iostream>
//using namespace std;
//#include<vector>
/*打印极值点下标*/
//int main()
//{
//	int n;
//	vector<int> v;
//	while (cin>>n)
//	{
//		for (int i = 0; i < n; i++)//输入
//		{
//			int temp;
//			cin >> temp;
//			v.push_back(temp);
//		}
//		if (v[0] != v[1])
//			cout << 0 << " ";
//		for (int j = 1; j < n-1; j++)
//			if ((v[j]<v[j-1] && v[j]<v[j+1])||(v[j] > v[j - 1] && v[j] > v[j + 1]))
//				cout << j << " ";
//		if (v[n - 1] != v[n - 2])
//			cout << n - 1;
//		cout << endl;
//		v.clear();
//	}
//	return 0;
//}