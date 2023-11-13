/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:45:27 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/13 23:51:03 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include "MateriaSource.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character( void );
	Character( std::string name);
	Character( Character const & src);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	Character & operator=(Character const & src);

private:
	void				_initializeEmptyInventory( void );
	void				_deleteInventory( void );
	static const int	_numberMaxOfItems = 4;
	std::string			_name;
	AMateria*			_inventory[4];//les élément present dans 
};

#endif
