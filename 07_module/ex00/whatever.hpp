//
// Created by Nadiia Maliarenko on 05.08.23.
//

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename a> void swap(a &b, a &c){
	a tmp = b;
	b = c;
	c = tmp;
}

template<typename a> a min(a b, a c){
	return b < c ? b : c;
}

template<typename a> a max(a b, a c){
	return b > c ? b : c;
}

#endif //WHATEVER_HPP
