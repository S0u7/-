//#include<iostream>
//using namespace std;
//#include<queue>
//struct pet
//{
//	int	number;//动物编号
//	int order;//进入次序
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
//			case 1://有动物进入
//			{
//				temp.number = second;
//				temp.order = i;
//				if (second > 0)
//					dog.push(temp);
//				else
//					cat.push(temp);
//				break;
//			}
//			case 2://有人收养
//			{
//				switch (second)
//				{
//					default:
//						break;
//					case 0://猫狗随便
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
//					case 1://收养狗
//					{
//						if (!dog.empty())
//						{
//							adop.push(dog.front().number);
//							dog.pop();
//						}
//						break;
//					}
//					case -1://收养猫
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