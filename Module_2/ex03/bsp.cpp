/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:50:10 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/20 15:54:07 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>
#include <iostream>

static float	sign(Point p1, Point p2, Point pt)
{
	return ((p1.getXf() - pt.getXf()) * (p2.getYf() - pt.getYf()) - (p2.getXf() - pt.getXf()) * (p1.getYf() - pt.getYf()));
}

bool	bsp( Point const a, Point const b, Point const c, Point point)
{
	float tmp1 = sign(a, b, point);
	float tmp2 = sign(b, c, point);
	float tmp3 = sign(c, a, point);
	
	bool	get_neg = ( tmp1 <= 0 || tmp2 <= 0 || tmp3 <= 0 );
	bool	get_pos = ( tmp1 >= 0 || tmp2 >= 0 || tmp3 >= 0 );
	return (!(get_neg && get_pos));
}
