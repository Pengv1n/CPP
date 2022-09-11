//
// Created by Akira Regenia on 9/11/22.
//

#ifndef CPP05_BUREAUCRAT_H
#define CPP05_BUREAUCRAT_H

#include <string>
#include <iostream>
#include <exception>

#define MIN_GRADE   150
#define MAX_GRADE   1

class Bureaucrat {
private:
    const   std::string name;
    short   grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string &n, short g);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &a);
    ~Bureaucrat();

    std::string getName() const;
    short   getGrade()  const;

    void    incGrade(short chg = 1);
    void    decGrade(short chg = 1);

    class   GradeTooLowException : public std::exception
    {
        virtual const char* what() const throw();
    };
    class   GradeTooHighException : public std::exception
    {
        virtual const char* what() const throw();
    };
};

std::ostream    &operator<<(std::ostream &o, const Bureaucrat &b);

#endif //CPP05_BUREAUCRAT_H
