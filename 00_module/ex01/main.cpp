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

#include "Test.hpp"
#include "Visibility.hpp"

int main()
{
	Visibility instance;

	instance.publicFoo = 42;
	cout << "instance.publicFoo: " << instance.publicFoo << endl;
	instance.publicBar();

	//instance._privateFoo = 42;
	//cout << "instance.privateFoo: " << instance.privateFoo << endl;

	//instance._privateBar();

/* Test	instance(4.2f);
	instance.bar();
 * Test	instance('a', 42, 4.2f);
 * instance.foo = 42;
	cout << "instance.foo: " << instance.foo << endl;
	instance.bar();*/
	return 0;
}