/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:08:39 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/14 04:24:35 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*******************************************************************************
 * 							Constructor Destructor
*******************************************************************************/

AMateria::AMateria() : _type("default")
{
	std::cout << "AMateria regular Constructor called" << std::endl;
	return ;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria Type Constructor called" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const & src) : _type(src._type)
{
	std::cout << "AMateria Copy Constructor called" << std::endl;
	return ;
}

AMateria::~AMateria()
{
	std::cout << "AMateria regular Destructor called" << std::endl;
	
	return ;
}

/*******************************************************************************
 * 							Operator
*******************************************************************************/

AMateria&	AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

/*******************************************************************************
 * 							Member function
*******************************************************************************/

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use( ICharacter& target )
{
	std::cout << "AMateria virtually called on " << target.getName() << std::endl;
	return ;
}
