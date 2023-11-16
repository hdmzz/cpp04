/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:03:03 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/16 05:26:47 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

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
	*this = src;
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

Dog& Dog::operator=(Dog const & rhv)
{
	if (this != &rhv) {
		this->_type = rhv._type;
		if (this->_brain != NULL)
			delete this->_brain;
		this->_brain = new Brain(*rhv._brain);
	}
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

Brain *	Dog::getBrain(void) const
{
	return (this->_brain);
}
