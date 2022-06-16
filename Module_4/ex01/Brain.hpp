/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:39:52 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/16 15:43:39 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
	public:
		Brain( void );
		Brain( const Brain &brain );
		~Brain( void );
		Brain &operator=( const Brain &brain );
		const std::string	[100]getIdeas( void ) const;
		void	setIdead( std::string ideas[100] );


	private:
		std::string ideas[100];

};

#endif
