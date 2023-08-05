//
// Created by Nadiia Maliarenko on 05.08.23.
//

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base * generate(void){
	srand(time(0));
	if (std::rand() % 2 == 0)
		return new A();
	else if (std::rand() % 2 == 0)
		return new B();
	else return new C();
}

void identify(Base* p){
	A* aPtr = dynamic_cast<A*>(p);
	B* bPtr = dynamic_cast<B*>(p);
	C* cPtr = dynamic_cast<C*>(p);
	if (aPtr)
		std::cout << "Actual type is A" << std::endl;
	else if (bPtr)
		std::cout << "Actual type is B" << std::endl;
	else if (cPtr)
		std::cout << "Actual type is C" << std::endl;
	else
		std::cout << "It's non of them" << std::endl;
}

void identify(Base& p){
	try{
		A& aPtr = dynamic_cast<A&>(p);
		std::cout << "Actual type is A: " << &aPtr << std::endl;
	}
	catch (std::exception& e){}

	try{
		B& bPtr = dynamic_cast<B&>(p);
		std::cout << "Actual type is B: " << &bPtr  << std::endl;
	}
	catch (std::exception& e){}

	try{
		C& cPtr = dynamic_cast<C&>(p);
		std::cout << "Actual type is C: " << &cPtr << std::endl;
	}
	catch (std::exception& e) {}

}

int main()
{
	Base *generatedPtr = generate();

	identify(generatedPtr);
	identify(*generatedPtr);

	delete generatedPtr;
	//system("leaks convert");
}