import swn.math;

#include <iostream>

int main() {
	std::cout << "=== swn::Mathf::clamp01 test ===" << std::endl;

	// テストケース
	float testValues[] = { -0.5f, 0.0f, 0.5f, 1.0f, 1.5f };
	for (float value : testValues) {
		float clampedValue = swn::Mathf::clamp01(value);
		std::cout << "clamp01(" << value << ") = " << clampedValue << std::endl;
	}

	return 0;
}