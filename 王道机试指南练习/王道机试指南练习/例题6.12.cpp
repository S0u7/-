//#include <iostream>
//using namespace std;
///*给定一个n*n的矩阵，求该矩阵的k次幂，即P^k。（2<=n<=10）、k（1<=k<=5）
//  Pij且（0<=Pij<=10）。另外，数据保证最后结果不会超过10^8*/
//class matrix
//{
//public:
//	//matrix() {}//无参构造
//	matrix(int r, int c)//有参构造
//	{
//		this->row = r;
//		this->col = c;
//		this->mat = new int*[r];//初始化矩阵空间
//		for (int k = 0; k < r; k++)
//			this->mat[k] = new int[c];
//	}
//	matrix(const matrix &m)//因为类开辟了堆区空间，重写拷贝构造
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
//	matrix& operator=(const matrix& m)//重载赋值操作符
//	{
//		this->row = m.row;
//		this->col = m.col;
//		if (mat == NULL)//如果堆区为空，则开辟
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
//		this->mat = new int* [row];//初始化矩阵空间
//		for (int i = 0; i < this->row; i++)
//		{
//			this->mat[i] = new int[col];
//			for (int j = 0; j < this->col; j++)
//				cin >> this->mat[i][j];//输入矩阵
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
//	~matrix()//析构堆区空间
//	{	
//		for (int i = 0; i < this->row; i++)
//			if (mat[i] != NULL)
//			{
//				delete[] mat[i];
//				mat[i] = NULL;//防止野指针
//			}
//		if (mat != NULL)
//		{
//			delete[] mat;
//			mat = NULL;
//		}
//	}
////private://类含有指向堆区的指针成员，会产生深拷贝问题，要重写拷贝构造和=赋值操作符
//	int** mat;
//	int row, col;
//};
//matrix operator*(const matrix &a, const matrix &b)
//{
//	if (a.row != b.col || a.col != b.row)
//	{
//		cout << "矩阵大小不匹配" << endl;
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
//matrix matrix_pow(matrix &a, int k) //矩阵快速幂
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