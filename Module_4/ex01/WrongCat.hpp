/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:42:40 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/16 15:26:56 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <WrongAnimal.hpp>
# include <iostream>
# include <string> 

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat( const WrongCat &wrongcat );
		~WrongCat( void );
		WrongCat &operator=( const WrongCat &wrongcat );
		void	makeSound( void ) const;	

	private:

};

#endif
