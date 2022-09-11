//
// Created by aregenia on 23.08.22.
//

#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << this->type << " is create!" << std::endl;
}

Cat &Cat::operator=(const Cat &a) {
	this->type = a.type;
	return *this;
}

Cat::Cat(const Cat &copy) : Animal() {
	*this = copy;
	std::cout << "Copy Constructor " << this->type << std::endl;
}

Cat::~Cat() {
	std::cout << this->type << " is destroy!" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meoow.." << std::endl;
}