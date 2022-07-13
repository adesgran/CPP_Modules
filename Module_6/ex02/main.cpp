/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:57:52 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/13 15:43:17 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <A.hpp>
#include <B.hpp>
#include <C.hpp>
#include <iostream>
#include <string>
#include <time.h>
#include <sys/time.h>
#include <exception>

Base	*generate( void )
{
	struct timeval tv;
	gettimeofday(&tv, NULL);
	switch (tv.tv_usec % 3) {
		case 0:
			std::cout << "Class A generated" << std::endl;
			return (new A());
			break;
		case 1:
			std::cout << "Class B generated" << std::endl;
			return (new B());
			break;
		case 2:
			std::cout << "Class C generated" << std::endl;
			return (new C());
			break;
		default:
			return (NULL);
			break;
	}
}

void	identify(Base *p)
{
	if (!p)
	{
		std::cout << "\033[0;31mPointer identification : NULL PTR\033[0m" << std::endl;
		return ;
	}
	A *a = dynamic_cast<A *>(p);
	if (a)
		std::cout << "Pointer identification : Class = A" << std::endl;
	else
	{
		B *b = dynamic_cast<B *>(p);
		if (b)
			std::cout << "Pointer identification : Class = B" << std::endl;
		else
		{
			C *c = dynamic_cast<C *>(p);
			if (c)
				std::cout << "Pointer identification : Class = C" << std::endl;
			else
				std::cout << "Pointer identification : Class = Unknown" << std::endl;
		}

	}
}

void	identify(Base &p)
{
	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "Reference identification : Class = A" << std::endl;
	}
	catch (std::exception &bc)
	{
		try
		{
			B b = dynamic_cast<B &>(p);
			std::cout << "Reference identification : Class = B" << std::endl;
		}
		catch (std::exception &bc)
		{
			try
			{
				C c = dynamic_cast<C &>(p);
				std::cout << "Reference identification : Class = C" << std::endl;
			}
			catch (std::exception &bc)
			{
				std::cout << "Reference identification : Class = Unknown" << std::endl;
			}
		}
	}
}

int main( void )
{
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete (ptr);

	return (0);
}
