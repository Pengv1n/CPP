#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define NUMBER_OF_ANIMALS 4

int main()
{
	Animal	*animals[NUMBER_OF_ANIMALS];
	Brain	*brain;

	for (int i = 0; i < NUMBER_OF_ANIMALS; ++i)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}
	brain = animals[0]->getBrain();
	brain->ideas[99] = "IDEYA";
	std::cout << brain->ideas[0] << '\n'
			  << brain->ideas[22] << '\n'
			  << animals[0]->getBrain()->ideas[99] << std::endl
			  << animals[2]->getBrain()->ideas[99] << std::endl;
	for (int i = 0; i < NUMBER_OF_ANIMALS; ++i)
		delete animals[i];
}
