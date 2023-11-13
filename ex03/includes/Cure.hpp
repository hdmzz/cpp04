/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:26:12 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/13 22:30:49 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure( void );
	Cure( Cure const & src );
	~Cure( void );
};

Cure::Cure(/* args */)
{
}

Cure::~Cure()
{
}


#endif
