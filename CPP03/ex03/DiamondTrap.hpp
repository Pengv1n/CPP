//
// Created by aregenia on 21.08.22.
//

#ifndef CPP_DIAMONDTRAP_H
#define CPP_DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap:public FragTrap, public ScavTrap {
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& copy);
	~DiamondTrap();

	DiamondTrap	&operator=(const DiamondTrap& copy);

	void	attack(const std::string& target) const;
	void whoAmI() const;
private:
	std::string	Name;
};


#endif //CPP_DIAMONDTRAP_H
