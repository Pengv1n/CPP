//
// Created by aregenia on 23.08.22.
//

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << this->type << " is create!" << std::endl;
}

Dog &Dog::operator=(const Dog &a) {
	this->type = a.type;
	this->brain = new Brain(*a.brain);
	return *this;
}

Dog::Dog(const Dog &copy) : Animal() {
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Copy Constructor " << this->type << std::endl;
}

Dog::~Dog() {
	std::cout << this->type << " is destroy!" << std::endl;
	delete brain;
}

void Dog::makeSound() const {
	std::cout << "Bark!" << std::endl;
}

Brain *Dog::getBrain() const{
	return brain;
}

Animal &Dog::operator=(Animal const &a)
{
	std::cout << "Assign Animal" << std::endl;
	this->type = a.getType();
	*(this->brain) = *(a.getBrain());
	return *this;
}