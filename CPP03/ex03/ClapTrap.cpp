#include "ClapTrap.hpp"

ClapTrap::ClapTrap():Name("Pupa"), health(10), energy(10), damage(0) {
	std::cout << "Default constructor ClapTrap " << Name << std::endl;
}

ClapTrap::ClapTrap(std::string name):Name(name),
health(10), energy(10), damage(0) {
	std::cout << "Constructor " << name << " ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor " << " ClapTrap " << Name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
	std::cout << "ClapTrap " << Name << " = ClapTrap " << copy.Name << std::endl;
	this->Name = copy.Name;
	this->health = copy.health;
	this->energy = copy.energy;
	this->damage = copy.damage;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	*this = copy;
	std::cout << "Copy ClapTrap " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energy && health)
	{
		--energy;
		health += amount;
		std::cout << "ClapTrap " << Name << " repaired " << amount << " health points. Health = " << health << std::endl;
		return;
	}
	if (!health)
		std::cout << "ClapTrap " << Name << " dont repaired " << amount << " health points. ClapTrap is died!" << std::endl;
	else if (!energy)
	{
		std::cout << "ClapTrap " << Name << " dont repaired " << amount << " health points. Energy is empty!" << std::endl;
	}
}

void ClapTrap::attack(const std::string &target) {
	if (energy && health)
	{
		--energy;
		std::cout << "ClapTrap " << Name << " attacks "<< target <<", causing " << damage << " points of damage!" << std::endl;
		return;
	}
	if (!health)
		std::cout << "ClapTrap " << Name << " dont attack " << target << ". ClapTrap is died!" << std::endl;
	else if (!energy)
	{
		std::cout << "ClapTrap " << Name << " dont attack " << target << ".Energy is empty!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (health > amount)
		health -= amount;
	else
		health = 0;
	std::cout << "ClapTrap " << Name << " take damage " << amount << ".Health = " << health << "." << std::endl;
}
