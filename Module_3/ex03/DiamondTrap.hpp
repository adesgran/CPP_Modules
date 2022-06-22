/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:00:12 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 10:56:58 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <ClapTrap.hpp>
# include <ScavTrap.hpp>
# include <FragTrap.hpp>
# include <iostream>
# include <string>

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &diamondtrap );
		~DiamondTrap( void );
		DiamondTrap &operator=( const DiamondTrap &diamondtrap );

		void	whoAmI( void ) const;
		void	setName( std::string name );
		std::string	getName( void ) const;


	private:
		std::string	_name;

};

#endif
