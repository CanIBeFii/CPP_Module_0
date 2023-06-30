#include <iostream>
#include <cstring>

int	main(int argc, char **argv) {
	int len;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i += 1) {
		len = strlen(argv[i]);
		for (int j = 0; j < len; j += 1) {
			std::cout << (char)std::toupper(argv[i][j]);
		}
	}
	std::cout << std::endl;
	return (0);
}