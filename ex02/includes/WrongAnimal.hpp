/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:41:54 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/05 17:53:09 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

# include "Animal.hpp"

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const & src);
	WrongAnimal(std::string name);
	~WrongAnimal();

	WrongAnimal&		operator=(WrongAnimal const & rhs);

	void				makeSound() const;
	std::string	const &	getType() const;
protected:
	std::string	_type;
};

#endif
