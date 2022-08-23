//
// Created by aregenia on 15.08.22.
//
#include "ClapTrap.hpp"

int main() {
	ClapTrap *c1 = new ClapTrap();
	ClapTrap *c2 = new ClapTrap("Zoro");
	ClapTrap *c3 = new ClapTrap(*c1);

	std::cout << std::endl;

	c1->attack("Slime");
	c2->attack("Sanji");
	c3->attack("Slime shiny");

	std::cout << std::endl;

	c1->takeDamage(80);
	c2->takeDamage(5);
	c2->takeDamage(5);
	c2->takeDamage(5);
	c2->beRepaired(5);
	c3->takeDamage(5);

	std::cout << std::endl;

	c1->beRepaired(1000);
	c2->beRepaired(1);
	c3->beRepaired(5);

	std::cout << std::endl;

	ClapTrap	c4("Att");
	int i = 12;
	while (--i)
		c4.attack("Target");

	std::cout << std::endl;

	ClapTrap	c5("Rep");
	i = 12;
	while (--i)
		c5.beRepaired(10);

	std::cout << std::endl;

	delete c1;
	delete c2;
	delete c3;
}