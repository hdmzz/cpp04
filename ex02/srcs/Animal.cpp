/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:30:07 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/09 08:18:36 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*******************************************************************************
 * 							constructor/destructor								
*******************************************************************************/

Animal::Animal() : _type("Default name")
{
	std::cout << "Animal Constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string const type) : _type(type)
{
	std::cout << "Animal Constructor called for a " << type << std::endl;
	return ;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called for " << this->_type << std::endl;
	return ;
}

/*******************************************************************************
 * 							Operator											
*******************************************************************************/

Animal& Animal::operator=(Animal const & rhv)
{
	std::cout << "Animal assignement method called" << std::endl;
	if (this != &rhv)
		this->_type = rhv._type;
	return (*this);
}

/*******************************************************************************
 * 							Getter												
*******************************************************************************/

std::string Animal::getType() const
{
	return (this->_type);
}
