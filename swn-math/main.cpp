import swn.math;

#include <iostream>

int main() {
	float value1 = -42.5f;
	float value2 = 27.3f;

	float result = swn::Mathf::max(value1, value2);
	std::cout << "result: " << result << std::endl;
	return 0;
}