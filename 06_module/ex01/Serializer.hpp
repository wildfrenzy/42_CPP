//
// Created by Nadiia Maliarenko on 05.08.23.
//

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

class Data;

class Serializer {
public:
	Serializer();
	Serializer(Serializer &s);
	Serializer& operator=(Serializer &s);
	~Serializer();

	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};


#endif //SERIALIZER_HPP
