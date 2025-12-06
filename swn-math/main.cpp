import swn.math;

#include <iostream>

int main() {
	float start = -10.0f;
	float end = 10.0f;

	float min = -5.0f;
	float max = 5.0f;

	for (float cnt = start; cnt <= end; cnt += 1.0f) {
		float result = swn::Mathf::repeat(cnt, 3.0f);
		std::cout << "result: " << result << std::endl;
	}

	return 0;
}