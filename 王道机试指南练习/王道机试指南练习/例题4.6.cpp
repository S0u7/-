//#include<iostream>
//using namespace std;
///*���ִ�(����)ƥ��*/
//int* getNext_pro(int* pattern,int M)//next����Ľ�
//{/*pattern:@ a b  a b  @ = -1:ͨ��
//	  next: -1 0 -1 0*/
//	int* next_pro = new int[M];
//	int j = 0;
//	next_pro[0] = -1;
//	int t = next_pro[j];//tλ��jǰһ��λ(next)
//	while (j < M )
//	{
//		if (t == -1 || pattern[t] == pattern[j])
//		{
//			j++;
//			t++;
//			if (pattern[j] != pattern[t])//ƥ�䣬���¸��ַ����ϸ��ַ���ͬ�����ܽ��ʧ��
//				next_pro[j] = t;//ֱ�����ϸ�next������+1
//			else//ƥ�䣬���¸��ַ����ϸ��ַ���ͬʱ�����޷����ʧ��
//				next_pro[j] = next_pro[t];
//		}
//		else
//			t = next_pro[t];
//	}
//	return next_pro;
//}
//int KMP_Search_once(int* text, int* pattern,int N,int M)
//{
//	int* next_pro = getNext_pro(pattern,M);//ֻ��һ��ƥ��λ��ʱ�øĽ�next����Ч
//	int i = 0;//�ı���ָ��
//	int j = 0;//ģʽ��ָ��
//	while (i < N && j < M )
//	{//ע��string.size���ص����޷��������������j = -1ʱ��ͻ
//		if (j == -1 || text[i] == pattern[j])
//		{
//			i++;
//			j++;
//		}
//		else//ʧ��
//			j = next_pro[j];
//	}
//	if (j == M )
//		return i - M +1;
//	else
//		return -1;
//}
//
//int main()
//{
//	int T, N, M;
//	int* text, *pat;
//	cin >> T;
//	while(T--)
//	{
//		cin >> N >> M;
//		text = new int[N];
//		pat = new int[M];
//		for (int i = 0; i < N; i++)
//			cin >> text[i];
//		for (int j = 0; j < M; j++)
//			cin >> pat[j];
//		int pos = KMP_Search_once(text, pat,N,M);
//		cout << pos << endl;
//	}
//	return 0;
//}