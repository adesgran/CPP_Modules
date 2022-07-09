/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:39:34 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/09 12:17:55 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form( "Robotomy Request" , 72, 45 ), _target( target )
{
	if (DEBUG)
		std::cout << "\033[0;34mRobotomyRequestForm default Contructor called\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyrequestform) : Form( "Robotomy Request" , 72, 45),  _target( robotomyrequestform.getTarget() )
{
	if (DEBUG)
		std::cout << "\033[0;34mRobotomyRequestForm copy Contructor called\033[0m" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mRobotomyRequestForm Destructor called\033[0m" << std::endl;
};

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyrequestform)
{
	if (DEBUG)
		std::cout << "\033[0;34mRobotomyRequestForm copy Operator called\033[0m" << std::endl;
	(void)robotomyrequestform;
	return (*this);
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	if (executor.getGrade() > this->getGradeToExec())
		throw RobotomyRequestForm::GradeTooLowException();
	std::cout << "\033[0;33mMakes some drilling noises\033[0m" << std::endl;

	struct timeval tv;
	gettimeofday(&tv, NULL);
	if (tv.tv_usec % 2)
		std::cout << "\033[0;32m" << this->_target << " has been robotomized!\033[0m" << std::endl;
	else
		std::cout << "\033[0;31m" << this->_target << " robotomy failed!\033[0m" << std::endl;
}

std::string const	RobotomyRequestForm::getTarget( void ) const
{
	return (this->_target);
}
