//
// Created by nmaliare on 4/17/23.
//
#include "Visibility.hpp"

Visibility::Visibility() {
	cout << "Constructor called" << endl;

	this->publicFoo = 0;
	cout << "this->publicFoo: " << this->publicFoo << endl;
	this->_privateFoo = 0;
	cout << "this->_ptivateFoo: " << this->_privateFoo << endl;

	this->publicBar();
	this->_privateBar();

}

Visibility::~Visibility() {
	cout << "Destructor called" << endl;
}

void Visibility::publicBar() const {
	cout << "publicBar" << endl;
}

void Visibility::_privateBar() const {
	cout << "_privateBar" << endl;
}