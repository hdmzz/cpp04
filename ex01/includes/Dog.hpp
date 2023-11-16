/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:01:31 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/16 05:22:33 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "../includes/Animal.hpp"
# include "../includes/Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog const & src);
	virtual ~Dog();

	Dog& operator=(Dog const & rhv);
	void	makeSound(void) const;
	Brain *	getBrain(void) const;

private:
	Brain* _brain;
};

#endif
