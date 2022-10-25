#include <iostream>
#include "MutantStack.hpp"
#include <list>

int main(void)
{
	{
		std::cout << "\t\033[31mDEQUE\033[0m\n";
		std::cout << "\033[31m------Int--------\033[0m" << std::endl;
		MutantStack<int> mstack;
		std::cout << "Add: " << 5 << std::endl;
		mstack.push(5);
		std::cout << "Add: " << 17 << std::endl;
		mstack.push(17);
		std::cout << "Top: " << mstack.top() << std::endl;
		std::cout << "Size of stack: " << mstack.size() << std::endl;
		std::cout << "Delete top element" << std::endl;
		mstack.pop();
		std::cout << "Size of stack: " << mstack.size() << std::endl;
		std::cout << "Add: " << 3 << std::endl;
		mstack.push(3);
		std::cout << "Top: " << mstack.top() << std::endl;
		std::cout << "Add: " << 5 << std::endl;
		mstack.push(5);
		std::cout << "Add: " << 737 << std::endl;
		mstack.push(737);
		std::cout << "Top: " << mstack.top() << std::endl;
		std::cout << "Delete top element" << std::endl;
		mstack.pop();
		std::cout << "Top: " << mstack.top() << std::endl;
		std::cout << "Add: " << 0 << std::endl;
		mstack.push(0);
		std::cout << "Size of stack: " << mstack.size() << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << " | ";
			++it;
		}
		std::cout << std::endl;
		std::cout << "\n\033[31m------Copy stack--------\033[0m" << std::endl;
		MutantStack<int> s(mstack);
		MutantStack<int>::iterator its = s.begin();
		MutantStack<int>::iterator itse = s.end();
		while (its != itse) {
			std::cout << *its << " | ";
			++its;
		}
		std::cout << std::endl;

		std::cout << "\n\033[31m------ EMPTY TEST ------\033[0m" << std::endl;

		MutantStack<int> estack;

		if (estack.empty())
			std::cout << "stack is empty" << std::endl;

		std::cout << "\n\033[31m------ PUSH TEST ------\033[0m" << std::endl;

		for (int i = 0; i < 5; i++) {
			estack.push(i);
		}
		it = estack.begin();
		ite = estack.end();
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::cout << "----------------------------------------------------------" <<  std::endl;

	{
		std::cout << "\t\x1B[33mLIST\033[0m\n";
		std::cout << "\x1B[33m------Int--------\033[0m" << std::endl;
		MutantStack<int, std::list<int> > mstack;
		std::cout << "Add: " << 5 << std::endl;
		mstack.push(5);
		std::cout << "Add: " << 17 << std::endl;
		mstack.push(17);
		std::cout << "Top: " << mstack.top() << std::endl;
		std::cout << "Size of stack: " << mstack.size() << std::endl;
		std::cout << "Delete top element" << std::endl;
		mstack.pop();
		std::cout << "Size of stack: " << mstack.size() << std::endl;
		std::cout << "Add: " << 3 << std::endl;
		mstack.push(3);
		std::cout << "Top: " << mstack.top() << std::endl;
		std::cout << "Add: " << 5 << std::endl;
		mstack.push(5);
		std::cout << "Add: " << 737 << std::endl;
		mstack.push(737);
		std::cout << "Top: " << mstack.top() << std::endl;
		std::cout << "Delete top element" << std::endl;
		mstack.pop();
		std::cout << "Top: " << mstack.top() << std::endl;
		std::cout << "Add: " << 0 << std::endl;
		mstack.push(0);
		std::cout << "Size of stack: " << mstack.size() << std::endl;
		MutantStack<int, std::list<int> >::iterator it = mstack.begin();
		MutantStack<int, std::list<int> >::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << " | ";
			++it;
		}
		std::cout << std::endl;
		std::cout << "\n\x1B[33m------Copy stack--------\033[0m" << std::endl;
		MutantStack<int, std::list<int> > s(mstack);
		MutantStack<int, std::list<int> >::iterator its = s.begin();
		MutantStack<int, std::list<int> >::iterator itse = s.end();
		while (its != itse) {
			std::cout << *its << " | ";
			++its;
		}
		std::cout << std::endl;

		std::cout << "\n\x1B[33m------ EMPTY TEST ------\033[0m" << std::endl;

		MutantStack<int, std::list<int> > estack;

		if (estack.empty())
			std::cout << "stack is empty" << std::endl;

		std::cout << "\n\x1B[33m------ PUSH TEST ------\033[0m" << std::endl;

		for (int i = 0; i < 5; i++) {
			estack.push(i);
		}
		it = estack.begin();
		ite = estack.end();
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
	}
}