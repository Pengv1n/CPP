//
// Created by Akira Regenia on 7/17/22.
//
#include "HumanA.hpp"

HumanA::HumanA(const std::string name_, Weapon &weapon_):name(name_), weapon(weapon_){}

HumanA::~HumanA( void )
{
}

void	HumanA::attack() const{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

Weapon&	HumanA::getWeapon( void ) const
{
	return (weapon);
}