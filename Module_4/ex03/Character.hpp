/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:11:10 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/24 16:37:50 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define DEBUG 1

# include <iostream>
# include <string>
# include <ICharacter.hpp>
# include <AMateria.hpp>

class Character : public ICharacter
{
	public:
		Character( std::string name );
		Character( const Character &character );
		~Character( void );
		Character &operator=( const Character &character );

		std::string const &getName() const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);

	private:
		AMateria	*_materias[4];
		std::string const	_name;

};

#endif
