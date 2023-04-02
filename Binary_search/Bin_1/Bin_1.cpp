#include <iostream>

bool search(int* arr, int size, int ref) {

    bool flag = false;
    int left = -1;
    int right = size;
    while ((right - left) > 1) {
        int middle = (left + right) / 2;
        if (arr[middle] < ref) {
            left = middle;
        }
        else if (arr[middle] == ref) {
            flag = true;
            return flag;
        }
        else {
            right = middle;
        }
    }
    return flag;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    const int n = 10;
    const int k = 5;
    int arr[n] = {};
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    int temp;
    for (int i = 0; i < k; i++) {
        std::cin >> temp;
        if (search(arr, n, temp)) {
            std::cout << "YES \n";
        }
        else {
            std::cout << "NO \n";
        }
    }
}