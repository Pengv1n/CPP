//
// Created by aregenia on 15.08.22.
//

#ifndef CPP_SCAVTRAP_H
#define CPP_SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& copy);
	~ScavTrap();

	ScavTrap& operator=(const ScavTrap& copy);

	void attack(const std::string& target);
	void guardGate();
};


#endif //CPP_SCAVTRAP_H
