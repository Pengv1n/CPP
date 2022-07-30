#include <iostream>
#include "Zombie.hpp"

int main() {
	{
		std::cout << "Creating zombie with name - Alex:" << std::endl;
		Zombie	a("Alex");
		a.announce();
	}

	{
		std::cout << "Creating NEW zombie with name - Martin" << std::endl;
		Zombie *b = newZombie("Martin");
		b->announce();

		delete b;
	}

	{
		std::cout << "Creating RANDOM zombie with name - Melman" << std::endl;
		randomChump("Melman");
	}

	return 0;
}
