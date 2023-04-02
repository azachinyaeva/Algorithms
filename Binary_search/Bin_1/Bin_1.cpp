#include <iostream>
#include <chrono>

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
    int n, k;
    std::cout << "Введите n: ";
    std::cin >> n;
    std::cout << "Введите k: ";
    std::cin >> k;
    std::cout << "Введите " << n << " чисел: ";

    int* arr_n = new int[n]();
    int* arr_k = new int[k]();
    for (int i = 0; i < n; i++) {
        std::cin >> arr_n[i];
    }
    std::cout << "Введите " << k << " чисел: ";
    for (int i = 0; i < k; i++) {
        std::cin >> arr_k[i];
    }

    for (int i = 0; i < k; i++) {

        if (search(arr_n, n, arr_k[i])) {
            std::cout << "YES \n";
        }
        else {
            std::cout << "NO \n";
        }
    }
}