#include <iostream>

int main(int argc, char *argv[]) {
	int i = 1;
	int j;
	
	if (argc == 1) {
		return 0;
	}

	while (argv[i] != NULL) {
		j = 0;
		
		while (argv[i][j] != '\0') {
			std::cout << char(toupper(argv[i][j]));
			j++;
		}
		
		i++;
	}

	std::cout << std::endl;
	
	return 0;
}
