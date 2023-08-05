//
// Created by Nadiia Maliarenko on 05.08.23.
//

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(Serializer &s) { (void)s; }

Serializer &Serializer::operator=(Serializer &s) {
	(void)s;
	return *this;
}

Serializer::~Serializer() {}

Data *Serializer::deserialize(uintptr_t raw) {
	Data *back = reinterpret_cast<Data *>(raw);
	return back;
}

uintptr_t Serializer::serialize(Data *ptr) {
	uintptr_t res = reinterpret_cast<uintptr_t>(ptr);
	return res;
}
