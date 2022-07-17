//
// Created by Akira Regenia on 7/17/22.
//

#ifndef CPP01_WEAPON_HPP
#define CPP01_WEAPON_HPP

#include <iostream>

class	Weapon{
public:
	Weapon(std::string type_);
	const std::string&	getType(void) const;
	void	setType(const std::string &type_);
	~Weapon(void);
private:
	std::string	type;
};

#endif //CPP01_WEAPON_HPP
