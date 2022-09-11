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

void ScavTrap::attack(const std::string& target) const {
	if (this->health == 0) {
		std::cout << this->Name << " ScavTrap can't attack because is dead" << std::endl;
		return;
	}

	std::cout << this->Name << " ScavTrap attack " << target
			<< ", causing " << this->damage << " damage"
			<< std::endl;
}