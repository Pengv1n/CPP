//
// Created by aregenia on 23.08.22.
//

#include "Animal.hpp"

Animal::Animal():type("Animal") {
	std::cout << this->type << " is create!" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal is destroy!" << std::endl;
}

const std::string &Animal::getType() const {
	return this->type;
}

Animal &Animal::operator=(const Animal &a) {
	this->type = a.type;
	return *this;
}

Animal::Animal(const Animal &copy) {
	*this = copy;
	std::cout << "Copy Constructor " << this->type << std::endl;
}