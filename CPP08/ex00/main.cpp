#include "easyfind.hpp"

#include <vector>
#include <iostream>
#include <list>

#define size_con 10

template <typename T>
void	dispContainer(T &container) {
	if (container.size() != 0) {
		std::cout << "[ ";
		typename T::iterator	elem = container.begin();
		while (elem != --(--container.end())) {
			std::cout << *elem << ", ";
			++elem;
		}
		std::cout << *(++elem) << " ]" <<  std::endl;
	}
}

int main(void) {
	int find_val;
	int new_val;

	{
		std::cout << "\033[31mVECTOR\033[0m" << std::endl;
		std::vector<int> vec(size_con);
		for (int i = 0; i < size_con; ++i)
			vec[i] = i;
		dispContainer(vec);

		std::cout << std::endl;

		find_val = 5;
		new_val = 6;
		try {
			int &tmp = ::easyfind(vec, find_val);
			std::cout << "Find elem = " << tmp << std::endl;
			std::cout << "Change elem " << tmp << " on " << new_val << std::endl;
			tmp = new_val;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			int &tmp = ::easyfind(vec, find_val);
			std::cout << "Find elem = " << tmp << std::endl;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		dispContainer(vec);

		std::cout << std::endl;

		find_val = 2;
		new_val = 7;
		try {
			int &tmp = ::easyfind(vec, find_val);
			std::cout << "Find elem = " << tmp << std::endl;
			std::cout << "Change elem " << tmp << " on " << new_val << std::endl;
			tmp = new_val;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			int &tmp = ::easyfind(vec, find_val);
			std::cout << "Find elem = " << tmp << std::endl;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		dispContainer(vec);

		std::cout << std::endl;

		find_val = new_val;
		new_val = 100;
		try {
			int &tmp = ::easyfind(vec, find_val);
			std::cout << "Find elem = " << tmp << std::endl;
			std::cout << "Change elem " << tmp << " on " << new_val << std::endl;
			tmp = new_val;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			int &tmp = ::easyfind(vec, find_val);
			std::cout << "Find elem = " << tmp << std::endl;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		dispContainer(vec);
	}

	std::cout << std::endl;

	{
		std::cout << "\033[31mLIST\033[0m" << std::endl;
		std::list<int> vec(size_con);
		int i = 0;
		for (std::list<int>::iterator it = vec.begin(); it != vec.end(); ++it, ++i)
			*it = i;
		dispContainer(vec);

		std::cout << std::endl;

		find_val = 5;
		new_val = 6;
		try {
			int &tmp = ::easyfind(vec, find_val);
			std::cout << "Find elem = " << tmp << std::endl;
			std::cout << "Change elem " << tmp << " on " << new_val << std::endl;
			tmp = new_val;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			int &tmp = ::easyfind(vec, find_val);
			std::cout << "Find elem = " << tmp << std::endl;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		dispContainer(vec);
	}

	return 0;
}