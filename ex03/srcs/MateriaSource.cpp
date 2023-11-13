/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:58:44 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/09 16:41:28 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	std::cout << "MateriaSource constructor called" << std::endl;
	return ;
}

MateriaSource::MateriaSource( std::string type )
{
	std::cout << "MateriaSource name constructor called" << std::endl;
	return ;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	return ;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhv)
{
	if ( this != & rhv )
	{
		
	}
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
		if ( this->_materias != NULL )
		{
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
	}
	return ;
}
