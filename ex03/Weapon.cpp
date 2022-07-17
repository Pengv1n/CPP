//
// Created by Akira Regenia on 7/17/22.
//
#include "Weapon.hpp"

Weapon::Weapon(std::string type_):type(type_){}

const std::string&	Weapon::getType() const
{
	return type;
}

void	Weapon::setType(const std::string &type_)
{
	type = type_;
}

Weapon::~Weapon( void )
{
}