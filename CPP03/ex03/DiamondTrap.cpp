//
// Created by aregenia on 21.08.22.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->Name = "DiamondName";
	this->ClapTrap::Name = std::string("DiamondName_clap_name");
	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;

	std::cout << "Default constructor DiamondTrap with name " <<  this->Name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	this->Name = name;
	this->ClapTrap::Name = name.append("_clap_name");
	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;

	std::cout << "Constructor DiamondTrap with name " <<  this->Name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy):ClapTrap(), FragTrap(), ScavTrap() {
	*this = copy;

	std::cout << "Copy constructor DiamondTrap with name " << this->Name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy) {
	this->ClapTrap::Name = copy.ClapTrap::Name;
	this->Name = copy.Name;
	this->health = copy.health;
	this->energy = copy.energy;
	this->damage = copy.damage;

	std::cout << "Operator= DiamondTrap with name " << this->Name << std::endl;

	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Destructor DiamondTrap with name " << this->Name;
}

void	DiamondTrap::attack(const std::string &target) const {
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() const {
	std::cout << "I am " << this->Name << ", my ClapTrap name is "
	<< this->ClapTrap::Name << std::endl;
}