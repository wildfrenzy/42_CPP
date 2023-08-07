//
// Created by Nadiia Maliarenko on 08.08.23.
//

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(){
		return this->c.begin();
	};
	iterator end(){
		return this->c.end();
	};
};


#endif /// MUTANTSTACK_HPP
