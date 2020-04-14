//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<map>
///*奥运排序问题*/
//struct country
//{
//	/*0：人口数 1：金牌 2：奖牌数 3：金牌人口比例 4：奖牌人口比例*/
//	double property[5];
//	int order;//唯一标识一个国家
//	//存放不同排序方法的排序结果(二元组)
//	multimap<int, int> mark;
//	bool operator==(const int& c)
//	{
//		return order == c;
//	}
//};
////四种比较函数
//bool comp_gold(country con1, country con2)
//{
//	return con1.property[1] > con2.property[1];
//}
//bool comp_medal(country con1, country con2)
//{
//	return con1.property[2] > con2.property[2];
//}
//bool comp_ratio_g(country con1, country con2)
//{
//	return con1.property[3] > con2.property[3];
//}
//bool comp_ratio(country con1, country con2)
//{
//	return con1.property[4] > con2.property[4];
//}
//
//int main()
//{
//	int N, M;
//	vector<country> con;
//	vector<int> num;
//	//函数指针，指向不同函数名进行调用
//	typedef bool (*funcName)(country, country);
//	map<int, funcName> m;
//	m[1] = comp_gold;
//	m[2] = comp_medal;
//	m[3] = comp_ratio_g;
//	m[4] = comp_ratio;
//
//	while (cin >> N >> M)
//	{
//		for (int i = 0; i < N; i++)//输入国家数据
//		{
//			country temp;//临时对象
//			cin >> temp.property[1] >> temp.property[2] >> temp.property[0];
//			temp.property[3] = temp.property[1] / temp.property[0];
//			temp.property[4] = temp.property[2] / temp.property[0];
//			temp.order = i;
//			con.push_back(temp);
//		}
//		while (M--)//输入待排序国家序号
//		{
//			int index;
//			cin >> index;
//			num.push_back(index);
//		}
//		//容器迭代器
//		vector<int>::iterator it;
//		vector<country>::iterator itx;
//		//四种排序方法
//		for (int k = 1; k <= 4; k++)
//		{
//			sort(con.begin(), con.end(), *m[k]);//所有国家排序
//			for (it = num.begin(); it != num.end(); it++)//待排序国家
//			{	//找到原来待排序国家现在的位置
//				int pos = find(con.begin(), con.end(), *it) - con.begin();
//				for (itx = con.begin(); itx != con.end(); itx++)
//				{	//根据排序方法，找到排名
//					if ((*itx).property[k] == con[pos].property[k])
//					{
//						con[pos].mark.insert(make_pair(itx - con.begin(), k));
//						break;
//					}
//				}
//			}
//		}
//		//输出结果
//		for (it = num.begin(); it != num.end(); it++)
//		{
//			for (itx = con.begin(); itx != con.end(); itx++)
//			{
//				if ((*itx).order == (*it))
//				{
//					cout << (((*itx).mark.begin())->first) + 1 << ":"
//						<< ((*itx).mark.begin())->second << endl;
//					break;
//				}
//			}
//
//		}
//		cout << endl;
//		num.clear();
//		con.clear();
//	}
//	return 0;
//}