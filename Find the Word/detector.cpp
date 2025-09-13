#include "detector.hpp"
#include "goodW.h"

void detector(std::vector<std::string> vector, char letterF, char letterL, int sizeF, std::string noL) {

	std::vector<std::vector<char>> words(vector.size());

	for (int i = 0; i < vector.size(); ++i) {
		words[i].resize(vector[i].size());
		for (int j = 0; j < vector[i].size(); ++j) {
			
			words[i][j] = vector[i][j];
			
		}

	}

	bool skip = false;

	for (int w = 0; w < words.size(); ++w) {
		for (int l = 0; l < sizeF; ++l) {
			if (words[w].back() == letterL and words[w].front() == letterF and words[w].size() == sizeF and check(words[w], noL) == 0) {
				std::cout << words[w][l];
			}
			else {
				skip = true;
				break;
			}
		}
		if (skip == true) {
			continue;
		}
	}
}

//if (words[w].back() == letterL and words[w].front() == letterF) {
//
//	if (containsBL == false) {
//		std::cout << words[w][l];
//	}
//	else {
//		std::cout << "not orange";
//	}
//
//}

//for (char bL : noL) {
//	if (std::find(words[w].begin(), words[w].end(), bL) != words[w].end()) {
//		containsBL = true;
//		continue;
//	}
//	else {
//		containsBL = false;
//
//	}
//}

// bcdfhijklmqpstuvwxyz
