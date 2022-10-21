#include <iostream>
#include "ScalarConvert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cerr << "Number of arguments bot equal 1!" << std::endl;
	else
	{
		ScalarConvert obj(argv[1]);
	}
	return (0);
}