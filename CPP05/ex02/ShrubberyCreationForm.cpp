//
// Created by aregenia on 15.10.22.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyForm", 145, 137), target("DefaultTarger") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form("ShrubberyForm", 145, 137), target(copy.target) {
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a) {
	Form::operator=(a);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!Form::get_signed())
		throw Form::FormNotSigned();
	else if (Form::get_grade_e() < executor.getGrade())
		throw  Form::GradeTooLowException();

	std::fstream strm;
	strm.open(("./" + target + "_shrubbery").c_str(), std::ios::out);
	strm << "          .     .  .      +     .      .          ." << std::endl;
	strm << "     .       .      .     #       .           ." << std::endl;
	strm << "        .      .         ###            .      .      ." << std::endl;
	strm << "      .      .   *#:. .:##*##:. .:#*  .      ." << std::endl;
	strm << "          .      . *####*###*####*  ." << std::endl;
	strm << "       .     *#:.    .:#*###*#:.    .:#*  .        .       ." << std::endl;
	strm << "  .             *#########*#########*        .        ." << std::endl;
	strm << "        .    *#:.  *####*###*####*  .:#*   .       ." << std::endl;
	strm << "     .     .  *#######**##*##**#######*                  ." << std::endl;
	strm << "                .*##*#####*#####*##*           .      ." << std::endl;
	strm << "    .   *#:. ...  .:##*###*###*##:.  ... .:#*     ." << std::endl;
	strm << "      .     *#######*##*#####*##*#######*      .     ." << std::endl;
	strm << "    .    .     *#####**#######**#####*    .      ." << std::endl;
	strm << "            .     *      000      *    .     ." << std::endl;
	strm << "       .         .   .   000     .        .       ." << std::endl;
	strm << ".. .. ..................O000O........................ ...... ..." << std::endl;

}
