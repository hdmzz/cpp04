/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:03:03 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/16 01:03:59 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*******************************************************************************
 * 								Constructo/Destructor							
*******************************************************************************/

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const & src) : Animal("Dog")
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = src._type;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog Default destructor called for a Dog" << std::endl;
	return ;
}

/*******************************************************************************
 * 								Operator										
*******************************************************************************/

Dog& Dog::operator=(Dog & rhv)
{
	if (this != &rhv)
		this->_type = rhv._type;
	return (*this);
}

/*******************************************************************************
 * 								Member function									
*******************************************************************************/

void	Dog::makeSound() const
{
	std::cout << "Wouf!" << std::endl;
	return ;
}
