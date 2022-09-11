//
// Created by aregenia on 24.08.22.
//

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; ++i)
	{
		ideas[i] = std::to_string(i);
	}
	std::cout << "Construction Brain" << std::endl;
}

Brain::Brain(const Brain &copy) {
	for (int i = 0; i < 100; ++i)
	{
		ideas[i] = copy.ideas[i];
	}
	std::cout << "Copy construction Brain" << std::endl;
}

Brain &Brain::operator=(const Brain &a) {
	for (int i = 0; i < 100; ++i)
	{
		ideas[i] = a.ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Destruction Brain" << std::endl;
}