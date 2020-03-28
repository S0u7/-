//#include<iostream>	
//using namespace std;
///*
//ÊÖ»ú¼üÅÌ
//*/
//
//int alp[2][26] = { 2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9,
//				   1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
////kygexrrwunuwxalgcbxistydvrxmfyhbzgfpjwtrsaszqkxqjrgchhybxuzlmccafs
//int main()
//{
//	string str;
//	int a, b, sum, index_a, index_b;
//	while (cin>>str)
//	{
//		str.append(1, '6');
//		//cout << "length=" << str.length() << endl;
//		a = 0;
//		b = 1;
//		sum = 0;
//		sum += alp[1][str[a] - 97];
//		while (b!=str.length()-1)
//		{
//			//cout << "b=" << b << endl;
//			index_a = str[a] - 97;
//			index_b = str[b] - 97;
//
//			//cout << str[a] << "=" << alp[0][index_a] <<" ";
//			//cout << str[b] << "=" << alp[0][index_b] << " ";
//			//cout<<str[b+1]<<"="<<alp[0][str[b+1]-97]<< endl<<endl;
//			
//			//cout << "sum1=" << sum << endl;
//			if (alp[0][index_a] == alp[0][index_b])
//			{
//				//cout << 101 ;
//				sum += alp[1][index_b] + 2;
//			}
//			else
//			{
//				//if (alp[1][index_b] == 1)
//				//{
//				//	if (alp[0][str[b+1]-97] == alp[0][index_a])
//				//	{
//				//		cout << 202 ;
//				//		//sum += alp[1][index_b] + 1;
//				//		sum += alp[1][index_b];
//				//	}
//				//	else
//				//	{
//				//		cout << 303 ;
//				//		sum += alp[1][index_b];
//				//	}
//				//}
//				//else
//				//{
//					//cout << 404;
//					sum += alp[1][index_b];
//				//}
//			}
//			//cout << " b=" << b << endl;
//			//cout <<" sum="<< sum << endl;
//
//			a++;
//			b++;
//
//		}
//		//cout << "sumA=";
//		cout<< sum << endl;
//	}
//
//	return 0;
//}
//
