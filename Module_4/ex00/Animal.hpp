/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:55:47 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/16 14:08:56 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	public:
		Animal( std::string type );
		Animal( const Animal &animal );
		~Animal( void );
		Animal &operator=( const Animal &animal );
		void	setType( std::string type );
		const std::string	getType( void ) const;
		virtual	void	makeSound( void ) const;


	protected:
		std::string type;

	private:

};

#endif
