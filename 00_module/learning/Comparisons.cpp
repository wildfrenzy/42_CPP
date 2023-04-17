//
// Created by nmaliare on 4/17/23.
//

#include "Comparisons.hpp"

Comparisons::Comparisons(int v) : _foo(v) {
	cout << "Constructor called" << endl;
}

Comparisons::~Comparisons() {
	cout << "Destructor called" << endl;
}

int Comparisons::getFoo() const {
	return this->_foo;
}

int Comparisons::compare(Comparisons *other) const {
	if (this->_foo < other->getFoo())
		return -1;
	else if (this->_foo > other->getFoo())
		return 1;
	return 0;
}