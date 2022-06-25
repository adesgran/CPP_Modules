/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:57:26 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/25 16:57:56 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# define DEBUG 1

# include <iostream>
# include <string>
# include <Form.hpp>
# include <Bureaucrate.hpp>

class RobotomyRequestForm {
	public:
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm &robotomyrequestform );
		~RobotomyRequestForm( void );
		RobotomyRequestForm &operator=( const RobotomyRequestForm &robotomyrequestform );


	private:
		std::string const	_target;

};

#endif
