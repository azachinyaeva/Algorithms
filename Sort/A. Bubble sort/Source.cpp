
#include <iostream>

void bubble_sort(int* arr, int size)
{
	bool sorted;
	int temp;
	do
	{
		sorted = true;
		for (int i = 1; i <= size; ++i)
		{
			if (arr[i - 1] > arr[i]) {
				temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
				sorted = false;
			}
		}

	} while (!sorted);
}

int main()
{
	int n;
	std::cin >> n;
	int* arr = new int [n] {};

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	bubble_sort(arr, n - 1);
	delete[] arr;
}
