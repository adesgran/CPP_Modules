/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:58:57 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/09 14:42:44 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

Intern::Intern(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mIntern default Contructor called\033[0m" << std::endl;
}

Intern::Intern(const Intern &intern)
{
	if (DEBUG)
		std::cout << "\033[0;34mIntern copy Contructor called\033[0m" << std::endl;
	(void)intern;
}

Intern::~Intern(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mIntern Destructor called\033[0m" << std::endl;
};

Intern &Intern::operator=(const Intern &intern)
{
	if (DEBUG)
		std::cout << "\033[0;34mIntern copy Operator called\033[0m" << std::endl;
	(void)intern;
	return (*this);
}

Form	*generateShrubberyCreation(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*generateRobotomyRequest(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*generatePresidentialPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(const std::string name, const std::string target)
{
	std::string forms_name[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form	*(*forms[3])(std::string) = {&generateShrubberyCreation, &generateRobotomyRequest, &generatePresidentialPardon};

	for (int i = 0; i < 3; i++)
	{
		if (name == forms_name[i])
		{
			std::cout << "\033[0;32mIntern creates " << name << "\033[0m" << std::endl;
			return (forms[i](target));
		}
	}
	std::cout << "\033[0;31mForm \033[0;33m" << name << "\033[0;31m doesn't exist, Intern stop working on it!\033[0m" << std::endl;
	return (NULL);
}
