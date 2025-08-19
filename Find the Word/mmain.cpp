#include <iostream>
#include <vector>
#include <algorithm>
#include "detector.hpp"

int main() {

	std::vector<std::string> words = { "cat", "Orange", "dog" };

	std::cout << words.size();

	detector(words);


	//auto it = std::find(words.begin(), words.end(), detector(words));

	return 0;
}