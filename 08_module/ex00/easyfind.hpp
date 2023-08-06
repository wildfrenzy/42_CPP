//
// Created by Nadiia Maliarenko on 06.08.23.
//

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>

template <typename T>
void easyfind (T potato, int i){
	if (std::find(potato.begin(), potato.end(), i) == potato.end())
		throw std::exception();
}

#endif //EASYFIND_HPP
