/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:58:44 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/14 04:52:33 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//A la creation les Materias doivent etre vide
MateriaSource::MateriaSource( void )
{
	std::cout << "MateriaSource constructor called" << std::endl;
	this->_initEmptyMaterias();
	return ;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	this->_initEmptyMaterias();
	*this = src;
	return ;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	this->_deleteMaterias();
	return ;
}

MateriaSource& MateriaSource::operator=( MateriaSource const & rhv )
{
	if ( this != & rhv )
	{
		this->_deleteMaterias();
		for ( int i = 0; i < this->_nbOfMaterias; i++ )
		{
			if (rhv._materias[i] != NULL) {
				this->_materias[i] = rhv._materias[i]->clone();
			}
		}
	}
	return ( *this );
}

void		MateriaSource::_initEmptyMaterias( void )
{
	for (int i = 0; i < this->_nbOfMaterias; i++)
		this->_materias[i] = NULL;
	return ;
}

void	MateriaSource::_deleteMaterias( void )
{
	for (int i = 0; i < this->_nbOfMaterias; i++)
	{
		if ( this->_materias[i] != NULL )
		{
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
	}
	return ;
}

void		MateriaSource::learnMateria(AMateria* src)
{
	if (src == NULL) {
		std::cout << "MateriaSource can't learn nothing from src because it's empty" << std::endl;
		return ;
	}
	for ( int i = 0; i < this->_nbOfMaterias; i++) {
		if ( this->_materias[i] == NULL) {
			this->_materias[i] = src;
			std::cout << "Materia of type " << this->_materias[i]->getType() << " learned" << std::endl;
			return ;
		}
		if ( i >= 4 ) {
			std::cout << "MateriaSource items full can't learn another one" << std::cout;
			return ;
		}
	}
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_nbOfMaterias; i++) {
		if (this->_materias[i]->getType() == type)
			return ( this->_materias[i]->clone() );
	}
	std::cout << "Didn't found a materia of type " << type << std::endl;
	return (0);
}
