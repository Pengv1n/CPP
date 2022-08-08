#include "HumanB.hpp"

HumanB::HumanB(const std::string &name_):name(name_){}

void	HumanB::attack() const{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon_)
{
	*weapon = weapon_;
}

Weapon&	HumanB::getWeapon( void ) const
{
	return *weapon;
}

HumanB::~HumanB() {

}