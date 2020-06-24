//#include<iostream>
//#include<string>
//#include<queue>
//#include<cstdio>
//using namespace std;
///*复数集合
// Pop：读出集合中复数模值最大的那个复数，如集合为空输出empty，
// 不为空就输出最大的那个复数并且从集合中删除那个复数，再输出集合的大小SIZE；     
// Insert a+ib：将a+ib加入到集合中 ，输出集合的大小SIZE；*/
//
//struct complex
//{
//    int real, image, mod_squ;
//    complex(int a, int b) :real(a), image(b), mod_squ(a* a + b * b) {}
//    bool operator<(const complex &c)const//重载<号
//    {
//        return this->mod_squ < c.mod_squ;
//    }
//};
////struct cmp {//自定义比较仿函数
////    bool operator()(complex c1, complex c2) 
////    {
////        return c1.mod_squ < c2.mod_squ;
////    }
////};
//int main()
//{
//    int n;
//    string op, temp;
//    priority_queue<complex> PQ;//优先队列/大根堆
//    while (cin>>n)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            cin >> op;
//            if (op == "Pop")
//            {
//                if (PQ.size() == 0)
//                    cout << "empty" << endl;
//                else
//                {
//                    //cout << PQ.top().real << "+i" << PQ.top().image << endl;
//                    printf_s("%d+i%d\n", PQ.top().real, PQ.top().image);
//                    PQ.pop();
//                    cout << "SIZE = " << PQ.size() << endl;
//                }
//            }
//            else if (op == "Insert")
//            {
//                int a, b;
//                scanf_s("%d+i%d", &a, &b);
//                PQ.push(complex(a, b));
//                cout <<"SIZE = "<<  PQ.size() << endl;
//            }
//        }
//    }
//	return 0;
//}