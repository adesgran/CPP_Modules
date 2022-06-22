/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:33:00 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 15:43:39 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# define DEBUG 1

# include <iostream>
# include <string>
# include <AMateria.hpp>

class ICharacter {
	public:
		ICharacter( void );
		ICharacter( std::string name );
		ICharacter( const ICharacter &iCharacter );
		ICharacter &operator=( const ICharacter &iCharacter );

		virtual ~ICharacter( void ) {}
		virtual std::string const &getName() const = 0;
		virtual void	equip(AMateria *m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter& target) = 0;


	private:
		IMateria	(*_materias)[4];
		std::string	_name;

};

#endif
