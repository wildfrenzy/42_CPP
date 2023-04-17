/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 23:44:23 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/16 23:44:23 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Test.hpp"
using namespace std;

/*Test::Test(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3){
	cout << "Constructor called" << endl;

	//this->a1 = p1;
	cout << "this->a1: " << this->a1 << endl;

	//this->a2 = p2;
	cout << "this->a2: " << this->a2 << endl;

	//this->a3 = p3;
	cout << "this->a3: " << this->a3 << endl;

//	this->foo = 10;
//	cout << "this->foo: " << this->foo << endl;
//	this->bar();
	return ;
}*/

Test::Test(float const f) : a2(42), a3(f){
	cout << "Constructor called" << endl;
}

Test::~Test() {
	cout << "Destructor called" << endl;
}

void Test::bar() const {
	cout << "this->a2: " << this->a2 << endl;
	cout << "this->a3: " << this->a3 << endl;
}

/*
void Test::bar() {
	cout << "bar called" << endl;
	return;
}*/
