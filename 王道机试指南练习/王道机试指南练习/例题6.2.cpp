//#include<iostream>
//using namespace std;
//#include<stack>
//#include<string>
///*ʮ����ת������,�30λʮ������,���ַ���ģ������*/
//
//int main()
//{
//	string num;
//	stack<unsigned int> s;
//	string result;
//	int i , rem , b = 2;//iָ��,rem����,b����
//	bool head;//��Ϊ0�Ƿ���ͷ�����
//	while (cin >> num)
//	{
//		while (!num.empty() )
//		{
//			head = 1;
//			i = 0;
//			rem = 0;
//			while (i != num.size())//30λ��������
//			{
//				int temp = 10 * rem + (num[i] - '0');
//				if (temp / b == 0 && head == 1)
//					head = 1;
//				else
//				{
//					result += (temp / b) + '0';
//					head = 0;
//				}
//				rem = temp % b;
//				i++;
//			}
//			s.push(rem);
//			num = result;
//			result.clear();
//		}
//		
//		while (!s.empty())
//		{
//			cout << s.top();
//			s.pop();
//		}
//		cout << endl;
//	}
//	return 0;
//}