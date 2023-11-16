/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:57:38 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/16 03:01:57 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain&	Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain assignement operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i > 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

std::string const	Brain::getIdea(int idx) const
{
	if (idx < 0)
		idx = 0;
	return ( this->ideas[idx % 99]);
}

void	Brain::setIdea(int idx, std::string idea)
{
	//si on modulo idx par nbOfIdeas(100) - 1 on reste dans la limite 0-99 meme en cas d'index ultra gros
	this->ideas[idx % 99] =  idea;
	return ;
}
