//
// Created by aregenia on 15.08.22.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor" << std::endl;
	this->Name = "Default";
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap constructor " << name << std::endl;
	this->Name = name;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap() {
	*this = copy;

	std::cout << "Copy constructor ScavTrap with name " << this->Name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {
	this->Name = copy.Name;
	this->health = copy.health;
	this->energy = copy.energy;
	this->damage = damage;

	std::cout << "Operator= ScavTrap with name " << this->Name << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap " << Name << std::endl;
}

void ScavTrap::guardGate() {
	if (this->health == 0) {
		std::cout << this->Name << " ScavTrap can't guard gate because is dead" << std::endl;
		return;
	}

	std::cout << this->Name << " ScavTrap is now guarding the gate" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->health == 0) {
		std::cout << this->Name << " ScavTrap can't attack because is dead" << std::endl;
		return;
	}

	std::cout << this->Name << " ScavTrap attack " << target
			<< ", causing " << this->damage << " damage"
			<< std::endl;
}