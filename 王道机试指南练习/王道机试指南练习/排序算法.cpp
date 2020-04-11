#include<iostream>
using namespace std;
#include<queue>
#include<cstring>
#include<vector>
#include<algorithm>
/*�����㷨�����롢ϣ����ѡ�񡢶ѡ��鲢��
ð�ݡ����١�������������Ͱ����
�����±��0��ʼ*/

void arrOutput(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void InsertSort(int arr[], int n)//ֱ�Ӳ�������
{
	int temp, i, j;
	for (i = 1; i < n; i++)//n-1��Ԫ��
	{
		temp = arr[i];
		for (j = i-1; j >= 0; j--)//�������������ȷλ��
		{
			/*if (arr[j] > temp){
				arr[j + 1] = arr[j];
				if (j == 0){
					arr[j] = temp;
					break;
				}
			}
			else{
				arr[j + 1] = temp;
				break;
			}*/
	//�����д������Ҫ���ж�̫��
			if (temp<arr[j])
				arr[j + 1] = arr[j];
			else
				break;
		}
		//�˳��ڲ�ѭ������ʱj=-1
		arr[j + 1] = temp;
	}
	arrOutput(arr, n);
}

void InsertSort_binary(int arr[], int n)
{
	int mid;
	for (int i = 1; i < n; i++) 
	{
		int low = 0, high = i - 1;
		int temp = arr[i];
		while (low <= high) //low>highʱ��֤���۰���ҽ���
		{
			mid = (low + high) / 2;
			if (arr[i] < arr[mid])
				high = mid - 1;
			else
				low = mid + 1;
		}
		//��high+1�����Ԫ�����κ���
		for (int j = i - 1; j >= high + 1; j--)
			arr[j + 1] = arr[j];

		arr[high + 1] = temp;
	}
	arrOutput(arr, n);
}

void ShellSort(int arr[], int n)
{
	int temp, d, i, j;
	for (d = n / 2; d >= 1; d /= 2)//����
	{
		for (i = d; i < n; i++)//������ֱ�Ӳ�������
		{
			temp = arr[i];
			for (j = i - d; j >= 0; j -= d)
			{
				if (temp < arr[j])
					arr[j + d] = arr[j];
				else
					break;
			}
			arr[j + d] = temp;
		}
	}
	arrOutput(arr, n);
}

void SelectSort(int arr[], int n)//��ѡ������
{
	int min, index;
	for (int i = 0; i < n-1; i++)//n-1��λ��
	{
		min = arr[i];
		index = i;
		for (int j = i; j < n; j++)//��δ���������СԪ��
		{
			if (arr[j] < min)
			{
				min = arr[j];
				index = j;
			}
		}
		arr[index] = arr[i];
		arr[i] = min;
	}
	arrOutput(arr, n);
}

void Sift(int arr[], int n, int i)//������ɸ����
{
	int temp = arr[i];//��arr[i]����ɸ���γ���arr[i]Ϊ���Ķ�
	int	j = 2 * i + 1;//����
	while (j <= n-1)
	{
		if (j < n - 1 && arr[j] < arr[j + 1])//���Һ����нϴ���
			j++;
		if (temp < arr[j])
		{
			arr[i] = arr[j];
			i = j;
			j = 2 * i + 1;
		}
		else
			break;
	}
	arr[i] = temp;
}
void HeapSprt(int arr[], int n)
{
	int	temp;
	for (int i = n / 2 - 1; i >= 0; i--)//����
		Sift(arr, n, i);
	for (int j = 1; j <= n-1; j++)//���ö�����
	{
		temp = arr[0];//�Ե�arr[0]��arr[n-j]
		arr[0] = arr[n - j];
		arr[n - j] = temp;
		Sift(arr, n-j, 0);//��arr[0]��ǰn-j������н���ɸ����
	}
	arrOutput(arr, n);
}

void BubbleSort(int arr[], int n)//ð������
{
	int temp, flag;
	for (int i = 0; i < n-1; i++)//n-1��ð��
	{
		flag = 0;
		for (int j = 0; j < n-1-i; j++)//ð�ݸ߶ȣ�������������
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;//��1��ʾ�н���
			}
		}
	//ĳ��ð��û��������������ɣ������������ð�ݲ��ؽ���
		if (flag == 0)
			return;
	}
	arrOutput(arr, n);
}

void QuickSort_A(int arr[], int low, int high)
{
	int i = low + 1;
	int j = high;
	int pivot = arr[low];//��׼Ԫ��
	while (i <= j)
	{
		while (arr[i] <= pivot && i <= j)
			i++;
		while (arr[j] >= pivot && i <= j)//ע�⣺<=�źܹؼ���������<
			j--;
		if (i < j)//������������i��j û����ʱ������arr[i]��arr[j]��ֵ
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}
	/*Ϊʲô��j�ȽϽ����жϣ�
	��Ϊ�����<=�ţ����µ�i��j��ͬһλ��ʱiǰһ���Ȼ�׼С��j��һ���Ȼ�׼��*/
	if (low != j)//����׼Ԫ�ؽ��������ֽ���
	{
		arr[low] = arr[j];
		arr[j] = pivot;
	}
	if (low < j - 1)
		QuickSort_A(arr, low, j - 1);
	if (j + 1 < high)
		QuickSort_A(arr, j + 1, high);

}

int partition_A(int arr[], int low, int high)
{
	int pivot = arr[low];
	while (low < high)
	{
		while (arr[high] >= pivot && low < high)	high--;
			arr[low] = arr[high];

		while (arr[low] <= pivot && low < high)		low++;
			arr[high] = arr[low];

	}
	arr[low] = pivot;
	return low;
}
int partition_B(int arr[], int low, int high)
{
	int pivot = arr[low];
	int i = low;
	int temp;
	for (int j = low+1; j <= high; j++)
	{
		if (arr[j] < pivot)
		{
			temp = arr[j];
			arr[j] = arr[++i];
			arr[i] = temp;
		}
	}
	temp = arr[i];
	arr[i] = arr[low];
	arr[low] = temp;
	return i;
}
void QuickSort_B(int arr[], int low, int high)
{
	if (low < high)
	{
		//int pivot = partition_A(arr, low, high);
		int pivot = partition_B(arr, low, high);
		//arrOutput(arr, high - low + 1);
		QuickSort_B(arr, low, pivot - 1);
		QuickSort_B(arr, pivot + 1, high);
	}
}

int B[20];//�鲢����������
void merge(int arr[], int low, int mid, int high)//�鲢�㷨
{
	for (int  t = low; t <= high; t++)//��������
	{
		B[t] = arr[t];
	}
	int i = low;
	int j = mid + 1;
	int k = low;
	while (i <= mid && j <= high)
	{
		if (B[i] <= B[j])
		{
			arr[k++] = B[i++];
		}
		else
		{
			arr[k++] = B[j++];
		}
	}
	while (i <= mid)
		arr[k++] = B[i++];
	while (j <= high)
		arr[k++] = B[j++];
}
void MergeSort(int arr[], int low, int high)//�ݹ�鲢����
{
	if (low <high)
	{
		int mid = low + (high - low) / 2;//�ȷ���
		MergeSort(arr, low, mid);
		MergeSort(arr, mid + 1, high);
		merge(arr, low, mid, high);//�ٹ鲢
	}

}

void twoMerge(int arr[], int R[], int low, int mid, int high)//��·�鲢
{
	int i, j, k;
	i = low;
	j = mid + 1;
	k = low;
	while (i<=mid && j<= high)
	{
		if (arr[i] <= arr[j])
			R[k++] = arr[i++];
		else
			R[k++] = arr[j++];
	}
	while (i<=mid)
		R[k++] = arr[i++];
	while (j<=high)
		R[k++] = arr[j++];
}
void mergePass(int arr[], int R[], int n, int len)//һ�˹鲢����
{
	int p = 0;
	while (p+2*len-1<=n-1)
	{
		twoMerge(arr, R, p, p + len - 1, p + 2 * len - 1);
		p += 2 * len;
	}
	if (p+len-1<n-1)
		twoMerge(arr, R, p, p + len - 1, n - 1);
	else
		for (int i = p; i <= n-1; i++)
		{
			R[i] = arr[i];
		}
}
void MergeSort_B(int arr[], int n)
{
	int* R = new int[n];
	int len = 1;
	while (len<n)
	{
		mergePass(arr, R, n, len);
		len *= 2;
		mergePass(R, arr, n, len);
		len *= 2;
	}
	delete[] R;

	arrOutput(arr, n);
}

void radix_sort_core(int* arr, int n, int base)//���䡢�ռ�
{
	queue<int> box[10];
	for (int i = 0; i < n; i++) //���������
	{
		box[(arr[i] / base) % 10].push(arr[i]);
	}
	int k = 0;
	for (int j = 0; j < 10; j++) //�ռ���ԭ����
	{
		while ( ! box[j].empty() ) 
		{
			arr[k++] = box[j].front();
			box[j].pop();
		}
	}

}
void RadixSort(int* arr, int n) 
{
	if (arr == nullptr || n <= 0)
		return;
	//�ҵ����ֵ
	int max_val = -1;
	for (int i = 0; i < n; i++)
		if (arr[i] > max_val)
			max_val = arr[i];
	//�ֱ��ÿһλ���з��䡢�ռ�
	for (int base = 1; max_val / base > 0; base *= 10) 
		radix_sort_core(arr, n, base);

	arrOutput(arr, n);
}

void CountingSort(int arr[], int n)
{
	//�ҵ����ֵ
	int max_val = -1;
	for (int k = 0; k < n; k++)
		if (arr[k] > max_val)
				max_val = arr[k];
	max_val += 1;
	int* number=new int[max_val];
	// ��buckets�е��������ݶ���ʼ��Ϊ0��
	memset(number, 0, max_val*sizeof(int));
	// 1. ����
	for (int i = 0; i < n; i++)
		number[arr[i]]++;
	// 2. ����
	int t = 0;
	for (int j = 0; j < max_val; j++)
	{
		while( number[j]-- )
			arr[t++] = j;
	}
	arrOutput(arr, n);
}

void BucketSort(int arr[], int n)
{
	vector<int> bucket[10];
	for (int j = 0; j < n; j++)
	{
		int a = arr[j] / 10;
		bucket[a].push_back(arr[j]);
	}
	int	t = 0;
	for (int k = 0; k < 10; k++)
	{		
		if(!bucket[k].empty())
			sort(bucket[k].begin(), bucket[k].end());
		while (!bucket[k].empty())
		{
			arr[t++] = bucket[k].front();
			bucket[k].pop_back();
		}
	}
	arrOutput(arr, n);
}

int main()
{
	//int* p = new int[20];
	int p[20];
	int n = 0;
	while (cin >> n)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> p[j];
		}

		//InsertSort(p, n);

		//InsertSort_binary(p, n);

		//SelectSort(p, n);

		//BubbleSort(p, n);

		//ShellSort(p, n);

		//HeapSprt(p, n);

		//MergeSort_B(p, n);

		//�ݹ鷽�������ʺ����ڲ��������
		//QuickSort_A(p, 0, n - 1);
		//arrOutput(p, n);

		//QuickSort_B(p, 0, n - 1);
		//arrOutput(p, n);

		//MergeSort(p, 0, n - 1);
		//arrOutput(p, n);

		//RadixSort(p, n);

		//CountingSort(p, n);

		//BucketSort(p, n);

	}

	return 0;
}