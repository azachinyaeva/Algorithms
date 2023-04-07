#include <iostream>

void quick_sort(int* arr, int size)
{
	int i = 0;
	int j = size - 1;
	int mid = arr[(i + j) / 2];

	do {

		while (arr[i] < mid) { i++; }
		while (arr[j] > mid) { j--; }
		if (i <= j)
		{
			std::swap(arr[i++], arr[j--]);
		}
	} while (i <= j);
	if (j > 0) { quick_sort(arr, j + 1); }
	if (i < size) { quick_sort(&arr[i], size - i); }
}

int search(int* arr, int size, int num) {
	int left = 0;
	int right = size-1;
	int count = 0;
	while ( (right-left) > 1) 
	{
		int middle = (left + right) / 2;
		if (arr[middle] > num) 
		{
			right = middle;
		}
		else 
		{
			left = middle;
		}
	}
	for (int k = right; k >= 0; k--)
	{
		if (arr[k] == num) { count++; }
	}
	return count;
}

int main() {

	int n, m;
	std::cin >> n;
	int* arr = new int [n] {};
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	quick_sort(arr, n);
	std::cin >> m;
	int temp;
	for (int i = 0; i < m; i++) {
		std::cin >> temp;
		std::cout << search(arr, n, temp);
	}
	delete[] arr;
}
