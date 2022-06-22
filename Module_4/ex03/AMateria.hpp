/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:56 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 15:42:09 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# define DEBUG 1

# include <iostream>
# include <string>
# include <ICharacter.hpp>

class AMateria {
	protected:
		std::string const	_type;

	public:
		AMateria( std::string const & type );

		AMateria( void );
		AMateria( const AMateria &amateria );
		~AMateria( void );
		AMateria &operator=( const AMateria &amateria );

		std::string const &getType( void ) const;

		virtual AMateria	*clone() const = 0;
		virtual void	use(ICharacter& target);


};

#endif
