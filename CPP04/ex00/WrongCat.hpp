//
// Created by aregenia on 23.08.22.
//

#ifndef CPP_WRONGCAT_H
#define CPP_WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat &operator=(const WrongCat &a);
	WrongCat(const WrongCat &copy);
	virtual ~WrongCat();

	void makeSound() const;
};


#endif //CPP_WRONGCAT_H
