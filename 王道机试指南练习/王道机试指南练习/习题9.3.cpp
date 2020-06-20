#include<iostream>
#include<vector>
using namespace std;
/*�˻ʺ����⣺
8*8������ÿ�з�һ���ʺ󣬻ʺ�����ںᡢ����б���ϲ��޲����سԵ��������ӣ�
Ҫ��ÿ���ʺ󶼲��ܱ��Ե�,�ʺ�λ�ö�Ӧһ���ַ���������92���
Ҫ�������b�����ַ���*/
void dfs(int row, vector<int> &v, int* pos)//current:��ǰ�ڵڼ���
{
    if (row == 9)//�ݹ����
    {
        int sum = 0;
        for (int i = 1; i <= 8; i++)//��pos���������֣��㷨���Ա�֤����
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
        for (int i = 1; i <= 8; i++)//���1-8��λ��
        {
            flag = true;//Ĭ�ϵ�ǰλ�ÿ��ԷŻʺ� 
            pos[row] = i;
            for (int j = 1; j < row; j++)//���1-current�е�λ��
            {
                //��ǰλ�ø�֮ǰ��ͬһ�С����Ͻǡ����Ͻ�(�ؼ�)�����ܷ�
                //�����Ǵ�С�е����У�����ֻҪ������������������û�лʺ�
                if (pos[row] == pos[j] || row - pos[row] == j - pos[j] 
                    || row + pos[row] == j + pos[j])  
                {
                    flag = false;
                    break;
                }
            }
            if (flag)//��ǰλ����ɼ�flag=true���ٽ���������
                dfs(row + 1, v, pos);
        }
    }
}
int main()
{
    int n, pos[9];  //pos��ʱ��¼ÿһ�лʺ�ŵ�λ��
    vector<int> v;   //������ջʺ� 
    dfs(1, v, pos);  //������н�
    while (cin >> n)
        cout << v[n - 1] << endl;
    return 0;
}