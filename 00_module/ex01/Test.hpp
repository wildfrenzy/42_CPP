//
// Created by nmaliare on 4/16/23.
//

#ifndef CPP_TEST_HPP
#define CPP_TEST_HPP

/*
class Test {

public:

	//int foo;
	char	a1;
	int		a2;
	float	a3;

	Test(char p1, int p2, float p3);
	~Test(void);

	//void bar(void);
}*/;

class Test {

public:
	int			a2;
	float const	a3;

	Test(float const f);
	~Test(void);

	void bar(void) const;
};

#endif
