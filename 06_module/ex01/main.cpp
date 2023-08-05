//
// Created by Nadiia Maliarenko on 05.08.23.
//

#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
	Data yo("yo");
	Serializer oy;

	uintptr_t here = oy.serialize(&yo);
	Data *hi = oy.deserialize(here);

	std::cout << hi->getSmth() << std::endl;

}