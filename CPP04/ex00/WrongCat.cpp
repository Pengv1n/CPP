//
// Created by aregenia on 23.08.22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << this->type << " is create!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &a) {
	this->type = a.type;
	return *this;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal() {
	*this = copy;
	std::cout << "Copy Constructor " << this->type << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << this->type << " is destroy!" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Wrong Meoow.." << std::endl;
}