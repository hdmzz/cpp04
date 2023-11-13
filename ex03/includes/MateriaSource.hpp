/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:57:41 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/09 16:20:22 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource( void );
	MateriaSource( std::string type);
	~MateriaSource( void );

	MateriaSource& operator=(MateriaSource const & rhv);

private:
	static const int	_nbOfMaterias = 4;
	AMateria*			_materias[4];
	void				_initEmptyMaterias( void );
	void				_deleteMaterias( void );

};

#endif
