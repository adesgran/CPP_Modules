/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:43:57 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 15:46:17 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# define DEBUG 1

# include <iostream>
# include <string>
# include <AMateria.hpp>

class IMateriaSource {
	public:
		IMateriaSource( void );
		IMateriaSource( const IMateriaSource &imateriasource );
		~IMateriaSource( void ) {}
		IMateriaSource &operator=( const IMateriaSource &imateriasource );

		virtual void	learnMateria(AMateria*) = 0;
		virtual AMateria	*createMateria( std::string const &type) = 0;


	private:
		AMateria	(*_materias)[4];

};

#endif
