//
// Created by aregenia on 23.08.22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimal") {
	std::cout << this->type << " is create!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a) {
	this->type = a.type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	*this = copy;
	std::cout << "Copy Constructor " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal is destroy!" << std::endl;
}

const std::string &WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound() const {
	std::cout << "What say WrongAnimal?" << std::endl;
}