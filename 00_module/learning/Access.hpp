/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Access.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:02:25 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/17 16:02:25 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_ACCESS_HPP
#define CPP_ACCESS_HPP
#include <iostream>
using namespace std;

class Access {

public:
	Access(void);
	~Access(void);

	int getFoo(void) const;
	void setFoo(int v);

private:

	int _foo;

};


#endif //CPP_ACCESS_HPP
