/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:47:56 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/14 00:42:34 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

/*******************************************************************************
 * 							Constructor/Destructor							
 * *****************************************************************************/

Character::Character( void )
{
	std::cout << "Character constructor called" << std::endl;
	this->_initializeEmptyInventory();
	return ;
}

Character::Character( std::string name ) : _name( name )
{
	std::cout << "Character name constructor called" << std::endl;
	this->_initializeEmptyInventory();
	return ;
}

Character::Character( Character const & src )
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
	return ;
}

Character::~Character( void )
{
	std::cout << "Character destructor called for " << this->_name << std::endl;
	this->_deleteInventory();
	return ;
}

/*******************************************************************************
 * 										operator
 * *****************************************************************************/

Character& Character::operator=( Character const & rhv )
{
	if ( this != &rhv )
	{
		this->_name = rhv._name;
		this->_deleteInventory();
		for ( int i = 0; i < this->_numberMaxOfItems; i++ )
		{
			if ( rhv._inventory[i] != NULL)
				this->_inventory[i] = rhv._inventory[i]->clone();
		}
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

void Character::equip( AMateria* m )
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

void Character::unequip( int idx )
{
	if ( idx < 0 || idx >= this->_numberMaxOfItems)
	{
		std::cout << this->_name << " cant unequip cause the index is not good" << std::endl;
		return ;
	}
	if ( this->_inventory[idx] == NULL )
	{
		std::cout << this->_name << " don't have anything at the index " << idx << std::endl;
		return ;
	}
	std::cout << this->_name << " unequip a " << this->_inventory[idx]->getType() << std::endl;
	this->_inventory[idx] = NULL;
}

/*
La fonction membre use(int, ICharacter&) utilisera la Materia de l’emplacement[idx],
et passera la cible en paramètre à la fonction AMateria::use.
*/
void Character::use( int idx, ICharacter& target )
{
	if (idx < 0 || idx >= this->_numberMaxOfItems)
	{
		std::cout << this->_name << " can't use the item, not a valid index" << std::endl;
		return;
	}
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use( target );
	return ;
}

void Character::_initializeEmptyInventory( void )
{
	for (int i = 0; i < this->_numberMaxOfItems; i++)
		this->_inventory[i] = NULL;
	return ;
}

void Character::_deleteInventory() 
{
	for(int i = 0; i < this->_numberMaxOfItems; i++)
	{
		if(this->_inventory[i] != NULL)
		{
			delete ( this->_inventory[i] );
			this->_inventory[i] = NULL;
		}
	}
	return ;
}
