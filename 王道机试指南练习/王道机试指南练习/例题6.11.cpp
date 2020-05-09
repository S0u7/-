//#include<iostream>
//using namespace std;
///*计算两个矩阵的乘积，第一个是2*3,第二个是3*2*/
//class matrix
//{
//public:
//	matrix(int r, int c)//有参构造
//	{
//		this->row = r;
//		this->col = c;
//		this->mat = new int*[r];//初始化矩阵空间
//		for (int k = 0; k < r; k++)
//			this->mat[k] = new int[c];
//	}
//	matrix(const matrix &m)//因为类开辟堆区空间，重写深拷贝构造
//	{
//		row = m.row;
//		col = m.col;
//		mat = new int*[row];
//		for (int i = 0; i < row; i++)
//		{
//			mat[i] = new int[col];
//			for (int j = 0; j < col; j++)
//				mat[i][j] = m.mat[i][j];
//		}
//	}
//	void init_matrix()
//	{
//		for (int i = 0; i < this->row; i++)
//			for (int j = 0; j < this->col; j++)
//				cin >> this->mat[i][j];
//	}
//	~matrix()//析构堆区空间
//	{
//		for (int i = 0; i < this->row; i++)
//			delete[] mat[i];
//		delete[] mat;
//	}
////private:
//	int** mat;
//	int row, col;
//};
//
//matrix operator*(matrix a, matrix b)
//{
//	if (a.row != b.col || a.col != b.row)
//	{
//		cout << "矩阵大小不匹配" << endl;
//		exit(0);
//	}
//	matrix result(a.row,a.row);
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
//void test1()
//{
//	matrix m1(2, 3);
//	m1.init_matrix();
//	matrix m2(3, 2);
//	m2.init_matrix();
//
//	matrix m3 = m1 * m2;
//	for (int i = 0; i < m3.row; i++)
//	{
//		for (int j = 0; j < m3.col; j++)
//			cout << m3.mat[i][j] << " ";
//		cout << endl;
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}