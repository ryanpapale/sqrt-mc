#include <iostream>
#include <random>

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_real_distribution<> dis(0, 1);

int coarse_search(const int x) {

	for (int i = 1; i < 10000; i++) {

		if (i > x / i) {

			return i - 1;
		}

	}

	return 0;
}

 void sim(const int x, const int i) {

	constexpr int iter = 1000000;

	int count = 0;
	for (int j = 0; j < iter; ++j) {

		const double e = dis(gen);

		if ((i + e) * (i + e) < x) {

			++count;
		}

	}

	std::cout << "sqrt(" << x << ") approx " << i + (count / static_cast<double>(iter)) << std::endl;
}

int main() {

	int x;
	std::cout << "Enter an int >= 0: ";
	std::cin >> x;

	if (x < 0) {
		throw std::runtime_error("Invalid input: int < 0");
	}

	int i = coarse_search(x);

	if (i * i == x) {
		std::cout << "sqrt(" << x << ") = " << i << std::endl;
	}

	else {

		sim(x, i);
	}

	return 0;
}