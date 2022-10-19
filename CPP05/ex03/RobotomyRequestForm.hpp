//
// Created by aregenia on 15.10.22.
//

#ifndef CPP_ROBOTOMYREQUESTFORM_H
#define CPP_ROBOTOMYREQUESTFORM_H

#include "Form.hpp"
#include "cstdlib"

class RobotomyRequestForm : public Form {
private:
	const std::string	target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &a);
	virtual ~RobotomyRequestForm();

	virtual void	execute(const Bureaucrat &executor) const;
};


#endif //CPP_ROBOTOMYREQUESTFORM_H
