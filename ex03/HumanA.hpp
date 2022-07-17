//
// Created by Akira Regenia on 7/17/22.
//

#ifndef CPP01_HUMANA_HPP
#define CPP01_HUMANA_HPP

#include "Weapon.hpp"

class	HumanA{
public:
	HumanA(const std::string name_, Weapon &weapon_);
	~HumanA();

	void	attack() const;
	Weapon&	getWeapon( void ) const;
private:
	const std::string	name;
	Weapon	&weapon;
};

#endif //CPP01_HUMANA_HPP
