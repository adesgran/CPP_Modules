/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:02:38 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 14:57:03 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <ClapTrap.hpp>
# include <FragTrap.hpp>
# include <ScavTrap.hpp>
# include <iostream>
# include <string>

class DiamondTrap : private ScavTrap, private FragTrap {
	public:
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &diamondtrap );
		~DiamondTrap( void );
		DiamondTrap &operator=( const DiamondTrap &diamondtrap );

		void	attack( std::string target );


	private:

};

#endif
