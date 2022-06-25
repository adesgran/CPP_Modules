/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:25:39 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/25 15:03:34 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat(void) : _name( "UNKNOWN" )
{
	if (DEBUG)
		std::cout << "\033[0;34mBureaucrat default Contructor called\033[0m" << std::endl;
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name) : _name( name )
{
	if (DEBUG)
		std::cout << "\033[0;34mBureaucrat default Contructor called\033[0m" << std::endl;
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name( bureaucrat.getName() )
{
	if (DEBUG)
		std::cout << "\033[0;34mBureaucrat copy Contructor called\033[0m" << std::endl;
	this->_grade = bureaucrat.getGrade();
}

Bureaucrat::~Bureaucrat(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mBureaucrat Destructor called\033[0m" << std::endl;
};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	if (DEBUG)
		std::cout << "\033[0;34mBureaucrat copy Operator called\033[0m" << std::endl;
	this->_grade = bureaucrat.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade( void )
{
	if (this->_grade > 1)
		this->_grade -= 1;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade( void )
{
	if (this->_grade < 150)
		this->_grade += 1;
	else
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}
