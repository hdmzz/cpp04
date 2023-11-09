/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:00:38 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/05 17:58:21 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*******************************************************************************/
/*								Constructo Destructor							*/
/*******************************************************************************/


Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat regular construcor called" << std::endl;
	return ;
}

Cat::Cat(Cat const & src) : Animal("Cat")
{
	std::cout << "Cat copy constructor called" << std::endl;
	//src est une refernece sur un objet donc deja dereferencé 
	std::cout << "src = " << &src << std::endl;
	std::cout << "this = " << this << std::endl;//this est une adrress
	*this = src;//donx on dereference cette address et on lui assigne la valeur src cest une copie profonde
	std::cout << "this = " << this << std::endl;//this est une adrress
	//this et src n'ont pas la meme address mais bien les meme valeurs donc copie profonde
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat desrtuctor called" << std::endl;
	return ;
}

/*******************************************************************************/
/*								operator										*/
/*******************************************************************************/

Cat& Cat::operator=(Cat const & rhv)
{
	std::cout << "Cat assignement operator called" << std::endl;
	if (this != &rhv)
		this->_type = rhv._type;
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


