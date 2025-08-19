#include "detector.hpp"

void detector(std::vector<std::string> vector) {

	char firstL;
	char secondL;
	char thirdL;
	char forthL;
	char fifthL;
	char sixthL;

	std::list<char> letters;

	for (int i = 0; i < vector.size(); ++i) {

		for (int j = 0; j <= 5; ++j) {
			firstL = vector[i][j]; letters.push_back(firstL);
			if (j == 1 and vector[i].size() >= 2) {  secondL = vector[i][j]; letters.push_back(secondL); }
			else if (j == 2 and vector[i].size() >= 3) { thirdL = vector[i][j]; letters.push_back(thirdL); }
			else if (j == 3 and vector[i].size() >= 4) { std::cout << vector[i]; forthL = vector[i][j]; letters.push_back(forthL); }
			else if (j == 4 and vector[i].size() >= 5) { fifthL = vector[i][j]; letters.push_back(fifthL); }
			else if (j == 5 and vector[i].size() == 6) { sixthL = vector[i][j]; letters.push_back(sixthL); }

			if (letters.back() == 'e') {
				std::cout << vector[i];
				exit(0);
			}
		}

	}

	std::cout << letters.size();
}