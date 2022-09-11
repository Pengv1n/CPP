#include "Harl.hpp"

int	main(int argc, char** argv)
{
	if (argc == 1)
	{
		std::cerr << "Invalid number arguments" << std::endl;
		return 1;
	}

	Harl a;

	for (int i = 1; i < argc; ++i)
	{
		a.complain(argv[i]);
	}
	return 0;
}