#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; ++i)
	{
		for (int c = 0; c < std::strlen(argv[i]); ++c)
		{
			std::cout << (char)std::toupper(argv[i][c]);
		}
		std::cout << ((i < argc - 1) ? " " : "\n");
	}
	return (0);
}
