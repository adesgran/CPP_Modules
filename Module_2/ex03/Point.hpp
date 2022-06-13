/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:57:37 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/13 16:09:59 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <Fixed.hpp>
#include <iostream>

class Point {
	public:
		Point( void );
		Point( const float x, const float y );
		Point( const Point &point );
		~Point( void );
		Point &operator=( const Point &point );

		Fixed	getX( void ) const;
		float	getXf( void ) const;
		float	getYf( void ) const;


	private:
		Fixed const	x;
		Fixed const	y;

};

std::ostream &operator<<(std::ostream &out, Point const &point);

#endif
