//
// Created by nmaliare on 4/17/23.
//

#ifndef CPP_COMPARISONS_HPP
#define CPP_COMPARISONS_HPP
#include <iostream>
using namespace std;

class Comparisons {

public:
	Comparisons(int v);
	~Comparisons(void);

	int getFoo(void) const;
	int compare(Comparisons *other) const;

private:
	int _foo;
};


#endif //CPP_COMPARISONS_HPP
