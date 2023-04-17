//
// Created by nmaliare on 4/17/23.
//

#ifndef CPP_NONMEMBER_HPP
#define CPP_NONMEMBER_HPP
#include <iostream>
using namespace std;

class NonMember {

public:
	NonMember(void);
	~NonMember(void);
	static int getNbInst(void);

private:

	static int _nbInst;

};


#endif //CPP_NONMEMBER_HPP
