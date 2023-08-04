//
// Created by Nadiia Maliarenko on 04.08.23.
//

#include "ScalarConverter.hpp"
#include <iomanip>

int main (int ac, char **av)
{
	ScalarConverter convert;

	if (ac == 2)
	{
		std::cout << std::fixed << std::setprecision(1);

		std::string str = av[1];
		convert.convert(str);

		char	c = static_cast<char>(convert);
		int		i = static_cast<int>(convert);
		float	f = static_cast<float>(convert);
		double	d = static_cast<double>(convert);

		std::cout << YELLOW"[char]:"RES" '" << c << "'" << std::endl;
		std::cout << YELLOW"[int]: "RES << i << std::endl;
		std::cout << YELLOW"[float]: "RES << f << std::endl;
		std::cout << YELLOW"[double]: "RES << d << std::endl;

	} else
		std::cout << "Error: Wrong number of arguments." << std::endl;

	return 0;
}