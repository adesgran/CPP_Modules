/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:23:37 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/28 11:14:08 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation", 145, 137), _target( target )
{
	if (DEBUG)
		std::cout << "\033[0;34mShrubberyCreationForm default Contructor called\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberycreationform) : Form("Shrubbery Creation", 145, 137), _target( shrubberycreationform.getTarget() )
{
	if (DEBUG)
		std::cout << "\033[0;34mShrubberyCreationForm copy Contructor called\033[0m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mShrubberyCreationForm Destructor called\033[0m" << std::endl;
};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberycreationform)
{
	if (DEBUG)
		std::cout << "\033[0;34mShrubberyCreationForm copy Operator called\033[0m" << std::endl;
	(void)shrubberycreationform;
	return (*this);
}

std::string const	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	if (executor.getGrade() > this->getGradeToExec())
		throw ShrubberyCreationForm::GradeTooLowException();
	std::ofstream outfile (this->getTarget().append("_shrubbery"));
	if (!outfile || outfile.is_open() == false)
		throw ShrubberyCreationForm::CantOpenFileException();
	outfile << "       _-_" << std::endl;	
	outfile << "    /~~   ~~\\" << std::endl;	
	outfile << " /~~         ~~\\" << std::endl;	
	outfile << "{               }" << std::endl;	
	outfile << " \\  _-     -_  /" << std::endl;	
	outfile << "   ~  \\\\ //  ~" << std::endl;	
	outfile << "_- -   | | _- _" << std::endl;	
	outfile << "  _ -  | |   -_" << std::endl;	
	outfile << "      // \\\\" << std::endl;	
	outfile.close();
}
