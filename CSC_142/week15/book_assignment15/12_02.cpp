// 12_02
// This code generates some random passwords with letters and numbers
// Anthony Frederick
// 04/17/25

#include <random>
#include <iostream>

void generatePass(int pLength, const char* chars, int passNum) {
	std::random_device rd_engine;
	std::uniform_int_distribution<int> dist(0, 61);

	for (int i = 0; i < passNum; i++) {
		std::cout << " password_" << i << " : ";
		for (int j = 0; j < pLength; j++) {
			int index = dist(rd_engine);
			std::cout << chars[index];
		}
		std::cout << "\n";
	}
}

int main() {
	const int passLength = 12;
	const char characters[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz0123456789";
	int passwordsToGenerate = 9;

	generatePass(passLength, characters, passwordsToGenerate);
}

