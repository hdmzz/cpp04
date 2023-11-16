/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:56:36 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/16 05:05:38 by hdamitzi         ###   ########.fr       */
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

	void				setIdea(int idx, std::string idea);
	std::string const	getIdea(int idx) const;
};

#endif
