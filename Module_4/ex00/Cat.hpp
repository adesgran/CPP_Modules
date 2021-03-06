/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:56:34 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/16 15:36:17 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <Animal.hpp>
# include <iostream>
# include <string>

class Cat : public Animal {
	public:
		Cat( void );
		Cat( const Cat &cat );
		~Cat( void );
		Cat &operator=( const Cat &cat );
		void	makeSound(void) const;

	private:

};

#endif
