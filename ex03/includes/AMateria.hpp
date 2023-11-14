/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:26:44 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/14 02:39:39 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIAL_H
# define AMATERIAL_H

# include "ICharacter.hpp"
# include <iostream>

class AMateria
{
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	virtual ~AMateria();

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use( ICharacter& target );

	AMateria& operator=(AMateria const & rhs);

protected:
	std::string _type;
};


#endif
