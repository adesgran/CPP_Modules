/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:33:14 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/16 12:34:45 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>
#include <iostream>
#include <string>
#include <exception>

int main ( void )
{
	std::vector<int> v;
	v.push_back(3);
	v.push_back(7);
	v.push_back(80);
	v.push_back(1);
	Span * sp = new Span(5);
	
	try
	{
		sp->addNumber(12);
		sp->addNumber(111);
		sp->push_back(v);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Shortest Range : " << sp->shortestSpan() << std::endl;
	std::cout << "Longest Range : " << sp->longestSpan() << std::endl;

	delete sp;
	return (0);
}
