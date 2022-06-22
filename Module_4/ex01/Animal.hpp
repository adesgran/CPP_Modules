/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:55:47 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 15:00:24 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	public:
		Animal ( void );
		Animal( std::string type );
		Animal( const Animal &animal );
		virtual ~Animal( void );
		Animal &operator=( const Animal &animal );
		void	setType( std::string type );
		const std::string	getType( void ) const;
		virtual	void	makeSound( void ) const;


	protected:
		std::string type;

	private:

};

#endif
