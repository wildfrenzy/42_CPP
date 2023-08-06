//
// Created by Nadiia Maliarenko on 06.08.23.
//

#include "Span.hpp"
#include <exception>
#include <algorithm>
#include <iostream>

Span::Span() : _N(0), _len(0), _arr(new int[0]){}

Span::Span(Span const &s) {
	*this = s;
}

Span::Span(unsigned int N) : _N(N), _len(0), _arr(new int[N]) {}

Span &Span::operator=(Span const &s) {
	if (this != &s) {
		this->_N = s._N;
		this->_len = s._len;
		if (this->_arr)
			delete[] this->_arr;
		this->_arr = new int[s._N];
		for (unsigned int i = 0; i < s._len; ++i)
			this->_arr[i] = s._arr[i];
	}
	return *this;
}

Span::~Span() {delete[] this->_arr;}

void Span::addNumber(int num) {
	if (_len != _N)
	{
		this->_arr[_len] = num;
		_len += 1;
	} else throw std::exception();
}

void Span::addNumber(unsigned int start, unsigned int end) {
	if (_len != _N && start < _N && end < _N && _len <= start)
	{
		srand(time(0));
		for (unsigned int i = start; i < end; i++)
			this->_arr[i] = std::rand() / 1000000;
		_len += end - start + 1;

//		for (unsigned int i = 0; i < end; ++i) {
//			std::cout << "[ " << this->_arr[i] << " ]" ;
//		}
//		std::cout << std::endl;

	} else throw std::exception();
}

unsigned int Span::longestSpan() {
	std::pair<int *, int *> mnmx = std::minmax_element(&(this->_arr[0]), (this->_arr + this->_len));
	return *mnmx.second - *mnmx.first;
}

unsigned int Span::shortestSpan() {
	std::sort(this->_arr, this->_arr + this->_len, std::greater<int>());
	int *tmp = new int[this->_len];
	std::transform(this->_arr, this->_arr + this->_len, this->_arr + 1,tmp, std::minus<int>());
	int min = *std::min_element(tmp, tmp + this->_len - 1);
	delete [] tmp;
	return min;
}