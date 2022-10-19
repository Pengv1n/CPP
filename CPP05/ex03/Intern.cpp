//
// Created by aregenia on 19.10.22.
//

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &copy) {
	*this = copy;
}

Intern &Intern::operator=(const Intern &a) {
	(void) a;
	return (*this);
}

FormType Intern::FindIdxFormType(std::string type) {
	const std::string types[3] =
	{"shrubbery creation", "robotomy request", "presidental pardon"};
	int i = 0;
	for (; type != types[i]; i++);
	return static_cast<FormType>(i);
}

Form *Intern::makeForm(std::string form_type, std::string form_target) {
	switch (FindIdxFormType(form_type)) {
		case SHRUBBERY:
			std::cout << "Intern creates form \"" << form_target << "\"\n";
			return new ShrubberyCreationForm(form_target);
		case ROBOTOMY:
			std::cout << "Intern creates form \"" << form_target << "\"\n";
			return new RobotomyRequestForm(form_target);
		case PRESIDENTAL:
			std::cout << "Intern creates form \"" << form_target << "\"\n";
			return new PresidentialPardonForm(form_target);
		default:
			std::cerr << "Type of form " << "\"" << form_type
			<< "\"" << " don\'t exists!\n";
			return NULL;
	}
}