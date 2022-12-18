
#include <iostream>
#include <list>
#include "MutantStack.hpp"

void list_version() {
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "top: " << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "top: " << mstack.back() << std::endl;

	std::cout << "---" << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(42);
	mstack.push_back(4242);
	mstack.push_back(24);
	mstack.push_back(2424);
	mstack.push_back(0);

	{
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;

		std::cout << "mstack content (bottom to top): " << std::endl;
		while(it != ite)
		{
			std::cout << *it;
			if (++it == ite)
				std::cout << std::endl;
			else
				std::cout << ", ";
		}
	}

	{
		std::list<int>::const_iterator it = mstack.begin();
		std::list<int>::const_iterator ite = mstack.end();

		++it;
		--it;

		std::cout << "mstack content (bottom to top): " << std::endl;
		while(it != ite)
		{
			std::cout << *it;
			if (++it == ite)
				std::cout << std::endl;
			else
				std::cout << ", ";
		}
	}

	{
		std::list<int>::reverse_iterator it = mstack.rbegin();
		std::list<int>::reverse_iterator ite = mstack.rend();

		++it;
		--it;

		std::cout << "mstack content (top to bottom): " << std::endl;
		while(it != ite)
		{
			std::cout << *it;
			if (++it == ite)
				std::cout << std::endl;
			else
				std::cout << ", ";
		}
	}

	{
		std::list<int>::const_reverse_iterator it = mstack.rbegin();
		std::list<int>::const_reverse_iterator ite = mstack.rend();

		++it;
		--it;

		std::cout << "mstack content (top to bottom): " << std::endl;
		while(it != ite)
		{
			std::cout << *it;
			if (++it == ite)
				std::cout << std::endl;
			else
				std::cout << ", ";
		}
	}

	std::cout << "---" << std::endl;

	{
		std::list<int> s(mstack);
		std::list<int> st = mstack;

		std::cout << "size: " << st.size() << " (" << mstack.size() << ")" << std::endl;
		std::cout << "top: " << st.back() << " (" << mstack.back() << ")" << std::endl;
		st.pop_back();
		std::cout << "size: " << st.size() << " (" << mstack.size() << ")" << std::endl;
		std::cout << "top: " << st.back() << " (" << mstack.back() << ")" << std::endl;
	}
}

int main() {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "top: " << mstack.top() << std::endl;

	std::cout << "---" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);
	mstack.push(4242);
	mstack.push(24);
	mstack.push(2424);
	mstack.push(0);

	{
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		std::cout << "mstack content (bottom to top): " << std::endl;
		while(it != ite)
		{
			std::cout << *it;
			if (++it == ite)
				std::cout << std::endl;
			else
				std::cout << ", ";
		}
	}

	{
		MutantStack<int>::const_iterator it = mstack.begin();
		MutantStack<int>::const_iterator ite = mstack.end();

		++it;
		--it;

		std::cout << "mstack content (bottom to top): " << std::endl;
		while(it != ite)
		{
			std::cout << *it;
			if (++it == ite)
				std::cout << std::endl;
			else
				std::cout << ", ";
		}
	}

	{
		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite = mstack.rend();

		++it;
		--it;

		std::cout << "mstack content (top to bottom): " << std::endl;
		while(it != ite)
		{
			std::cout << *it;
			if (++it == ite)
				std::cout << std::endl;
			else
				std::cout << ", ";
		}
	}

	{
		MutantStack<int>::const_reverse_iterator it = mstack.rbegin();
		MutantStack<int>::const_reverse_iterator ite = mstack.rend();

		++it;
		--it;

		std::cout << "mstack content (top to bottom): " << std::endl;
		while(it != ite)
		{
			std::cout << *it;
			if (++it == ite)
				std::cout << std::endl;
			else
				std::cout << ", ";
		}
	}

	std::cout << "---" << std::endl;

	{
		std::stack<int> s(mstack);
		MutantStack<int> st = mstack;

		std::cout << "size: " << st.size() << " (" << mstack.size() << ")" << std::endl;
		std::cout << "top: " << st.top() << " (" << mstack.top() << ")" << std::endl;
		st.pop();
		std::cout << "size: " << st.size() << " (" << mstack.size() << ")" << std::endl;
		std::cout << "top: " << st.top() << " (" << mstack.top() << ")" << std::endl;
	}
	std::cout << "List version:" << std::endl;
	list_version();
	return 0;
}
