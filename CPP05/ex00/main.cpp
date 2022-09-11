//
// Created by Akira Regenia on 9/11/22.
//

#include "Bureaucrat.hpp"

void	sectionTitle(const std::string& title) {
    std::cout	<< std::endl
                 << "*** " << title << " ***"
                 << std::endl << std::endl;
}

int	main() {
    sectionTitle("constructor");

    try {
        Bureaucrat	lupa("lupa", 1);
        std::cout << lupa;
    }
    catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
        Bureaucrat	pupa("pupa", -42);
        std::cout << pupa;
    }
    catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }


    try {
        Bureaucrat	pupa("pupa", 4242);
        std::cout << pupa;
    }
    catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    sectionTitle("increment");

    try {
        Bureaucrat	lupa("lupa", 12);
        std::cout << lupa;
        lupa.incGrade(10);
        std::cout << lupa;
        lupa.incGrade();
        std::cout << lupa;
        lupa.incGrade(); // too high!
        std::cout << lupa;
    }
    catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    sectionTitle("decrement");

    try {
        Bureaucrat	lupa("lupa", 139);
        std::cout << lupa;
        lupa.decGrade(10);
        std::cout << lupa;
        lupa.decGrade();
        std::cout << lupa;
        lupa.decGrade(); // too low!
        std::cout << lupa;
    }
    catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
}