//
// Created by Nadiia Maliarenko on 06.08.23.
//

#ifndef ITER_HPP
#define ITER_HPP

template <typename Address>
void iter(Address *array, int len, void (*function)(Address *item))
{
	for (int i = 0; i < len; i++)
		function(&(array[i]));
}

#endif //ITER_HPP
