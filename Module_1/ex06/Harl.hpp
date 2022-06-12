/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 16:10:52 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/12 16:12:45 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {
	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );


	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

};

#endif
