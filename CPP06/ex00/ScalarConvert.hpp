//
// Created by aregenia on 20.10.22.
//

#ifndef CPP_SCALARCONVERT_H
#define CPP_SCALARCONVERT_H

#include <iostream>
#include <exception>

enum TypeLiteral {
	CHAR_,
	INT_,
	FLOAT_,
	DOUBLE_
};

class ScalarConvert {
public:
	ScalarConvert();
	~ScalarConvert();

	printConvert(const std::string &liter);

	class EmptyLiteral : public std::exception {
	public:
		virtual const char	*what() const throw();
	};



private:
	ScalarConvert(const ScalarConvert &copy);
	ScalarConvert	&operator=(const ScalarConvert &a);

	int		convertToInt(const	std::string &liter);
	float	convertToFloat(const	std::string &liter);
	char	convertToChar(const std::string &liter);
	double	convertToDouble(const std::string &liter);
};

#endif //CPP_SCALARCONVERT_H
