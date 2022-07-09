/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:49:58 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/28 11:11:53 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form( "Presidential Pardon" , 25, 5 ), _target( target )
{
	if (DEBUG)
		std::cout << "\033[0;34mPresidentialPardonForm default Contructor called\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialpardonform) : Form( "Presidential Pardon" , 25, 5 ), _target( presidentialpardonform.getTarget() )
{
	if (DEBUG)
		std::cout << "\033[0;34mPresidentialPardonForm copy Contructor called\033[0m" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mPresidentialPardonForm Destructor called\033[0m" << std::endl;
};

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialpardonform)
{
	if (DEBUG)
		std::cout << "\033[0;34mPresidentialPardonForm copy Operator called\033[0m" << std::endl;
	(void)presidentialpardonform;
	return (*this);
}

std::string const	PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if (executor.getGrade() > this->getGradeToExec())
		throw PresidentialPardonForm::GradeTooLowException();
	std::cout << "\033[0;32m" << this->_target << " has been pardoned by Zaphod Beeblebrox!\033[0m" << std::endl;
}
