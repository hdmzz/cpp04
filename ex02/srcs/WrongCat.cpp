/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:12:59 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/16 05:16:42 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy construcor called" << std::endl;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
	return ;
}

/*******************************************************************************
 * 										Operator
*******************************************************************************/

WrongCat&	WrongCat::operator=(WrongCat const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

/*******************************************************************************
 * 										Member function
*******************************************************************************/

void		WrongCat::makeSound() const
{
	std::cout << "Wrong Cat Sound!!" << std::endl;
	return ;
}
