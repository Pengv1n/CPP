#include <iostream>
#include "ScalarConvert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cerr << "Number of arguments bot equal 1!" << std::endl;
	else
	{
		try {
			ScalarConvert convert;
			convert.printConvert(argv[1]);
		}
		catch (const std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}