//#include<iostream>
//#include<string>
//#include<queue>
//#include<cstdio>
//using namespace std;
///*��������
// Pop�����������и���ģֵ�����Ǹ��������缯��Ϊ�����empty��
// ��Ϊ�վ���������Ǹ��������ҴӼ�����ɾ���Ǹ���������������ϵĴ�СSIZE��     
// Insert a+ib����a+ib���뵽������ ��������ϵĴ�СSIZE��*/
//
//struct complex
//{
//    int real, image, mod_squ;
//    complex(int a, int b) :real(a), image(b), mod_squ(a* a + b * b) {}
//    bool operator<(const complex &c)const//����<��
//    {
//        return this->mod_squ < c.mod_squ;
//    }
//};
////struct cmp {//�Զ���ȽϷº���
////    bool operator()(complex c1, complex c2) 
////    {
////        return c1.mod_squ < c2.mod_squ;
////    }
////};
//int main()
//{
//    int n;
//    string op, temp;
//    priority_queue<complex> PQ;//���ȶ���/�����
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