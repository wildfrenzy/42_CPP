/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:25:00 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/15 21:25:08 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(int ac, char *av[])
{
	int i, j;

	i = 0;
	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (++i < ac)
		{
			j = -1;
			while (av[i][++j])
				cout << (char)toupper(av[i][j]);
		}
	}
	cout << endl;
	return 0;
}
