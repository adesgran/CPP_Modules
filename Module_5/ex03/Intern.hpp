/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:54:49 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/09 14:42:57 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# define DEBUG 1

# include <iostream>
# include <string>
# include <Form.hpp>
# include <ShrubberyCreationForm.hpp>
# include <RobotomyRequestForm.hpp>
# include <PresidentialPardonForm.hpp>

class Intern {
	public:
		Intern( void );
		Intern( const Intern &intern );
		~Intern( void );
		Intern &operator=( const Intern &intern );

		Form	*makeForm(const std::string name, const std::string target);
	private:

};

#endif
