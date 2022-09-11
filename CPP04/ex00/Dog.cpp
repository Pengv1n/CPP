//
// Created by aregenia on 23.08.22.
//

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << this->type << " is create!" << std::endl;
}

Dog &Dog::operator=(const Dog &a) {
	this->type = a.type;
	return *this;
}

Dog::Dog(const Dog &copy) : Animal() {
	*this = copy;
	std::cout << "Copy Constructor " << this->type << std::endl;
}

Dog::~Dog() {
	std::cout << this->type << " is destroy!" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Bark!" << std::endl;
}