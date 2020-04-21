//#include<iostream>
//using namespace std;
//#include<stack>
///*��׺���ʽת��׺���ʽ�����ú�׺���ʽ��ֵ*/
//int precedence(char op)//������������ȼ�
//{
//	switch (op)
//	{
//	case '*':
//	case '/':
//		return 2; 
//	case '+':
//	case '-':
//		return 1;
//	case '(':
//	case '@':
//	default:
//		return 0;
//	}
//}
//
//void infix_to_suffix(char* s1, char* s2)//��׺���ʽת��׺���ʽ�����������ջ
//{
//	stack<char> op;
//	op.push('@');//ջ�����һ��������ȼ�����
//	int i = 0, j = 0;//iָ��s1,jָ��s2
//	char ch = s1[i];
//	while (ch != '\0')
//	{
//		if (ch == ' ')//�����ո�����
//			ch = s1[++i];
//		else if (ch == '(')//���������ţ������Ž�ջ
//		{
//			op.push(ch);
//			ch = s1[++i];
//		}
//		else if (ch == ')')//���������ţ�������֮ǰ��������γ�ջ
//		{
//			while (op.top() != '(')
//			{
//				s2[j++] = op.top(); op.pop();
//			}
//			op.pop();// ( ��ջ
//			ch = s1[++i];
//		}
//		else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')//����+-*/
//		{
//			char w = op.top();//��ջ����������ȼ��Ƚϣ�ջ�����ȼ�С�������ͳͳ��ջ
//			while (precedence(w) >= precedence(ch))
//			{
//				s2[j++] = w;
//				op.pop();
//				w = op.top();
//			}
//			op.push(ch);// ( ��ջ
//			ch = s1[++i];
//		}
//		else//�������ֻ���������
//		{
//			if ((ch < '0' || ch > '9') && ch != '.')
//			{
//				cerr << "��׺���ʽ����" << endl;
//				exit(1);
//			}
//			while ((ch >= '0' && ch <= '9') || ch == '.')
//			{
//				s2[j++] = ch;
//				ch = s1[++i];
//			}
//			s2[j++] = ' ';//ÿ���������һ���ո������������ֿ�
//		}
//	}
//	ch = op.top(); op.pop();
//	while (ch != '@')//�������������ջ
//	{
//		if (ch == '(')//ջ���滹ʣ (��˵�����Ų�ƥ��
//		{
//			cerr << "���ʽ����" << endl;
//			exit(1);
//		}
//		else
//		{
//			s2[j++] = ch;
//			ch = op.top(); op.pop();
//		}
//	}
//	s2[j++] = '\0';//�ַ�����������\0
//}
//double suffix_evaluation(char* str)//��׺���ʽ��ֵ�����ֽ���ջ
//{
//	stack<double> ans;//��ÿһ���Ľ��
//	double x, y;
//	int i = 0;
//	while (str[i])
//	{
//		if (str[i] == ' ')//�����ո������
//		{
//			i++;
//			continue;
//		}
//		switch (str[i])
//		{//���������
//			case '+':
//			{
//				x = ans.top(); ans.pop();
//				x += ans.top(); ans.pop();
//				i++;
//				break;
//			}
//			case '-':
//			{
//				x = ans.top(); ans.pop();
//				x = ans.top() - x; ans.pop();
//				i++;
//				break;
//			}
//			case '*':
//			{
//				x = ans.top(); ans.pop();
//				x *= ans.top();	ans.pop();
//				i++;
//				break;
//			}
//			case '/':
//			{
//				x = ans.top(); ans.pop();
//				if (x != 0.0)
//				{
//					x = ans.top() / x; 
//					ans.pop();
//				}
//				else
//				{
//					cerr << "����Ϊ0" << endl;
//					exit(1);
//				}
//				i++;
//				break;
//			}
//			default://��������
//				x = 0; 
//				while (str[i] >= '0' && str[i] <= '9')//���ֿ����Ƕ�λ��
//				{
//					x = x * 10 + str[i] - '0';
//					i++;
//				}
//				if (str[i] == '.')//С��
//				{
//					i++;//�������������
//					y = 0;
//					double j = 10.0;
//					while (str[i] >= '0' && str[i] <= '9')
//					{
//						y = y + (str[i] - '0') / j;
//						i++;
//						j *= 10;
//					}
//					x += y;//��������+С������
//				}
//		}
//		ans.push(x);//ÿһ���Ľ������ջ
//	}
////ɨ�����׺���ʽ��ջ��Ӧ�� ʣ��ֻʣ ���ս��
//	if (ans.empty())
//	{
//		cerr << "ջΪ��" << endl;
//		exit(1);
//	}
//	x = ans.top(); ans.pop();
//	if (ans.empty()) //
//		return x;
//	else
//	{
//		cerr << "���ʽ����" << endl;
//		exit(1);
//	}
//
//}
//
//
//int main()
//{
//	/*12+(3*(20/4)-8)*6*/
//	char a[30];
//	char b[50];
//	cin.getline(a, sizeof(a));
//	infix_to_suffix(a, b);
//	cout << b << endl;
//	cout << suffix_evaluation(b) << endl;
//	return 0;
//}