//
// Created by aregenia on 30.08.22.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &copy) : AMateria(copy.getType()) {}

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &a) {
	this->materia_type = a.getType();
	return *this;
}

AMateria *Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}