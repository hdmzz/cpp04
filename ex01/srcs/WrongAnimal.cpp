/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:45:13 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/05 18:00:03 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("default name")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string const name) : _type(name)
{
	std::cout << "WrongAnimal Name Constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

/******************************************************************************
 * 							Operator 
*******************************************************************************/

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

/*******************************************************************************
 * 								Member function	
*******************************************************************************/

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound!" << std::endl;
	return ;
}

std::string	const & WrongAnimal::getType() const
{
	return (this->_type);
}
