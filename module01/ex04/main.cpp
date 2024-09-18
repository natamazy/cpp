#include <iostream>
#include <fstream>

std::string replace42(std::string buffer, std::string toFind, std::string toReplace) {
	size_t	findSize	= toFind.length();
	size_t	replaceSize	= toReplace.length();
	size_t	searchFrom	= 0;

	searchFrom = buffer.find(toFind);
	while (searchFrom != std::string::npos) {
		buffer.erase(searchFrom, findSize);
		buffer.insert(searchFrom, toReplace);
		searchFrom = buffer.find(toFind, searchFrom + replaceSize);
	}

	return (buffer);
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Usage ./sedisforlosers \"filename\" \"string1\" \"string2\"." << std::endl;
		return (1);
	}

	if (std::string(argv[2]).length() == 0 || std::string(argv[3]).length() == 0) {
		std::cout << "Strings can't be empty." << std::endl;
		std::cout << "Usage ./sedisforlosers \"filename\" \"string1\" \"string2\"." << std::endl;
		return (1);
	}

	std::string		filename = argv[1];
	std::string		string1 = argv[2];
	std::string		string2 = argv[3];

	std::string		buffer;
	std::ifstream	input;
	std::ofstream	output;

	input.open(argv[1]);
	if (input.is_open() == true) {
		output.open(filename + ".replace", std::ios::out | std::ios::trunc);
		if (output.is_open() == true) {
			while (std::getline(input, buffer))
			{
				buffer = replace42(buffer, string1, string2);
				output << buffer;
				if (input.peek() != EOF) {
					output << std::endl;
				}
			}
			output.close();
		} else {
			std::cerr << "Error while opening outfile." << std::endl;
		}
		input.close();
	} else {
		std::cerr << "Error while opening infile." << std::endl;
	}
}