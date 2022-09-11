//
// Created by aregenia on 23.08.22.
//

#include "Animal.hpp"

Animal::Animal(){
	std::cout << this->type << " is create!" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal is destroy!" << std::endl;
}

Animal &Animal::operator=(const Animal &a) {
	this->type = a.type;
	return *this;
}

Animal::Animal(const Animal &copy) {
	*this = copy;
	std::cout << "Copy Constructor " << this->type << std::endl;
}

const std::string &Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "What say Animal?" << std::endl;
}