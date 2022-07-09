/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:25:43 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/09 14:37:18 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <Intern.hpp>

void test1( void )
{
	Bureaucrat bur("Joe");
	Intern intern;
	Form *form = intern.makeForm("raspberry creation", "Tree");
	if (!form)
		return ;
	bur.setGrade(12);

	try
	{
		bur.signForm(*form);
		bur.executeForm(*form);
	}
	catch (std::exception &s)
	{
		std::cout << "\033[0;31mException Catched :" << std::endl;
		std::cerr << "    " << s.what()  << "\033[0m" << std::endl;
	}
	delete form;
}

void test2( void )
{
	Bureaucrat bur("Joe");
	Intern intern;
	Form *form = intern.makeForm("shrubbery creation", "Tree");
	if (!form)
		return ;
	bur.setGrade(12);

	try
	{
		bur.signForm(*form);
		bur.executeForm(*form);
	}
	catch (std::exception &s)
	{
		std::cout << "\033[0;31mException Catched :" << std::endl;
		std::cerr << "    " << s.what()  << "\033[0m" << std::endl;
	}
	delete form;
}

void test3( void )
{
	Bureaucrat bur("Joe");
	Intern intern;
	Form *form = intern.makeForm("robotomy request", "Mike");
	if (!form)
		return ;
	bur.setGrade(12);

	try
	{
		bur.signForm(*form);
		bur.executeForm(*form);
	}
	catch (std::exception &s)
	{
		std::cout << "\033[0;31mException Catched :" << std::endl;
		std::cerr << "    " << s.what()  << "\033[0m" << std::endl;
	}
	delete form;
}

void test4( void )
{
	Bureaucrat bur("Joe");
	Intern intern;
	Form *form = intern.makeForm("presidential pardon", "Mike");
	if (!form)
		return ;
	bur.setGrade(1);

	try
	{
		bur.signForm(*form);
		bur.executeForm(*form);
	}
	catch (std::exception &s)
	{
		std::cout << "\033[0;31mException Catched :" << std::endl;
		std::cerr << "    " << s.what()  << "\033[0m" << std::endl;
	}
	delete form;
}

int main( void )
{
	std::cout << "\033[0;33m<==========TEST1==========> //Intern with grade 140 and Shrubbery Creation Form\033[0m" << std::endl;
	test1();
	std::cout << "\033[0;33m<==========END==========>\033[0m" << std::endl << std::endl;
	std::cout << "\033[0;33m<==========TEST2==========> //Employ with grade 12 and Shrubbery Creation Form\033[0m" << std::endl;
	test2();
	std::cout << "\033[0;33m<==========END==========>\033[0m" << std::endl << std::endl;
	std::cout << "\033[0;33m<==========TEST3==========> //Employ with grade 12 and Robotomy Request Form\033[0m" << std::endl;
	test3();
	std::cout << "\033[0;33m<==========END==========>\033[0m" << std::endl << std::endl;
	std::cout << "\033[0;33m<==========TEST4==========> //Employ with grade 1 and Presidential Pardon Form\033[0m" << std::endl;
	test4();
	std::cout << "\033[0;33m<==========END==========>\033[0m" << std::endl << std::endl;
	return (0);
}
