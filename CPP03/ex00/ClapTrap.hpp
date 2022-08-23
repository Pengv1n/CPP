//
// Created by aregenia on 15.08.22.
//

#ifndef CPP03_CLAPTRAP_H
#define CPP03_CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap {
private:
	std::string		Name;
	unsigned int	health;
	unsigned int	energy;
	unsigned int	damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &copy);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif //CPP03_CLAPTRAP_H
