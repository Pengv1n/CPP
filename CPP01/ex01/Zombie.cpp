//
// Created by Akira Regenia on 7/16/22.
//
#include "Zombie.hpp"

void	Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void):name("") {}

Zombie::~Zombie() {
	std::cout << name << std::endl;
}

void	Zombie::setName(std::string name_)
{
	name = name_;
}