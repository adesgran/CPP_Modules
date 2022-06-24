/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:31:56 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/24 17:48:16 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# define DEBUG 1

# include <iostream>
# include <string>
# include <AMateria.hpp>
# include <ICharacter.hpp>

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure( const Cure &cure );
		~Cure( void );
		Cure &operator=( const Cure &cure );

		Cure	*clone() const;
		void	use(ICharacter& target);

	private:

};

#endif
