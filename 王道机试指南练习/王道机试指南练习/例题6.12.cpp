//#include <iostream>
//using namespace std;
///*����һ��n*n�ľ�����þ����k���ݣ���P^k����2<=n<=10����k��1<=k<=5��
//  Pij�ң�0<=Pij<=10�������⣬���ݱ�֤��������ᳬ��10^8*/
//class matrix
//{
//public:
//	//matrix() {}//�޲ι���
//	matrix(int r, int c)//�вι���
//	{
//		this->row = r;
//		this->col = c;
//		this->mat = new int*[r];//��ʼ������ռ�
//		for (int k = 0; k < r; k++)
//			this->mat[k] = new int[c];
//	}
//	matrix(const matrix &m)//��Ϊ�࿪���˶����ռ䣬��д��������
//	{
//		this->row = m.row;
//		this->col = m.col;
//		this->mat = new int*[row];
//		for (int i = 0; i < this->row; i++)
//		{
//			this->mat[i] = new int[col];
//			for (int j = 0; j < this->col; j++)
//				this->mat[i][j] = m.mat[i][j];
//		}
//	}
//	matrix& operator=(const matrix& m)//���ظ�ֵ������
//	{
//		this->row = m.row;
//		this->col = m.col;
//		if (mat == NULL)//�������Ϊ�գ��򿪱�
//		{
//			this->mat = new int* [row];
//			for (int k = 0; k < row; k++)
//				mat[k] = new int[col];
//		}
//		for (int i = 0; i < this->row; i++)
//		{
//			for (int j = 0; j < this->col; j++)
//				this->mat[i][j] = m.mat[i][j];
//		}
//		return *this;
//	}
//	void init_matrix()
//	{
//		this->mat = new int* [row];//��ʼ������ռ�
//		for (int i = 0; i < this->row; i++)
//		{
//			this->mat[i] = new int[col];
//			for (int j = 0; j < this->col; j++)
//				cin >> this->mat[i][j];//�������
//		}
//	}
//	void dispaly()
//	{
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//				cout << this->mat[i][j] << " ";
//			cout << endl;
//		}
//	}
//	~matrix()//���������ռ�
//	{	
//		for (int i = 0; i < this->row; i++)
//			if (mat[i] != NULL)
//			{
//				delete[] mat[i];
//				mat[i] = NULL;//��ֹҰָ��
//			}
//		if (mat != NULL)
//		{
//			delete[] mat;
//			mat = NULL;
//		}
//	}
////private://�ຬ��ָ�������ָ���Ա�������������⣬Ҫ��д���������=��ֵ������
//	int** mat;
//	int row, col;
//};
//matrix operator*(const matrix &a, const matrix &b)
//{
//	if (a.row != b.col || a.col != b.row)
//	{
//		cout << "�����С��ƥ��" << endl;
//		exit(0);
//	}
//	matrix result(a.row, a.col);
//	for (int k = 0; k < a.row; k++)
//	{	
//		for (int i = 0; i < a.row; i++)
//		{
//			int sum = 0;
//			for (int j = 0; j < a.col; j++)
//				sum += a.mat[k][j] * b.mat[j][i];
//			result.mat[k][i] = sum;
//		}
//	}
//	return result;
//}
//matrix matrix_pow(matrix &a, int k) //���������
//{
//    matrix ans(a.row ,a.col);
//	for (int i = 0; i < ans.row; i++)
//		for (int j = 0; j < ans.col; j++)
//			if (i == j)
//				ans.mat[i][j] = 1;
//			else
//				ans.mat[i][j] = 0;
//    while (k != 0)
//    {
//		if (k % 2 == 1)
//			ans = ans * a;
//		a = a * a;
//		k /= 2;
//    }
//    return ans;
//}
//
//void test1()
//{
//	int n, k;
//	while (cin >> n >> k)
//	{
//		matrix m(n,n);
//		m.init_matrix();
//		//matrix ans(n,n);
//		matrix ans = matrix_pow(m, k);
//		ans.dispaly();
//	}
//}
//int main()
//{
//	test1();
//    return 0;
//}