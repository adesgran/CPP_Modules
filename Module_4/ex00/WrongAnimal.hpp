/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:34:49 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/16 14:38:35 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {
	public:
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal &wronganimal );
		~WrongAnimal( void );
		WrongAnimal &operator=( const WrongAnimal &wronganimal );
		const std::string	getType( void ) const;
		void	setType( std::string type );
		void	makeSound( void ) const;

	protected:
		std::string	type;

	private:

};

#endif
