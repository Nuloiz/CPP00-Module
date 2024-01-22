#include <iostream>

int main(int argc, char **argv) {
	int c = 0;
	int d = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	while (argv[d])
	{
		while (argv[d][c]){
			std::cout << (char )toupper(argv[d][c]);
			c++;
		}
		d++;
		c = 0;
	}
	std::cout << std::endl;
	return 0;
}