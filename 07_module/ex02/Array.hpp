//
// Created by Nadiia Maliarenko on 06.08.23.
//

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template<typename T>
class Array
{
public:
	Array() : _n(0){
		_arr = new T[]();
	}
	Array(unsigned int n) : _n(n){
		_arr = new T[n]();
	}
	Array(Array &a){
		*this = a;
	}
	Array &operator=(Array &a){
		if (this != &a) {
			this->_n = a._n;
			if (this->_arr)
				delete[] this->_arr;
			this->_arr = new T[a._n];
			for (unsigned int i = 0; i < a._n; ++i)
				this->_arr[i] = a._arr[i];
		}
		return *this;
	}
	T &operator[](unsigned int i){
		if (i >= this->_n)
			throw std::exception();
		return this->_arr[i];
	}
	~Array(){
		delete[] this->_arr;
	};
	unsigned int size(void){
		return this->_n;
	}

private:
	T *_arr;
	unsigned int _n;
};

#endif //ARRAY_HPP
