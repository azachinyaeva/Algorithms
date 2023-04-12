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

int search(int* arr, int size, int k) {
	int left = 0;
	int right = 10000001;
	while (left+1 < right)
	{
		int middle = (left + right) / 2;
		int count = 0;
		for (int i = 0; i < size; i++) 
		{
			count += arr[i] / middle;
		}
			if (count < k)
			{
				right = middle;
			}
			else
			{
				left = middle;
			}
	}
	return left;
}

int main() {

	int n, k;
	std::cin >> n >> k;
	int* arr = new int [n] {};
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	quick_sort(arr, n);
	std::cout << search(arr, n, k);
	delete[] arr;
}
