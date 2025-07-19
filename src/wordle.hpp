#include <array>
#include <cstddef>
constexpr std::size_t WORD_LENGTH = 5;

class Word: public std::array<char, WORD_LENGTH> {
	public:
		Word(const char *word);
};
