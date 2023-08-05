//
// Created by Nadiia Maliarenko on 05.08.23.
//

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data {
public:
	Data();
	Data(std::string const &smth);
	Data(Data &d);
	Data & operator=(Data &d);
	~Data();

	std::string getSmth(void) const;
private:
	std::string _smth;
};


#endif //DATA_HPP
