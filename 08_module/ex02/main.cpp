/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:55:55 by nmaliare          #+#    #+#             */
/*   Updated: 2023/09/02 18:58:59 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "Top: " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "Size: " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);
	}
	{
		std::cout << "\nList check: " << std::endl;
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << "Top: " << mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << "Size: " << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	{
		MutantStack<int> first;
		first.push(5);
		first.push(13);
		first.push(77);
		std::cout << "\nFirst size: " << first.size() << std::endl;
		std::cout << "First top: " << first.top() << std::endl;

		MutantStack<int>::iterator it = first.begin();
		MutantStack<int>::iterator ite = first.end();

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		MutantStack<int> second = first;
		second.push(99);
		std::cout << "\nSecond size: " << second.size() << std::endl;
		std::cout << "Second top: " << second.top() << std::endl;

		MutantStack<int>::iterator sit = second.begin();
		MutantStack<int>::iterator site = second.end();

		while (sit != site)
		{
			std::cout << *sit << std::endl;
			++sit;
		}
	}
	return 0;
}