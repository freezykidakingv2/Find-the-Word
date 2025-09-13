#include "goodW.h"

int check(std::vector<char> wordC, std::string bLC) {
	
	for (int l : bLC) {
		if (std::find(wordC.begin(), wordC.end(), l) != wordC.end()) {
			return 1;
		}
	}
	return 0;
}