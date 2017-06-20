#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::string reverseSentence(std::string sentence) {
	std::string reversedSentence;
	int words{1};
	std::vector<std::string> word(words);
	for (size_t i = 0; i < sentence.length(); i++) {
		if (sentence[i] != ' ') {
			word[words - 1] += sentence[i];
		}else {
			words++;
			word.resize(words);
		}
	}
	std::reverse(word.begin(), word.end());
	for (auto &curWord : word) {
		reversedSentence.append(curWord + " ");
	}
	return reversedSentence;
}

int main() {
	std::string sentence = "This is a sentence";
	std::cout << reverseSentence(sentence) << "\n";
        std::cin.get();
	return 0;
}
