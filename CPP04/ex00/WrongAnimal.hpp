//
// Created by aregenia on 23.08.22.
//

#ifndef CPP_WRONGANIMAL_H
#define CPP_WRONGANIMAL_H

#include <string>
#include <iostream>

class WrongAnimal {
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal	&operator=(const WrongAnimal &a);
	WrongAnimal(const WrongAnimal &copy);
	virtual ~WrongAnimal();

	const	std::string &getType() const;
	void makeSound() const;
};


#endif //CPP_WRONGANIMAL_H
