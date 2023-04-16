#include <iostream>


int main()
{
	long long n, x, y;
	std::cin >> n >> x >> y;
	--n;
	long long left = 0, right = n * std::max(x, y), middle;
	while (left < right) {
		middle = (left + right) / 2;
		if ((middle / x) + (middle / y) < n) {
			left = middle+1;
		}
		else {
			right = middle;
		}
	}
	std::cout << right + std::min(x, y);

}
