/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:08:19 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/13 23:05:06 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*******************************************************************************
 * 							Constructor/ Destructor
********************************************************************************/

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice constructor called" << std::endl;
	return ;
}

Ice::Ice(Ice const & src) : AMateria("ice")
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
	return ;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
	return ;
}

/*******************************************************************************
 * 							Operator overload
********************************************************************************/

Ice & Ice::operator=(Ice const & rhv)
{
	if (this != &rhv)
	{
		this->_type = rhv._type;
	}
	return ( *this );
}

AMateria * Ice::clone( void ) const
{
	AMateria* iceClone = new Ice();
	return (iceClone);
}

//la fonction use prend en parametre un ICharacter et doit afficher son nom
//ICharacter est l'interface qui gere les deux classes Ice et Cure, apppeler getName()
//de la fonction de la classe Interface on accede à la fonction getter de la classe 
//Character qui est un soustype de ICharacter si on a un Ice ou un Cure la bonne fonction sera appellé
void	Ice::use( ICharacter& target )
{
	std::cout << "* shouts an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
