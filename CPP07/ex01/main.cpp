//
// Created by Akira Regenia on 10/23/22.
//

#include <iostream>
#include "iter.hpp"
#include "math.h"
#include <cstdlib>

template<typename T>
void	display( const T &whatever )
{
    std::cout << "Variable's value is: " << whatever << std::endl;
}

void	display_str( const std::string &whatever )
{
    std::cout << "Variable's value is: " << whatever << std::endl;
}

template<typename T>
double sqrt_fun(const T &a)
{
    float   ret = sqrt(a);
    std::cout << "sqrt("<< a << ") = " << ret << std::endl;
    return ret;
}

int	main( void )
{
    std::string	strTable[3];
    int			*intTable = new int[5];

    strTable[0] = "Hello";
    strTable[1] = "World";
    strTable[2] = "!";

    ::iter(strTable, 3, display<std::string>);

    std::cout << std::endl;
    ::iter(strTable, 3, &display_str);

    std::cout << std::endl;
    srand(time(NULL));
    for (int i = 0; i < 5; i ++)
        intTable[i] = std::rand() % 100;
    ::iter(intTable, 5, &display<int>);

    std::cout << std::endl;
    ::iter(intTable, 5, sqrt_fun<int>);

    delete []intTable;
}