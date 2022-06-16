/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:56:38 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/16 15:36:30 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <Animal.hpp>
# include <iostream>
# include <string>

class Dog : public Animal {
	public:
		Dog( void );
		Dog( const Dog &dog );
		~Dog( void );
		Dog &operator=( const Dog &dog );
		void	makeSound( void ) const;


	private:

};

#endif
