//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
///*开门人与关门人
// 每天第一个到机房的人要把门打开，最后一个离开的人要把门关好。
// 现有一堆杂乱的机房签到、签离记录，请根据记录找出当天开门和关门的人
// 利用map的字典序和映射特性*/
//int main() 
//{
//    map<string, string> open;
//    map<string, string> close;
//    string id, arrive, leave;
//    int n;
//    while (cin >> n) 
//    {
//        for (int i = 0; i < n; i++) 
//        {
//            cin >> id >> arrive >> leave;
//            open[arrive] = id;;
//            close[leave] = id;
//        }
//        cout << open.begin()->second << ' ' << close.rbegin()->second << endl;
//        open.clear();
//        close.clear();
//    }
//    return 0;
//}