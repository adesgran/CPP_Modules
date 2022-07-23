/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:08:32 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/23 12:43:08 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <easyfind.hpp>
#include <string>
#include <vector>
#include <list>
#include <iterator>
#include <exception>

void	test1( void )
{
	std::cout << "\033[0;33m/////  TEST 1 (vector)\033[0m" << std::endl;

	std::vector<int> v(5, 0);
	std::cout << "| \033[0;94mVector size : 5\033[0m" << std::endl;

	std::cout << "| \033[0;94mFilling vector ( v[i] = i )\033[0m" << std::endl;
	for (int i = 0; i < 5; i++)
		v[i] = i;

	try
	{
		std::cout << "| \033[0;94mCalling easyfind( v, 2 )\033[0m" << std::endl;
		int res = *easyfind(v, 2);
		std::cout << "| \033[0;32mRes = " << res << "\033[0m" << std::endl;

		std::cout << "| \033[0;94mCalling easyfind( v, 5 )\033[0m" << std::endl;
		res = *easyfind(v, 5);
		std::cout << "| \033[0;32mRes = " << res << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "| \033[0;31mException catched : " <<  e.what() << "\033[0m" << std::endl;
	}
}

void	test2( void )
{
	std::cout << "\033[0;33m/////  TEST 2 (list)\033[0m" << std::endl;

	std::list<int> l(5, 0);
	std::cout << "| \033[0;94mList size : 5\033[0m" << std::endl;

	std::cout << "| \033[0;94mFilling list ( l[i] = i )\033[0m" << std::endl;
	for (int i = 0; i < 5; i++)
		l.push_back(i);

	try
	{
		std::cout << "| \033[0;94mCalling easyfind( l, 2 )\033[0m" << std::endl;
		int res = *easyfind(l, 2);
		std::cout << "| \033[0;32mRes = " << res << "\033[0m" << std::endl;

		std::cout << "| \033[0;94mCalling easyfind( l, 5 )\033[0m" << std::endl;
		res = *easyfind(l, 5);
		std::cout << "| \033[0;32mRes = " << res << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "| \033[0;31mException catched : " <<  e.what() << "\033[0m" << std::endl;
	}
}

void	test3( void )
{
	std::cout << "\033[0;33m/////  TEST 3 (list with multiple res)\033[0m" << std::endl;

	std::list<int> l;
	std::cout << "| \033[0;94mList size : 5\033[0m" << std::endl;

	std::cout << "| \033[0;94mFilling list ( l = {2, 6, 2, 7, 8} )\033[0m" << std::endl;
	l.push_back(2);
	l.push_back(6);
	l.push_back(2);
	l.push_back(7);
	l.push_back(8);

	try
	{
		std::cout << "| \033[0;94mCalling easyfind( l, 2 )\033[0m" << std::endl;
		int res = *easyfind(l, 2);
		std::cout << "| \033[0;32mRes = " << res << "\033[0m" << std::endl;

		res = *(++easyfind(l, 2));
		std::cout << "| \033[0;32mnext iterator = " << res << "\033[0m" << std::endl;

		std::cout << "| \033[0;94mCalling easyfind( l, 5 )\033[0m" << std::endl;
		res = *easyfind(l, 5);
		std::cout << "| \033[0;32mRes = " << res << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "| \033[0;31mException catched : " <<  e.what() << "\033[0m" << std::endl;
	}
}

int main( void )
{
	test1();
	std::cout << std::endl;
	test2();
	std::cout << std::endl;
	test3();
	std::cout << std::endl;
	return (0);
}
