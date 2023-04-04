#include <iostream>

int search(int* arr, int size, int ref) {

    int left = -1;
    int right = size;
    while ((right - left) > 1) {
        int middle = (left + right) / 2;
        if (arr[middle] <= ref) {
            left = middle;
        }
        else {
            right = middle;
        }
    }
    return arr[left];
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[100000]{};
    int n, k;
    std::cin >> n >> k;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    int temp;
    for (int i = 0; i < k; i++) {
        std::cin >> temp;
        std::cout << search(arr, n, temp) << '\n';
    }
}