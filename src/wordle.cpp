#include "wordle.hpp"
#include <stdexcept>


Word::Word(const char* word) {
	for (auto &symbol: *this) {
		if (*word < 'A' || *word > 'Z') {
			throw new std::runtime_error("Wrong word.");
		}
		symbol = *word - 'A';
		++word;
	}
}
