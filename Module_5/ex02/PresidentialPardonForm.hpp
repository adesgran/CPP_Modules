/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:49:50 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/28 11:10:34 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# define DEBUG 1

# include <iostream>
# include <string>
# include <Form.hpp>
# include <Bureaucrat.hpp>

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm &presidentialpardonform );
		~PresidentialPardonForm( void );
		PresidentialPardonForm &operator=( const PresidentialPardonForm &presidentialpardonform );

		std::string const	getTarget( void ) const;
		void	execute( Bureaucrat const & executor ) const;

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
