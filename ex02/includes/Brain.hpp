/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:56:36 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/08 23:12:33 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>

class Brain
{
public:
	std::string ideas[100];

	Brain();
	Brain(Brain const & src);
	~Brain();
	
	Brain& operator=(Brain const & rhs);
};

#endif
