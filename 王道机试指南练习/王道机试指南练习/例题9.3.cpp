//#include<iostream>
//using namespace std;
//#include<string>
//#include<cstring>
///*A Knight's Journey,1 <= p * q <= 26,���ܷ��������̵�ÿ������
//DFS*/
//const int maxn = 30;
//bool visit[maxn][maxn];
//int direction[8][2] =//8������
//{
//	{-1,-2},{1,-2},{-2,-1},{2,-1},{-2,1},{2,1},{-1,2},{1,2}
//};
//
//bool DFS(int &p, int &q, int x, int y, int step, string ans)
//{
//	if (step == p * q)
//	{
//		cout << ans << endl << endl;
//		return true;
//	}
//	else
//	{
//		for (int i = 0; i < 8; i++)
//		{
//			int x_n = x + direction[i][0];
//			int y_n = y + direction[i][1];
//			char col = y_n + 'A';
//			char row = x_n + '1';
//			if (x_n < 0 || x_n >= p || y_n < 0 || y_n >= q || visit[x_n][y_n])
//				continue;//�߹��˾Ͳ�����
//			visit[x_n][y_n] = true;
//			if (DFS(p, q, x_n, y_n, step + 1, ans + col + row) == true)
//				return true;
//			visit[x_n][y_n] = false;//�������û����,�ݹ���������ϸ�λ��,��������false
//		}
//	}
//	return false;
//}
//int main()
//{
//	int n, p, q;
//	int caseNumber = 0;
//	cin >> n;
//	while (n--)
//	{
//		cin >> p >> q;
//		memset(visit, false, sizeof(visit));
//		cout << "Scenario #" << ++caseNumber << ":" << endl;
//		visit[0][0] = true;
//		if (DFS(p, q, 0, 0, 1, "A1") == false)
//			cout << "impossible" << endl << endl;
//	}
//	return 0;
//}