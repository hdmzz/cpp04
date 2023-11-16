/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:00:38 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/16 02:32:08 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

/*******************************************************************************/
/*								Constructor Destructor							*/
/*******************************************************************************/


Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat regular constructor called" << std::endl;
	return ;
}

//brain est init a NULL, puis l'assignateur est appellé
//et se chrgera d'allouer la mémoire necessaire
Cat::Cat(Cat const & src) : Animal("Cat"), _brain(NULL)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete (this->_brain);
	return ;
}

/*******************************************************************************/
/*								operator										*/
/*******************************************************************************/

Cat& Cat::operator=(Cat const & rhv)
{
	std::cout << "Cat assignement operator called" << std::endl;
	if (this != &rhv)
	{
		this->_type = rhv._type;
		if (this->_brain != NULL)
			delete this->_brain;
		this->_brain = new Brain(*rhv._brain);
	}
	return (*this);
}

/*******************************************************************************/
/*								Member function							*/
/*******************************************************************************/

void	Cat::makeSound() const
{
	std::cout << "Miaou!" << std::endl;
	return ;
}

Brain*	Cat::getBrain() const
{
	return	(this->_brain);
}

