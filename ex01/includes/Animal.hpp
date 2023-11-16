/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:29:04 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/16 05:03:33 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>

class Animal
{
public:
	Animal();
	Animal(std::string const type);
	Animal(Animal const & src);
	virtual ~Animal();
	Animal& operator=(Animal const & rhv);

	std::string		getType() const;
	virtual void	makeSound() const;
protected:
	std::string _type;
};

#endif
