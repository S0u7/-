//#include<iostream>
//#include<queue>
//using namespace std;
///*��ˮ��
//ע������������Ȩ·��֮����С�������м�ڵ��Ȩֵ�������Ȩ·����*/
//
//int main()
//{
//	int n;
//	while (cin>>n)
//	{	
//		priority_queue<int, vector<int>, greater<int>> PQ;
//		for (int i = 0; i < n; i++)
//		{
//			int in;
//			cin >> in;
//			PQ.push(in);
//		}
//		int ans = 0, a, b;
//		while (PQ.size() > 1)//�ڲ���������pop�����������������1���Է�pop�쳣
//		{
//			a = PQ.top();
//			PQ.pop();
//			b = PQ.top();
//			PQ.pop();
//			ans += a + b;
//			PQ.push(a + b);
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}