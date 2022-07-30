#ifndef CPP01_HUMANB_HPP
#define CPP01_HUMANB_HPP

#include "Weapon.hpp"

class	HumanB{
public:
	HumanB(const std::string &name_);
	~HumanB(void);

	void	attack() const;
	void	setWeapon(Weapon &weapon_);
	Weapon&	getWeapon( void ) const;
private:
	const std::string	name;
	Weapon	*weapon;
};

#endif //CPP01_HUMANB_HPP
