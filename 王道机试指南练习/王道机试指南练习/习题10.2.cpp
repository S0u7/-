//#include<iostream>
////#include<map>//map�������������Ƕ���ʱ��
//#include<queue>//priority_queue�������ֵ����ʱ�䣬�������ʱ��
//using namespace std;
///*���ҵ�kС������1<=n<=1000����ȵ�����һ��*/
//int main()
//{
//	int n, k, x;
//	while (cin>>n)
//	{
//		priority_queue<int, vector<int>, greater<int>> PQ;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> x;
//			PQ.push(x);
//		}
//		cin >> k;
//		x = PQ.top();
//		PQ.pop();
//		for (int i = 0; i < k - 1; i++)
//		{
//			if (PQ.size() > 0)//��ֹû�е�KС����
//			{
//				if (PQ.top() == x)
//					i--;
//				else
//					x = PQ.top();
//				PQ.pop();
//			}
//			else
//				break;
//		}
//		cout << x << endl;
//	}
//	return 0;
//}