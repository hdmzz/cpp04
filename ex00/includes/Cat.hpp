/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:58:54 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/16 01:00:27 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const & src);
	~Cat();

	Cat& operator=(Cat const & rhv);

	void	makeSound() const;
};

#endif
