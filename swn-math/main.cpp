import swn.math;

#include <iostream>

int main() {
	float start = -10.0f;
	float end = 10.0f;

	float min = -5.0f;
	float max = 5.0f;

	for (float cnt = start; cnt <= end; cnt += 0.1f) {
		float result1 = swn::Mathf::clamp(cnt, min, max);
		float result2 = swn::Mathf::floor(cnt);
		std::cout << "result1: " << result1 << "\t|\t";
		std::cout << "result2: " << result2 << std::endl;
	}

	return 0;
}