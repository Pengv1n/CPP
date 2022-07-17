//
// Created by Akira Regenia on 7/16/22.
//

#ifndef CPP01_ZOMBIE_HPP
#define CPP01_ZOMBIE_HPP

#include <iostream>

class	Zombie{
public:
	~Zombie();
	Zombie	(std::string name_);
	void	announce( void );
private:
	std::string	name;
};

Zombie*	newZombie(std::string);

void randomChump(std::string name);

#endif //CPP01_ZOMBIE_HPP
