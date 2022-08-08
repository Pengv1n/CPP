#include <iostream>
#include "Zombie.hpp"

int main() {
	{
		const int N = 6;
		std::cout << "Create many Zombies" << std::endl;
		Zombie*	a = zombieHorde(N, "Piter");

		for (int i = 0; i < N; ++i)
		{
			a[i].announce();
		}

		delete[] a;
	}
	return 0;
}
