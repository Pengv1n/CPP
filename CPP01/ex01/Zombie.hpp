//
// Created by Akira Regenia on 7/16/22.
//

#ifndef CPP01_ZOMBIE_HPP
#define CPP01_ZOMBIE_HPP

#include <iostream>

class	Zombie{
public:
	void	setName(std::string name_);
	~Zombie();
	Zombie	(void);
	void	announce( void );
private:
	std::string	name;
};

Zombie*	newZombie(std::string);

void randomChump(std::string name);

Zombie* zombieHorde( int N, std::string name );

#endif //CPP01_ZOMBIE_HPP
