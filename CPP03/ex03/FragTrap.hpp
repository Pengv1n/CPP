//
// Created by aregenia on 21.08.22.
//

#ifndef CPP_FRAGTRAP_H
#define CPP_FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& copy);
	virtual ~FragTrap();

	FragTrap& operator=(const FragTrap& copy);

	void highFivesGuys(void);
};

#endif //CPP_FRAGTRAP_H
