//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<queue>
//#include<unordered_map>
//using namespace std;
///*���������룺��һ������ΪN���ַ�������2=<N<=13�����ַ�����ֻ����0,1,2�������֣�������ַ���Ҫ��λ���β��ܽ⿪���룬ÿ��ֻ���ƶ����ڵ���������
//�㷨:N������α���(BFS)*/
//int main()
//{
//	int N;
//	string str;
//	queue<string> Q;//BFS����
//	unordered_map<string, bool> mark;//���ʹ���ǣ��ù�ϣ��ѯ�ȽϿ�
//	while (cin>>N>>str)
//	{
//		Q.push(str);
//		mark[str] = true;
//		//l_c:��ǰ�����һ�� l_n:��һ�����һ�� current:��ǰ�ַ���
//		string l_c = str, l_n = "", current = str;
//		int count = 0;//����
//		//ֻ�е�ȱ0||1||2ʱ���޷�����
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
//					swap(str[i], str[i + 1]);//���ҽ��������ַ�
//					if (mark[str] == false)//û���ʹ������
//					{
//						Q.push(str);
//						mark[str] = true;
//						l_n = str;
//					}
//					else
//						continue;
//				}
//				if (current == l_c)//���ﵱǰ�����һ������Ҫ��һ��
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
//		//���������ƺ�
//		while (!Q.empty())
//				Q.pop();
//			mark.clear();
//	}
//	return 0;
//}