#include <iostream>

int search(int* arr, int size, int k) {
	int left = 0;
	int right = 10000001;
	while ((right - left) > 1)
	{
		int middle = (left + right) / 2;
		int count = 0;
		for (int i = 0; i < size; ++i) 
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
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}
	std::cout << search(arr, n, k);
	delete[] arr;
}
