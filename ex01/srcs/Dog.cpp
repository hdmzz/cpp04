/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:03:03 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/09 02:02:16 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*******************************************************************************
 * 								Constructo/Destructor							
*******************************************************************************/

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog Default constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const & src) : Animal("Dog"), _brain(NULL)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = src._type;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog Default destructor called for a Dog" << std::endl;
	delete _brain;
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

void	Dog::makeSound(void) const
{
	std::cout << "Wouf !" << std::endl;
	return ;
}
