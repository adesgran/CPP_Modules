/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:17:31 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/25 16:57:23 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# define DEBUG 1

# include <iostream>
# include <string>
# include <Form.hpp>
# include <Bureaucrate.hpp>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm &shrubberycreationform );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm &operator=( const ShrubberyCreationForm &shrubberycreationform );

		std::string const	getTarget( void ) const;

		void	execute( Bureaucrat const & executor ) const;

	private:
		std::string const	target;

		class CantOpenFileException : public std::exception 
		{
			public:
				virtual const char	*what( void ) const throw()
				{
					return ("Can't open file in write mode");
				}
		};

};

#endif
