/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:59:09 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/13 16:09:49 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

Point::Point(void) : x( Fixed(0) ), y( Fixed(0) )
{
}

Point::Point( const float X, const float Y ) : x( Fixed(X) ), y( Fixed(Y) )
{
}

Point::Point(const Point &point) : x( Fixed(point.getXf()) ), y( Fixed(point.getYf()) )
{
}

Point::~Point(void)
{
};

Point &Point::operator=(const Point &point)
{
	(void)point;
	return (*this);
}

Fixed	Point::getX(void) const
{
	return (this->x);

}

float	Point::getXf(void) const
{
	return (this->x.toFloat());
}

float	Point::getYf(void) const
{
	return (this->y.toFloat());
}

std::ostream &operator<<(std::ostream &out, Point const &point)
{
	out << "(" << point.getXf() << ";" << point.getYf() << ")";
	return (out);
}
