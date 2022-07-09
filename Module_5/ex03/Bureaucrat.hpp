/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:25:41 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/28 12:59:47 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define DEBUG 1

# include <iostream>
# include <string>
# include <stdexcept>
# include <Form.hpp>

class Form;

class Bureaucrat {
	public:
		Bureaucrat( void );
		Bureaucrat( std::string name );
		Bureaucrat( const Bureaucrat &bureaucrat );
		~Bureaucrat( void );
		Bureaucrat &operator=( const Bureaucrat &bureaucrat );

		std::string	getName( void ) const;
		int			getGrade( void ) const;

		void	incrementGrade( void );
		void	decrementGrade( void );
		void	setGrade( int grade );

		void	signForm( Form &form );
		void	executeForm(Form const &form);



	private:
		std::string const	_name;
		int					_grade;

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Grade is too low");
				}
		};
		class FormNotSignedException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Form need to be signed before execution");
				}
		};


};

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif
