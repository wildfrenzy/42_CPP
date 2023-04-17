//
// Created by nmaliare on 4/17/23.
//

#include "Access.hpp"

Access::Access() {
	cout << "Constructor called" << endl;

	this->setFoo(0);
	cout << "this->getFoo: " << this->getFoo() << endl;
}

Access::~Access() {
	cout << "Destructor called" << endl;
}

int Access::getFoo() const {
	return this->_foo;
}

void Access::setFoo(int v) {
	if (v >= 0)
		this->_foo = v;
	return ;
}