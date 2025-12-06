import swn.math;

#include <iostream>

int main() {
	std::cout << "=== swn::Mathf::sign test ===" << std::endl;

	// テストケース
	float testValues[] = { -10.5f, -0.0f, 0.0f, 5.3f };
	for (float value : testValues) {
		float sign = swn::Mathf::sign(value);
		std::cout << "swn::Mathf::sign(" << value << ") = " << sign << std::endl;
	}

	return 0;
}