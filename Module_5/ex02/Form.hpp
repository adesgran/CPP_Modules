/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:08:19 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/25 16:42:41 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# define DEBUG 1

# include <iostream>
# include <string>
# include <stdexcept>
# include <Bureaucrat.hpp>

class Bureaucrat;

class Form {
	public:
		Form( void );
		Form( std::string name );
		Form( std::string name, int gradeToSign, int gradeToExec );
		Form( const Form &form );
		~Form( void );
		Form &operator=( const Form &form );

		std::string const	getName( void ) const;
		bool				getSigned( void ) const;
		int 				getGradeToSign( void ) const;
		int 				getGradeToExec( void ) const;

		void	beSigned( Bureaucrat &bur );
		void	execute( Bureaucrat const & executor ) const = 0;


	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExec;

		class GradeTooHighException : public std::exception 
		{
			public:
				virtual const char	*what( void ) const throw()
				{
					return ("Grade too high");
				}
		};
		class GradeTooLowException : public std::exception 
		{
			public:
				virtual const char	*what( void ) const throw()
				{
					return ("Grade too low");
				}
		};

};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif
