//
// Created by aregenia on 21.08.22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name){
	this->Name = name;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;

	std::cout << "Constructor FragTrap with name " << Name << std::endl;
}

FragTrap::FragTrap(){
	this->Name = "FragName";
	this->health = 100;
	this->energy = 100;
	this->damage = 30;

	std::cout << "Default constructor FragTrap with name " << Name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap with name " << Name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy):ClapTrap() {
	*this = copy;

	std::cout << "Copy constructor with name " << this->Name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy) {
	this->Name = copy.Name;
	this->health = copy.health;
	this->energy = copy.energy;
	this->damage = copy.damage;

	std::cout << "Operator= FragTrap with name " << this->Name << std::endl;
	return *this;
}

void FragTrap::highFivesGuys() {
	if (!this->health)
	{
		std::cout << this->Name << " FragTrap hight fives because is dead" << std::endl;
		return;
	}

	std::cout << this->Name << " FragTrap hight fives guys!" << std::endl;
}