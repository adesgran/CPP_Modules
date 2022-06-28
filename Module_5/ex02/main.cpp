/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:25:43 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/28 11:05:04 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

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


	Form *form = new RobotomyRequestForm("Joe");
	bur.setGrade(61);
	bur.signForm(*form);

	std::cout << bur << std::endl << form << std::endl;

	bur.setGrade(60);
	bur.signForm(*form);

	std::cout << bur << std::endl << form << std::endl;

	return (0);

}
