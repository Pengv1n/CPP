//
// Created by aregenia on 23.10.22.
//
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>
#include <iostream>

Base	*generate(void)
{
	switch (std::rand() % 3) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			return NULL;
	}
	return NULL;
}

void	identify(Base *p)
{
	A	*a = dynamic_cast<A *>(p);
	if (a)
	{
		std::cout << "A" << std::endl;
		return;
	}

	B	*b = dynamic_cast<B *>(p);
	if (b)
	{
		std::cout << "B" << std::endl;
		return;
	}

	C	*c = dynamic_cast<C *>(p);
	if (c)
	{
		std::cout << "C" << std::endl;
		return;
	}
}

void	identify(Base &p)
{
	try{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return;
	} catch (std::exception &) {}

	try{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return;
	} catch (std::exception &) {}

	try{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return;
	} catch (std::exception &) {}
}

int	main(void)
{
	srand(time(NULL));
	Base *base[5];
	for (int i = 0; i < 5; i++)
		base[i] = generate();
	std::cout << "Identity with pointer" << std::endl;
	for (int i = 0; i < 5; i++)
		identify(base[i]);
	std::cout << "Identity with reference" << std::endl;
	for (int i = 0; i < 5; i++)
		identify(*base[i]);
}
