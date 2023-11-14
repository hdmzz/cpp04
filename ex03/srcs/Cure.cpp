/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:44:07 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/14 02:57:58 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
	return ;
}

Cure::Cure( Cure const & src ) : AMateria("cure")
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cure::~Cure( void )
{
	std::cout << "Cure destructor called" << std::endl;
	return ;
}

Cure & Cure::operator=( Cure const & rhv )
{
	if ( this != &rhv )
	{
		this->_type = rhv._type;
	}
	return ( *this );
}

AMateria* Cure::clone() const
{
	AMateria* cureClone = new Cure();
	return ( cureClone );
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
