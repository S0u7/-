//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<queue>
//#include<unordered_map>
//using namespace std;
///*玛雅人密码：给一个长度为N的字符串，（2=<N<=13）该字符串中只含有0,1,2三种数字，问这个字符串要移位几次才能解开密码，每次只能移动相邻的两个数字
//算法:N叉树层次遍历(BFS)*/
//int main()
//{
//	int N;
//	string str;
//	queue<string> Q;//BFS队列
//	unordered_map<string, bool> mark;//访问过标记，用哈希查询比较快
//	while (cin>>N>>str)
//	{
//		Q.push(str);
//		mark[str] = true;
//		//l_c:当前层最后一个 l_n:下一层最后一个 current:当前字符串
//		string l_c = str, l_n = "", current = str;
//		int count = 0;//次数
//		//只有当缺0||1||2时才无法解密
//		if (str.find('0') == str.npos 
//			|| str.find('1') == str.npos 
//			|| str.find('2') == str.npos)
//			count = -1;
//		else
//		{
//			while (str.find("2012") == str.npos)
//			{
//				for (unsigned int i = 0; i < N - 1; i++)
//				{
//					str = current;
//					swap(str[i], str[i + 1]);//往右交换相邻字符
//					if (mark[str] == false)//没访问过的入队
//					{
//						Q.push(str);
//						mark[str] = true;
//						l_n = str;
//					}
//					else
//						continue;
//				}
//				if (current == l_c)//到达当前层最后一个，就要加一层
//				{
//					l_c = l_n;
//					count++;
//				}
//				Q.pop();
//				str = Q.front();
//				current = str;
//			}		
//		}
//		cout << count << endl;
//		//多组输入善后
//		while (!Q.empty())
//				Q.pop();
//			mark.clear();
//	}
//	return 0;
//}