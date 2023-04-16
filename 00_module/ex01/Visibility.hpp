//
// Created by nmaliare on 4/17/23.
//

#ifndef CPP_VISIBILITY_HPP
#define CPP_VISIBILITY_HPP
#include <iostream>
using namespace std;

class Visibility {

public:

	int publicFoo;
	Visibility(void);
	~Visibility(void);

	void publicBar(void) const;

private:

	int		_privateFoo;

	void	_privateBar(void) const;

};


#endif
