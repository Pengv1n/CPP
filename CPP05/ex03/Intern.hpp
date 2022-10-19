//
// Created by aregenia on 19.10.22.
//

#ifndef CPP_INTERN_H
#define CPP_INTERN_H

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

enum FormType {
	SHRUBBERY,
	ROBOTOMY,
	PRESIDENTAL,
	OTHER
};

class Intern {
public:
	Intern();
	Intern(const Intern &copy);
	Intern	&operator=(const Intern& a);
	~Intern();

	Form *makeForm(std::string form_type, std::string form_target);
private:
	FormType	FindIdxFormType(std::string type);
};


#endif //CPP_INTERN_H
