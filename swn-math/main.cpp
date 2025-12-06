import swn.math;

#include <iostream>

int main() {
	std::cout << "=== swn::Mathf::pow test ===" << std::endl;
	
	// テストケース
	std::cout << "pow(2, 3) = " << swn::Mathf::pow(2.0f, 3) << " (expected: 8)" << std::endl;
	std::cout << "pow(2, 10) = " << swn::Mathf::pow(2.0f, 10) << " (expected: 1024)" << std::endl;
	std::cout << "pow(3, 4) = " << swn::Mathf::pow(3.0f, 4) << " (expected: 81)" << std::endl;
	std::cout << "pow(2, -3) = " << swn::Mathf::pow(2.0f, -3) << " (expected: 0.125)" << std::endl;
	std::cout << "pow(5, 0) = " << swn::Mathf::pow(5.0f, 0) << " (expected: 1)" << std::endl;

	return 0;
}