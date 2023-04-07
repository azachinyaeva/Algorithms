#include <iostream>
#include <iomanip>

long double search(long double c) {
	long double left = 0;
	long double right = c;
	while ((right - left) > 1e-10)
	{
		long double middle = (left + right) / 2;
		if (middle * middle + sqrt(middle) < c)
		{
			left = middle;
		}
		else 
		{
			right = middle;
		}
	}
	return right;
}

int main() {
	long double c;
	std::cin >> c;
	std::cout << std::fixed << std::setprecision(10) << search(c);
}