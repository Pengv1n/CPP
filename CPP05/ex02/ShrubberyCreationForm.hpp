//
// Created by aregenia on 15.10.22.
//

#ifndef CPP_SHRUBBERYCREATIONFORM_H
#define CPP_SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include "fstream"

class ShrubberyCreationForm : public Form {
private:
	const std::string	target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &a);
	virtual ~ShrubberyCreationForm();

	virtual void	execute(const Bureaucrat &executor) const;
};

#endif //CPP_SHRUBBERYCREATIONFORM_H
