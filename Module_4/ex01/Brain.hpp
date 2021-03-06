/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:52:23 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 14:31:57 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define DEBUG 1

# include <iostream>
# include <string>

class Brain {
	public:
		Brain( void );
		Brain( const Brain &brain );
		~Brain( void );
		Brain &operator=( const Brain &brain );
		void	setIdeas( std::string ideas[100]);
		void	setIdeas( std::string ideas, int index );
		const std::string		*getIdeas( void )const;
		const std::string		getIdeas( int index )const;


	private:
		std::string	_ideas[100];

};

#endif
