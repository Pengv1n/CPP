//
// Created by Akira Regenia on 9/11/22.
//

#ifndef CPP05_FORM_H
#define CPP05_FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    const std::string   name;
    bool                is_signed;
    const short         grade_sign;
    const short         grade_exec;
public:
    Form();
    Form(const std::string &name, short grade_s, short grade_e);
    Form(const Form &copy);
    Form &operator=(const Form &a);
    virtual ~Form();

    const   std::string &getName() const;
    bool    get_signed() const;
    short   get_grade_s() const;
    short   get_grade_e() const;

    void    beSigned(const Bureaucrat &b);
	virtual void	execute(Bureaucrat const &executor) const = 0;

    class GradeTooLowException: public std::exception {
        virtual const char*	what() const throw();
    };

    class GradeTooHighException: public std::exception {
        virtual const char*	what() const throw();
    };

    class AlreadySignedException: public std::exception {
        virtual const char*	what() const throw();
    };

    class FormNotSigned: public std::exception {
        virtual const char*	what() const throw();
    };
};

std::ostream&	operator<<(std::ostream &o, const Form& form);

#endif //CPP05_FORM_H
