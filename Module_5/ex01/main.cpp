/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:25:43 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/25 16:13:05 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <Bureaucrat.hpp>

int main( void )
{
	Bureaucrat bur("Joe");

	bur.setGrade(3);
	std::cout << bur << std::endl;
	try
	{
		bur.incrementGrade();
		bur.incrementGrade();
		bur.incrementGrade();
		bur.decrementGrade();
		bur.decrementGrade();
		bur.decrementGrade();
	}
	catch (std::exception &s)
	{
		std::cout << "\033[0;31mException Catched :" << std::endl;
		std::cerr << "    " << s.what()  << "\033[0m" << std::endl;
	}
	std::cout << bur << std::endl;


	Form form("Contract", 60, 60);
	bur.setGrade(61);
	bur.signForm(form);

	std::cout << bur << std::endl << form << std::endl;

	bur.setGrade(60);
	bur.signForm(form);

	std::cout << bur << std::endl << form << std::endl;

	try
	{
		Form form2("FakeForm", 1, 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);

}
