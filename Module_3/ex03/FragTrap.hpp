/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:53:44 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 14:20:05 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <ClapTrap.hpp>
# include <iostream>
# include <string>

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap( std::string fragname );
		FragTrap( const FragTrap &fragtrap );
		~FragTrap( void );
		FragTrap &operator=( const FragTrap &fragtrap );

		void	highFivesGuys( void );


	private:

};

#endif
