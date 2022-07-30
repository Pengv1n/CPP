#ifndef CPP01_HARL_HPP
#define CPP01_HARL_HPP

#include <string>
#include <iostream>

class Harl{
private:
	void	debug();
	void	info();
	void	warning();
	void	error();
public:
	Harl();
	~Harl();

	void complain(std::string level);
};

#endif //CPP01_HARL_HPP
