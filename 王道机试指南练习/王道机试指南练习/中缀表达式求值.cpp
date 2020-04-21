//#include<iostream>
//using namespace std;
//#include<stack>
///*中缀表达式转后缀表达式，再用后缀表达式求值*/
//int precedence(char op)//计算运算符优先级
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
//void infix_to_suffix(char* s1, char* s2)//中缀表达式转后缀表达式，运算符进出栈
//{
//	stack<char> op;
//	op.push('@');//栈底添加一个最低优先级符号
//	int i = 0, j = 0;//i指向s1,j指向s2
//	char ch = s1[i];
//	while (ch != '\0')
//	{
//		if (ch == ' ')//遇到空格，跳过
//			ch = s1[++i];
//		else if (ch == '(')//遇到左括号，左括号进栈
//		{
//			op.push(ch);
//			ch = s1[++i];
//		}
//		else if (ch == ')')//遇到右括号，左括号之前运算符依次出栈
//		{
//			while (op.top() != '(')
//			{
//				s2[j++] = op.top(); op.pop();
//			}
//			op.pop();// ( 出栈
//			ch = s1[++i];
//		}
//		else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')//遇到+-*/
//		{
//			char w = op.top();//与栈顶运算符优先级比较，栈内优先级小的运算符统统出栈
//			while (precedence(w) >= precedence(ch))
//			{
//				s2[j++] = w;
//				op.pop();
//				w = op.top();
//			}
//			op.push(ch);// ( 出栈
//			ch = s1[++i];
//		}
//		else//遇到数字或其他符号
//		{
//			if ((ch < '0' || ch > '9') && ch != '.')
//			{
//				cerr << "中缀表达式错误" << endl;
//				exit(1);
//			}
//			while ((ch >= '0' && ch <= '9') || ch == '.')
//			{
//				s2[j++] = ch;
//				ch = s1[++i];
//			}
//			s2[j++] = ' ';//每个数后面加一个空格，与后面的数区分开
//		}
//	}
//	ch = op.top(); op.pop();
//	while (ch != '@')//将其余运算符出栈
//	{
//		if (ch == '(')//栈里面还剩 (，说明括号不匹配
//		{
//			cerr << "表达式错误" << endl;
//			exit(1);
//		}
//		else
//		{
//			s2[j++] = ch;
//			ch = op.top(); op.pop();
//		}
//	}
//	s2[j++] = '\0';//字符数组最后添加\0
//}
//double suffix_evaluation(char* str)//后缀表达式求值，数字进出栈
//{
//	stack<double> ans;//存每一步的结果
//	double x, y;
//	int i = 0;
//	while (str[i])
//	{
//		if (str[i] == ' ')//遇到空格就跳过
//		{
//			i++;
//			continue;
//		}
//		switch (str[i])
//		{//遇到运算符
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
//					cerr << "除数为0" << endl;
//					exit(1);
//				}
//				i++;
//				break;
//			}
//			default://遇到数字
//				x = 0; 
//				while (str[i] >= '0' && str[i] <= '9')//数字可能是多位数
//				{
//					x = x * 10 + str[i] - '0';
//					i++;
//				}
//				if (str[i] == '.')//小数
//				{
//					i++;//跳到后面的数字
//					y = 0;
//					double j = 10.0;
//					while (str[i] >= '0' && str[i] <= '9')
//					{
//						y = y + (str[i] - '0') / j;
//						i++;
//						j *= 10;
//					}
//					x += y;//整数部分+小数部分
//				}
//		}
//		ans.push(x);//每一步的结果都进栈
//	}
////扫描完后缀表达式，栈中应该 剩且只剩 最终结果
//	if (ans.empty())
//	{
//		cerr << "栈为空" << endl;
//		exit(1);
//	}
//	x = ans.top(); ans.pop();
//	if (ans.empty()) //
//		return x;
//	else
//	{
//		cerr << "表达式错误" << endl;
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