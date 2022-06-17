/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:46:21 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/17 17:12:00 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <ClapTrap.hpp>
# include <iostream>
# include <string>

class FragTrap : virtual public ClapTrap 
{
	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap &fragtrap );
		~FragTrap( void );
		FragTrap &operator=( const FragTrap &fragtrap );

		void	highFivesGuys(void);


	private:

};

#endif
