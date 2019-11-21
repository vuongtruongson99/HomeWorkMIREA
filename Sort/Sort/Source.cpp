#include<iostream>

using namespace std;

void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}


int partition(int arr[], int low, int high)
{
	int pivot = arr[high];    // pivot 
	int left = low;
	int right = high - 1;
	while (true) {
		while (left <= right && arr[left] < pivot) left++;
		while (right >= left && arr[right] > pivot) right--;
		if (left >= right) break;
		swap(arr[left], arr[right]);
		left++;
		right--;
	}
	swap(arr[left], arr[high]);
	return left;
}

/* quick sort */
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi là chỉ số nơi phần tử này đã đứng đúng vị trí
		 và là phần tử chia mảng làm 2 mảng con trái & phải */
		int pi = partition(arr, low, high);

		// Gọi đệ quy sắp xếp 2 mảng con trái và phải
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

/* Hàm xuất mảng */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << "\t";
	cout << endl;
}


int main()
{
	int arr[100], b;

	cout << "Please input number of element: ";
	cin >> b;
	cout << "Please input array: " << endl;
	for (int i = 0; i < b; i++)
	{
		cout << "A[" << i << "] : ";
		cin >> arr[i];
	}

	quickSort(arr, 0, b - 1);
	cout << "Sorted array: ";
	printArray(arr, b);

	system("pause");
	return 0;
}