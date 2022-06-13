/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:14:45 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/13 14:51:49 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <iostream>
#include <string>
#include <cmath>

int	main( void )
{
	Fixed a( 3.0f );
	Fixed b( 10 );

	std::cout << "Comparaison : " << a.toFloat() << " > " << b.toInt() << " => " << (( a > b ) ? "true" : "false") << std::endl;
	std::cout << "Comparaison : " << a.toFloat() << " < " << b.toInt() << " => " << (( a < b ) ? "true" : "false") << std::endl;
	std::cout << "Comparaison : " << a.toFloat() << " >= " << b.toInt() << " => " << (( a >= b ) ? "true" : "false") << std::endl;
	std::cout << "Comparaison : " << a.toFloat() << " <= " << b.toInt() << " => " << (( a <= b ) ? "true" : "false") << std::endl;
	std::cout << "Comparaison : " << a.toFloat() << " == " << b.toInt() << " => " << (( a == b ) ? "true" : "false") << std::endl;
	std::cout << "Comparaison : " << a.toFloat() << " != " << b.toInt() << " => " << (( a != b ) ? "true" : "false") << std::endl;
	std::cout << std::endl;

	std::cout << "Arithmetic :" << std::endl;
	Fixed c = a * b;
	std::cout << a.toFloat() << " * " << b.toInt() << " = " << c.toFloat() << std::endl;

	Fixed d = a / b;
	std::cout << a.toFloat() << " / " << b.toInt() << " = " << d.toFloat() << std::endl;

	Fixed e = a + b;
	std::cout << a.toFloat() << " + " << b.toInt() << " = " << e.toFloat() << std::endl;

	Fixed f = a - b;
	std::cout << a.toFloat() << " - " << b.toInt() << " = " << f.toFloat() << std::endl;
	std::cout << std::endl;

	std::cout << "Increment/Decrement :" << std::endl;
	std::cout << a << "++ = " << a++ << std::endl;
	std::cout << b << "++ = " << b++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << std::endl;

	std::cout << "++" << a << " = " << ++a << std::endl;
	std::cout << "++" << b << " = " << ++b << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << std::endl;
	
	std::cout << a << "-- = " << a-- << std::endl;
	std::cout << b << "-- = " << b-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << std::endl;
	
	std::cout << "--" << a << " = " << --a << std::endl;
	std::cout << "--" << b << " = " << --b << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << std::endl;

	std::cout << "min/max : " << std::endl;
	std::cout << "max ( " << a << " , " << b << " ) = " << Fixed::max(a, b) << std::endl;
	std::cout << "min ( " << a << " , " << b << " ) = " << Fixed::min(a, b) << std::endl;
	return (0);
}
