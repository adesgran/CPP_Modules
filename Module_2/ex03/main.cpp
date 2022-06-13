/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:14:45 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/13 16:13:32 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <Point.hpp>
#include <iostream>
#include <string>
#include <cmath>

bool	bsp( Point const a, Point const b, Point const c, Point point);

int	main( void )
{
	Point x(1, 1);
	Point y(2, 3);
	Point z(-1, 3);
	
	Point	point(1.5, 1.8);

	std::cout << "Triangle : " << x << " " << y << " " << z << std::endl << "Point : " << point << std::endl << "Res : " << (bsp(x, y, z, point) ? "Point is inside the triangle" : "Point is outside the triangle") << std::endl;
	return (0);
}
