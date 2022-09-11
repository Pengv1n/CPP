//
// Created by aregenia on 15.08.22.
//

#ifndef CPP_SCAVTRAP_H
#define CPP_SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	virtual ~ScavTrap();

	virtual void attack(const std::string& target) const;
	void guardGate();
};


#endif //CPP_SCAVTRAP_H
