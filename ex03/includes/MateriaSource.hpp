/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:57:41 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/14 03:23:27 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource( void );
	MateriaSource( MateriaSource const &src);
	~MateriaSource( void );

	MateriaSource&	operator=(MateriaSource const & rhv);

	void			learnMateria(AMateria*);
	AMateria*		createMateria(std::string const & type);
private:
	static const int	_nbOfMaterias = 4;
	AMateria*			_materias[4];
	//materia sera un stock dans lequel la fonction learnMateria pourra stocker 
	//son AMateria argument et la fonction Create materia pourra aller choper le materia 
	void				_initEmptyMaterias( void );
	void				_deleteMaterias( void );
};

#endif
