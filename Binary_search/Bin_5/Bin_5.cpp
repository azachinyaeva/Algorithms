#include <iostream>
#include <math.h>
#include <iomanip>

int main() {
	long double a, b, c, d;
	std::cin >> a >> b >> c >> d;
	long double right = 1;
	long double left = -right;
	while ((pow(right,3) * a + pow (right, 2) * b + right * c + d) * (pow(left, 3) * a + pow (left, 2) * b + left * c + d) >= 0) 
	{
		right *= 2;
		left *= 2;
	}
	while ((right - left) > 1e-7)
	{
		long double middle = (left + right) / 2;
		if ((pow(middle, 3) * a + pow(middle, 2) * b + c * middle + d) * (pow(right, 3) * a + pow(right, 2) * b + c * right + d) > 0)
		{
			right = middle;
		}
		else
		{
			left = middle;
		}
	}
	std::cout << std::fixed << std::setprecision(10) << left;
}