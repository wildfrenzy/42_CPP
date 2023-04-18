//
// Created by nmaliare on 4/18/23.
//

#ifndef CPP_ZOMBIE_HPP
#define CPP_ZOMBIE_HPP
#include <iostream>

class Zombie {

public:
	Zombie(std::string name);
	~Zombie();

	void announce( void );
	std::string getName() const;

private:
	std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
