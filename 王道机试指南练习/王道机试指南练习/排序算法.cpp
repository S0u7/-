#include<iostream>
using namespace std;
#include<queue>
#include<cstring>
#include<vector>
#include<algorithm>
/*排序算法：插入、希尔、选择、堆、归并、
冒泡、快速、基数、计数、桶排序
数组下标从0开始*/

void arrOutput(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void InsertSort(int arr[], int n)//直接插入排序
{
	int temp, i, j;
	for (i = 1; i < n; i++)//n-1个元素
	{
		temp = arr[i];
		for (j = i-1; j >= 0; j--)//在已排序段找正确位置
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
	//上面的写法不必要的判断太多
			if (temp<arr[j])
				arr[j + 1] = arr[j];
			else
				break;
		}
		//退出内层循环，此时j=-1
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
		while (low <= high) //low>high时，证明折半查找结束
		{
			mid = (low + high) / 2;
			if (arr[i] < arr[mid])
				high = mid - 1;
			else
				low = mid + 1;
		}
		//将high+1后面的元素依次后移
		for (int j = i - 1; j >= high + 1; j--)
			arr[j + 1] = arr[j];

		arr[high + 1] = temp;
	}
	arrOutput(arr, n);
}

void ShellSort(int arr[], int n)
{
	int temp, d, i, j;
	for (d = n / 2; d >= 1; d /= 2)//步长
	{
		for (i = d; i < n; i++)//按步长直接插入排序
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

void SelectSort(int arr[], int n)//简单选择排序
{
	int min, index;
	for (int i = 0; i < n-1; i++)//n-1个位置
	{
		min = arr[i];
		index = i;
		for (int j = i; j < n; j++)//在未排序段找最小元素
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

void Sift(int arr[], int n, int i)//堆排序，筛运算
{
	int temp = arr[i];//对arr[i]进行筛，形成以arr[i]为根的堆
	int	j = 2 * i + 1;//左孩子
	while (j <= n-1)
	{
		if (j < n - 1 && arr[j] < arr[j + 1])//左右孩子中较大者
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
	for (int i = n / 2 - 1; i >= 0; i--)//建堆
		Sift(arr, n, i);
	for (int j = 1; j <= n-1; j++)//利用堆排序
	{
		temp = arr[0];//对调arr[0]和arr[n-j]
		arr[0] = arr[n - j];
		arr[n - j] = temp;
		Sift(arr, n-j, 0);//对arr[0]在前n-j个结点中进行筛运算
	}
	arrOutput(arr, n);
}

void BubbleSort(int arr[], int n)//冒泡排序
{
	int temp, flag;
	for (int i = 0; i < n-1; i++)//n-1轮冒泡
	{
		flag = 0;
		for (int j = 0; j < n-1-i; j++)//冒泡高度，随着轮数减少
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;//置1表示有交换
			}
		}
	//某轮冒泡没交换，则排序完成，后面的若干轮冒泡不必进行
		if (flag == 0)
			return;
	}
	arrOutput(arr, n);
}

void QuickSort_A(int arr[], int low, int high)
{
	int i = low + 1;
	int j = high;
	int pivot = arr[low];//基准元素
	while (i <= j)
	{
		while (arr[i] <= pivot && i <= j)
			i++;
		while (arr[j] >= pivot && i <= j)//注意：<=号很关键，而不是<
			j--;
		if (i < j)//当条件成立且i和j 没相遇时，交换arr[i]和arr[j]的值
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}
	/*为什么与j比较进行判断：
	因为上面的<=号，导致当i和j在同一位置时i前一定比基准小，j后一定比基准大。*/
	if (low != j)//将基准元素交换到划分交界
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

int B[20];//归并排序辅助数组
void merge(int arr[], int low, int mid, int high)//归并算法
{
	for (int  t = low; t <= high; t++)//辅助数组
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
void MergeSort(int arr[], int low, int high)//递归归并排序
{
	if (low <high)
	{
		int mid = low + (high - low) / 2;//先分裂
		MergeSort(arr, low, mid);
		MergeSort(arr, mid + 1, high);
		merge(arr, low, mid, high);//再归并
	}

}

void twoMerge(int arr[], int R[], int low, int mid, int high)//二路归并
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
void mergePass(int arr[], int R[], int n, int len)//一趟归并排序
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

void radix_sort_core(int* arr, int n, int base)//分配、收集
{
	queue<int> box[10];
	for (int i = 0; i < n; i++) //分配进队列
	{
		box[(arr[i] / base) % 10].push(arr[i]);
	}
	int k = 0;
	for (int j = 0; j < 10; j++) //收集回原数组
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
	//找到最大值
	int max_val = -1;
	for (int i = 0; i < n; i++)
		if (arr[i] > max_val)
			max_val = arr[i];
	//分别对每一位进行分配、收集
	for (int base = 1; max_val / base > 0; base *= 10) 
		radix_sort_core(arr, n, base);

	arrOutput(arr, n);
}

void CountingSort(int arr[], int n)
{
	//找到最大值
	int max_val = -1;
	for (int k = 0; k < n; k++)
		if (arr[k] > max_val)
				max_val = arr[k];
	max_val += 1;
	int* number=new int[max_val];
	// 将buckets中的所有数据都初始化为0。
	memset(number, 0, max_val*sizeof(int));
	// 1. 计数
	for (int i = 0; i < n; i++)
		number[arr[i]]++;
	// 2. 排序
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

		//递归方法，不适合在内部输出数组
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