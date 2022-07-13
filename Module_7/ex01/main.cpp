/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:54:15 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/13 17:12:56 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>
#include <iostream>
#include <string>

void	push_zero(std::string &str)
{
	str.push_back('0');
}

void	test2( void )
{
	std::string tab[3] = {"one", "two", "three"};

	void(*f)(std::string &);		
	f = &push_zero;

	std::cout << "List before : " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << tab[i] << std::endl;
	}

	iter(tab, 3, f);

	std::cout << "List after : " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << tab[i] << std::endl;
	}
}

void	square(int &x)
{
	x = x * x;
}

void	test1( void )
{
	int tab[3] = {1, 2, 3};

	void(*f)(int &);		
	f = &square;

	std::cout << "List before : " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << tab[i] << std::endl;
	}

	iter(tab, 3, f);

	std::cout << "List after : " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << tab[i] << std::endl;
	}
}

int main( void )
{
	std::cout << "TEST1 //int" << std::endl;
	test1();
	std::cout << std::endl << "TEST2 //string" << std::endl;
	test2();
	return (0);
}
