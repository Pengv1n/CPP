//
// Created by aregenia on 15.10.22.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45), target("DefaultRob") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("Robotomy", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form("Robotomy", 72, 45), target(copy.target) {
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &a) {
	Form::operator=(a);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (!Form::get_signed())
		throw Form::FormNotSigned();
	else if (Form::get_grade_e() < executor.getGrade())
		throw  Form::GradeTooLowException();

	srand(time(NULL));
	if (std::rand() % 2)
		std::cout << target << " has been successfully robotomy!" << std::endl;
	else
		std::cout << target << " hasn\'t been successfully robotomy(((" << std:: endl;
}