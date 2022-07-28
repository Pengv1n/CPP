#include "fstream"
#include <iostream>

std::string	replace(std::string line, std::string const s1, std::string const s2)
{
	std::string	out;
	size_t	i = 0;
	size_t	end = 0;

	while (true)
	{
		end = line.find(s1, i);
		if (end == std::string::npos)
			break;

		out.append(line, i, end - i);
		i = end + s1.size();
		out.append(s2);
	}
	out.append(line, i);
	return out;
}

int	main(int argc, char**  argv)
{
	if (argc != 4)
	{
		std::cerr << "Invalid number argument's" << std::endl;
		return 1;
	}
	else
	{
		std::string	name_input_file(argv[1]);
		std::string	str_1(argv[2]);
		std::string	str_2(argv[3]);

		if (name_input_file.empty() || str_1.empty() || str_2.empty()) {
			std::cerr << "Error: empty argument" << std::endl;
			return 1;
		}

		std::ifstream	input_file(name_input_file.c_str());

		if (input_file.is_open())
		{
			std::string	line;
			std::ofstream	output_file((name_input_file + ".replace").c_str(), std::fstream::in | std::ifstream::trunc);
			if (!output_file.is_open())
			{
				std::cerr << "Error open output file" << std::endl;
				input_file.close();
				return 1;
			}
			while (std::getline(input_file, line, '\n').good())
			{
				output_file << replace(line, str_1, str_2);
				if (!input_file.eof())
					output_file << '\n';
			}

			output_file.close();
			input_file.close();
		}
		else
		{
			std::cerr << "Error open input file" << std::endl;
			return 1;
		}
	}
	return 0;
}