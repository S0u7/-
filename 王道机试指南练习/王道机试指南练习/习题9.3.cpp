#include<iostream>
#include<vector>
using namespace std;
/*八皇后问题：
8*8的棋盘每行放一个皇后，皇后可以在横、竖、斜线上不限步数地吃掉其他棋子，
要求每个皇后都不能被吃掉,皇后位置对应一个字符串，共有92组解
要求输出第b个解字符串*/
void dfs(int row, vector<int> &v, int* pos)//current:当前在第几行
{
    if (row == 9)//递归出口
    {
        int sum = 0;
        for (int i = 1; i <= 8; i++)//将pos数组变成数字，算法特性保证升序
        {
            sum += pos[i];
            sum *= 10;
        }
        sum /= 10;
        v.push_back(sum);
    }
    else
    {
        bool flag;
        for (int i = 1; i <= 8; i++)//检查1-8个位置
        {
            flag = true;//默认当前位置可以放皇后 
            pos[row] = i;
            for (int j = 1; j < row; j++)//检查1-current行的位置
            {
                //当前位置跟之前在同一列、左上角、右上角(关键)都不能放
                //由于是从小行到大行，所以只要检查上面的三个方向有没有皇后
                if (pos[row] == pos[j] || row - pos[row] == j - pos[j] 
                    || row + pos[row] == j + pos[j])  
                {
                    flag = false;
                    break;
                }
            }
            if (flag)//当前位置完成即flag=true，再进行下面行
                dfs(row + 1, v, pos);
        }
    }
}
int main()
{
    int n, pos[9];  //pos暂时记录每一行皇后放的位置
    vector<int> v;   //存放最终皇后串 
    dfs(1, v, pos);  //解出所有解
    while (cin >> n)
        cout << v[n - 1] << endl;
    return 0;
}