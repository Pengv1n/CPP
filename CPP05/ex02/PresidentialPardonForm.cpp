//
// Created by aregenia on 15.10.22.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentForm", 25, 5), target("PresTarget") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form("PresidentForm", 25, 5), target(copy.target) {
	*this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &a) {
	Form::operator=(a);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (!Form::get_signed())
		throw Form::FormNotSigned();
	else if (Form::get_grade_e() < executor.getGrade())
		throw  Form::GradeTooLowException();

	std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}