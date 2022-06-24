/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:41:03 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/24 17:43:10 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# define DEBUG 1

# include <iostream>
# include <string>
# include <AMateria.hpp>

class MateriaSource {
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource &materiasource );
		~MateriaSource( void );
		MateriaSource &operator=( const MateriaSource &materiasource );

		void	learnMateria(AMateria* materia);
		AMateria	*createMateria( std::string const &type);



	private:
		AMateria	*_materias[4];

};

#endif
