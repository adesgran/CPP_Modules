/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:30:01 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 14:19:58 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <ClapTrap.hpp>
# include <iostream>
# include <string>

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap( std::string scav_name );
		ScavTrap( const ScavTrap &scavtrap );
		~ScavTrap( void );
		ScavTrap &operator=( const ScavTrap &scavtrap );

		void	guardGate( void );


	private:

};

#endif
