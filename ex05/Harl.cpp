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
	std::string complainLevel[4] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
	};
	const int size_array = 4;
	void (Harl::*func[size_array])() = {&Harl::debug,
							   &Harl::info,
							   &Harl::warning,
							   &Harl::error};

	for (int i = 0; i <size_array; ++i)
	{
		if (complainLevel[i] == level) {
			(this->*(func[i]))();
			return;
		}
	}
	std::cerr << "Unknown level" << std::endl;
}

