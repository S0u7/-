//#include<iostream>
//using namespace std;
//#include<string>
//#include<vector>
//#include<stack>
//#include<iomanip>
///*�򵥼�����������һ��ֻ���� +, -, *, / �� �Ǹ����� ������ʽ������ñ��ʽ��ֵ*/
//
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
//	case '@':
//	default:
//		return 0;
//	}
//}
//
//void cal(char temp,stack<double> &num)
//{
//	double x = 0;
//	switch (temp)
//	{
//	case '+':
//	{
//		x = num.top(); num.pop();
//		x += num.top(); num.pop();
//		num.push(x);
//		break;
//	}
//	case '-':
//	{
//		x = num.top(); num.pop();
//		x = num.top() - x; num.pop();
//		num.push(x);
//		break;
//	}
//	case '*':
//	{
//		x = num.top(); num.pop();
//		x *= num.top(); num.pop();
//		num.push(x);
//		break;
//	}
//	case '/':
//	{
//		x = num.top(); num.pop();
//		if (x == 0)
//		{
//			cout << "����Ϊ��" << endl;
//			exit(1);
//		}
//		else
//		{
//			x = num.top() / x; num.pop();
//			num.push(x);
//		}
//		break;
//	}
//	default:
//		break;
//	}
//}
//
//double calculateValue(string str)
//{
//	stack<char> op;
//	stack<double> num;
//	op.push('@');
//	char ch;
//	int i = 0;
//	while (i!=str.size())
//	{
//		ch = str[i];
//		if (ch == ' ')
//		{
//			i++;
//			continue;
//		}
//		else if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
//		{
//			char temp = op.top();
//			while (precedence(ch) <= precedence(temp))
//			{
//				cal(temp, num);
//				op.pop();
//				temp = op.top();
//			}
//			op.push(ch);
//			i++;
//		}
//		else//����
//		{
//			int y = 0;
//			while (str[i] >= '0' && str[i] <= '9')
//			{
//				y = y * 10 + str[i] - '0';
//				i++;
//			}
//			num.push(y);
//		}
//	}
//	while (op.top() != '@')
//	{
//		cal(op.top(), num);
//		op.pop();
//	}
//	return num.top();
//}
//int main()
//{
//	vector<string> expression;
//	string str;
//	while (getline(cin,str))
//	{
//		if (str == "0")
//			break;
//		expression.push_back(str);
//	}
//	for (int i = 0; i < expression.size(); i++)
//		cout << setiosflags(ios::fixed)<<setprecision(2)
//			<<calculateValue(expression[i]) << endl;
//	return 0;
//}