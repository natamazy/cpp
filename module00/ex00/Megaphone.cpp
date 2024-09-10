#include <iostream>

int main(int argc, char *argv[]) {
	using std::cout;
	using std::endl;

	if (argc < 2)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	for (int i = 1; argv[i] != NULL; i++) {
		for (int j = 0; argv[i][j] != '\0'; j++)
			cout << char(toupper(argv[i][j]));
	}

	cout << endl;

	return 0;
}
