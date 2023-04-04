#include <iostream>

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
        int left = 0;
        int right = n;
        while ((right - left) > 1) 
        {
            int middle = (left + right) / 2;
            if (arr[middle] <= temp) {
                left = middle;
            }
            else {
                right = middle;
            }
        }
        if (arr[left] == temp) {
            std::cout << "YES \n";
        }
        else {
            std::cout << "NO \n";
        }
    }
}