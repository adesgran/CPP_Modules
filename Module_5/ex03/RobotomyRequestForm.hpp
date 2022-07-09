/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:57:26 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/09 12:18:32 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# define DEBUG 1

# include <iostream>
# include <string>
# include <Form.hpp>
# include <Bureaucrat.hpp>
# include <stdlib.h>
# include <time.h>
# include <sys/time.h>

class RobotomyRequestForm : public Form 
{
	public:
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm &robotomyrequestform );
		~RobotomyRequestForm( void );
		RobotomyRequestForm &operator=( const RobotomyRequestForm &robotomyrequestform );

		void	execute( Bureaucrat const & executor ) const;
		std::string const	getTarget( void ) const;


	private:
		std::string const	_target;

		class GradeTooLowException : public std::exception 
		{
			public:
				virtual const char	*what( void ) const throw()
				{
					return ("Grade too low");
				}
		};
};

#endif
