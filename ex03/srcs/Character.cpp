/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:47:56 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/09 15:36:46 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character( void )
{
	std::cout << "Character constructor called" << std::endl;
	this->initializeEmptyInventory();
	return ;
}

Character::Character( std::string name) : _name(name)
{
	std::cout << "Character name constructor called" << std::endl;
	this->initializeEmptyInventory();
	return ;
}

Character::Character( Character const & src)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
	return ;
}

Character::~Character( void )
{
	std::cout << "Character destructor called" << std::endl;
	return ;
}

Character& Character::operator=(Character const & rhv)
{
	if (this != &rhv)
	{
		this->_name = rhv._name;
		//dabord delete ancien puis remplacer l'ancien par le nouveaux
		
	}
	return ( *this );
}

/*******************************************************************************
 * 										getters
 * *****************************************************************************/

std::string const & Character::getName() const
{
	return ( this->_name );
}

/*******************************************************************************
 * 									Member function
 * *****************************************************************************/

void Character::equip(AMateria* m)
{
	if ( m == NULL )
	{
		std::cout << "Not a good AMateria Object" << std::endl;
		return ;
	}
	for ( int i = 0; i < this->_numberMaxOfItems; i++)
	{
		if ( this->_inventory[i] == NULL )
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	
}

void Character::use(int idx, ICharacter& target)
{
	
}

void Character::_initializeEmptyInventory( void )
{
	for (int i = 0; i < this->_numberMaxOfItems; i++)
		this->_inventory[i] = NULL;
	return ;
}

