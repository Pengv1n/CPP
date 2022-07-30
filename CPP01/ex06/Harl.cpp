#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() {
	std::cout
			<< "[ DEBUG ]\n"
			<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
			<< " I just love it!"
			<< std::endl;
}

void Harl::info() {
	std::cout
			<< "[ INFO ]\n"
			<< "I cannot believe adding extra bacon cost more money."
			<< " You don’t put enough!"
			<< " If you did I would not have to ask for it!"
			<< std::endl;
}

void Harl::warning() {
	std::cout
			<< "[ WARNING ]\n"
			<< "I think I deserve to have some extra bacon for free."
			<< " I’ve been coming here for years and you just started working here last month."
			<< std::endl;
}

void Harl::error() {
	std::cout
			<< "[ ERROR ]\n"
			<< "This is unacceptable, I want to speak to the manager now."
			<< std::endl;
}

void Harl::complain(std::string level) {
	const int size_array = 4;

	std::string complainLevel[size_array] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
	};

	void (Harl::*func[size_array])() = {&Harl::debug,
							   &Harl::info,
							   &Harl::warning,
							   &Harl::error};

	int lvl = -1;
	for (int i = 0; i < size_array; ++i)
	{
		if (complainLevel[i] == level) {
			lvl = i;
			break;
		}
	}

	switch (lvl) {
		case 0:
			{(this->*(func[0]))();
			break;}
		case 1:
			{(this->*(func[1]))();
			break;}
		case 2:
			{(this->*(func[2]))();
			break;}
		case 3:
			{(this->*(func[3]))();
			break;}
		default:
			{std::cerr << "Unknown level" << std::endl;
			break;}
	}
}

