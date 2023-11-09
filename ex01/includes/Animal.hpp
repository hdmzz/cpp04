/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:29:04 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/09 01:55:51 by hdamitzi         ###   ########.fr       */
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
	virtual ~Animal();//virtual signifie que cette fonction peut etre remplacé par les classes dérivées
	//important quand on veut que le bon destructor soit appelé quand un objet
	//d'une classe dérivé est delete par le biais d'un pointeur sur la classe de base
	//si pas virtual ====> leaks 
	Animal& operator=(Animal const & rhv);

	std::string		getType() const;
	virtual void	makeSound() const;
protected:
	std::string _type;
};

#endif
