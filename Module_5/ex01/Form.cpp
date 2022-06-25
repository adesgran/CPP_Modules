/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:30:07 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/25 16:10:53 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form(void) : _name( "UNKNOWN" ), _gradeToSign( 50 ), _gradeToExec( 50 )
{
	if (DEBUG)
		std::cout << "\033[0;34mForm default Contructor called\033[0m" << std::endl;
	this->_signed = false;
}

Form::Form(std::string name) : _name( name ), _gradeToSign( 50 ), _gradeToExec( 50 )
{
	if (DEBUG)
		std::cout << "\033[0;34mForm default Contructor called\033[0m" << std::endl;
	this->_signed = false;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name( name ), _gradeToSign( gradeToSign ), _gradeToExec( gradeToExec )
{
	if (DEBUG)
		std::cout << "\033[0;34mForm default Contructor called\033[0m" << std::endl;
	this->_signed = false;
	if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &form) : _name( form.getName() ), _gradeToSign( form.getGradeToSign() ), _gradeToExec( form.getGradeToExec() )
{
	if (DEBUG)
		std::cout << "\033[0;34mForm copy Contructor called\033[0m" << std::endl;
	this->_signed = form.getSigned();
	if (form.getGradeToSign() > 150 || form.getGradeToExec() > 150)
		throw Form::GradeTooLowException();
	else if (form.getGradeToSign() < 1 || form.getGradeToExec() < 1)
		throw Form::GradeTooHighException();
}

Form::~Form(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mForm Destructor called\033[0m" << std::endl;
};

Form &Form::operator=(const Form &form)
{
	if (DEBUG)
		std::cout << "\033[0;34mForm copy Operator called\033[0m" << std::endl;
	this->_signed = form.getSigned();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << "Form " << form.getName() << " need at least grade " << form.getGradeToSign() << " to be signed and grade " << form.getGradeToExec() << " to be executed. ";
	if (form.getSigned())
		out << "Status : Signed";
	else
		out << "Status : Unsigned";
	return (out);
}

std::string const	Form::getName( void ) const
{
	return (this->_name);
}

bool				Form::getSigned( void ) const
{
	return (this->_signed);
}

int Form::getGradeToSign( void ) const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExec( void ) const
{
	return (this->_gradeToExec);
}

void	Form::beSigned( Bureaucrat &bur )
{
	if (bur.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}
