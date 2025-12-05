import swn.math;

#include <iostream>

int main() {
	float value = -42.5f;
	float result = swn::Mathf::Abs(value);
	std::cout << "The absolute value of " << value << " is " << result << std::endl;
	return 0;
}