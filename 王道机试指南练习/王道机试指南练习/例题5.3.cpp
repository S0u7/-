//#include<iostream>
//using namespace std;
//#include<queue>
//struct pet
//{
//	int	number;//������
//	int order;//�������
//};
//int main()
//{
//	int n;
//	queue<pet> dog, cat;
//	queue<int> adop;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int first, second;
//		cin >> first >> second;
//		pet temp;
//		switch (first)
//		{
//			default:
//				break;
//			case 1://�ж������
//			{
//				temp.number = second;
//				temp.order = i;
//				if (second > 0)
//					dog.push(temp);
//				else
//					cat.push(temp);
//				break;
//			}
//			case 2://��������
//			{
//				switch (second)
//				{
//					default:
//						break;
//					case 0://è�����
//					{
//						if (!dog.empty() 
//							&& dog.front().order < cat.front().order)
//						{
//							adop.push(dog.front().number);
//							dog.pop();
//						}
//						else if ( !cat.empty()
//							  && dog.front().order > cat.front().order)
//						{
//							adop.push(cat.front().number);
//							cat.pop();
//						}
//						break;
//					}
//					case 1://������
//					{
//						if (!dog.empty())
//						{
//							adop.push(dog.front().number);
//							dog.pop();
//						}
//						break;
//					}
//					case -1://����è
//					{
//						if (!cat.empty())
//						{
//							adop.push(cat.front().number);
//							cat.pop();
//						}
//						break;
//					}
//				}
//				break;
//			}
//		}
//	}
//	while (!adop.empty())
//	{
//		cout << adop.front() << " ";
//		adop.pop();
//	}
//	cout << endl;
//	return 0;
//}
///*
//6
//1 1
//1 -1
//2 0
//1 2
//2 -1
//2 1
//*/