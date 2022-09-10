//
// Created by aregenia on 30.08.22.
//

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : materia_type(type) {}

AMateria::~AMateria() {}

const std::string &AMateria::getType() const { return materia_type;}

void AMateria::use(ICharacter &target) {
	std::cout << "use AMateria " << target.getName() << std::endl;
}