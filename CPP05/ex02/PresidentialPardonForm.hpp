//
// Created by aregenia on 15.10.22.
//

#ifndef CPP_PRESIDENTIALPARDONFORM_H
#define CPP_PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	const std::string	target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &a);
	virtual ~PresidentialPardonForm();

	virtual	void	execute(const Bureaucrat &executor) const;
};


#endif //CPP_PRESIDENTIALPARDONFORM_H
