#include <iostream>

void merge(int* arr, int start, int mid, int right_start, int end);

void merge_sort(int* arr, int left, int right)
{
	if (left >= right) { return; }
	int mid = (left + right) / 2;
	merge_sort(arr, left, mid);
	merge_sort(arr, mid + 1, right);
	merge(arr, left, mid, mid + 1, right);
}

void merge(int* arr, int start, int mid, int right_start, int end)
{
	int* merged = new int[end+1];
	int j = start;
	int start_pos = start;

	while ((start <= mid) && (right_start <= end))
	{
		if (arr[start] < arr[right_start])
		{
			merged[j++] = arr[start++];
		}
		else
		{
			merged[j++] = arr[right_start++];
		}
	}

	while (start <= mid)
	{
		merged[j++] = arr[start++];
	}
	while (right_start <= end)
	{
		merged[j++] = arr[right_start++];
	}
	for (j = start_pos; j <= end; ++j)
	{
		arr[j] = merged[j];
	}
	delete[] merged;
}


int main() {
	int n;
	std::cin >> n;
	int* arr = new int [n] {};

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	merge_sort(arr, 0, n-1);
	delete[] arr;
}