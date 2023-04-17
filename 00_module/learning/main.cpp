/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:52:02 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/15 21:52:04 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

//#include "Test.hpp"
//#include "Visibility.hpp"
//#include "Access.hpp"
//#include "Comparisons.hpp"
#include "NonMember.hpp"

void f0()
{
	NonMember instance;
	cout << "inst num: " << NonMember::getNbInst() << endl;
}

void f1()
{
	NonMember instance;
	cout << "inst num: " << NonMember::getNbInst() << endl;
	f0();
}

int main()
{
	cout << "inst num: " << NonMember::getNbInst() << endl;
	f1();
	cout << "inst num: " << NonMember::getNbInst() << endl;

/*	Comparisons instance1(42);
	Comparisons instance2(42);

	if (&instance1 == &instance1)
		cout << "1 and 1 are physically equal" << endl;
	else
		cout << "1 and 1 are not physically equal" << endl;

	if (&instance1 == &instance2)
		cout << "1 and 2 are physically equal" << endl;
	else
		cout << "1 and 2 are not physically equal" << endl;

	if (instance1.compare(&instance1) == 0)
		cout << "1 and 1 are structurally equal" << endl;
	else
		cout << "1 and 1 are structurally not equal" << endl;

	if (instance1.compare(&instance2) == 0)
		cout << "1 and 2 are structurally equal" << endl;
	else
		cout << "1 and 2 are structurally not equal" << endl;*/

/*	Access instance;

	instance.setFoo(42);
	cout << "getFoo(): " << instance.getFoo() << endl;

	instance.setFoo(-42);
	cout << "getFoo(): " << instance.getFoo() << endl;*/

/*	Visibility instance;
	instance.publicFoo = 42;
	cout << "instance.publicFoo: " << instance.publicFoo << endl;
	instance.publicBar();
	instance._privateFoo = 42;
	cout << "instance.privateFoo: " << instance.privateFoo << endl;

	instance._privateBar();*/

/* Test	instance(4.2f);
	instance.bar();
 * Test	instance('a', 42, 4.2f);
 * instance.foo = 42;
	cout << "instance.foo: " << instance.foo << endl;
	instance.bar();*/
	return 0;
}