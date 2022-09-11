//
// Created by aregenia on 24.08.22.
//

#ifndef CPP_BRAIN_H
#define CPP_BRAIN_H

#include <string>
#include <sstream>
#include <iostream>

class Brain {
public:
	Brain();
	Brain(const Brain &copy);
	Brain &operator=(const Brain &a);
	virtual	~Brain();

	std::string	ideas[100];
};


#endif //CPP_BRAIN_H
