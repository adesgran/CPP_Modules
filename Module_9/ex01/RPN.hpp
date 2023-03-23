/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:23:38 by adesgran          #+#    #+#             */
/*   Updated: 2023/03/23 14:36:11 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <stack>
# include <stdlib.h>
# define DEBUG 0

class RPN {
	public:
		RPN( void );
		RPN( const RPN &rpn );
		~RPN( void );
		RPN &operator=( const RPN &rpn );

		float	solve( char *expr );

	private:
			std::stack<float> _stack;

			class InvalidInputException : public std::exception
			{
				public :
					virtual const char *what() const throw()
					{
						return ("Invalid Input");
					}
			};

};

#endif
