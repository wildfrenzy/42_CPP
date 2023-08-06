//
// Created by Nadiia Maliarenko on 06.08.23.
//

#include "iter.hpp"
#include <iostream>

void function(int *a)
{
	std::cout << *a << std::endl;
}

void function2(std::string *a)
{
	std::cout << *a << std::endl;
}

int main()
{
	int arr[5]= {0, 1, 2, 3,4,};
	std::string city[5] = {"Berlin", "Przemysl", "Lviv", "Vinnytsia", "Kyiv"};
	iter(arr, 5, function);
	iter(city, 5, function2);
}
