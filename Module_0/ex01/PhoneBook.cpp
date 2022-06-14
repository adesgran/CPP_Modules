/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:37:56 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 13:15:21 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

PhoneBook::PhoneBook(void)
{
	this->_nextContact = 0;
}

PhoneBook::~PhoneBook(void)
{

};

void	PhoneBook::add_contact(void)
{
	this->_contacts[this->_nextContact].add(this->_nextContact);
	this->_nextContact = (this->_nextContact + 1) % 8;
}

void	PhoneBook::display_contact(int index)
{
	this->_contacts[index].display_all();
}

void	PhoneBook::display_list(void)
{
	std::cout << "     index| firstname|  lastname|  nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (this->_contacts[i].isEmpty() == false)
			this->_contacts[i].display_list();
	}
}

void	PhoneBook::ADD(void)
{
	this->add_contact();
}

void	PhoneBook::SEARCH(void)
{
	std::string	input;
	int		i;
	int		res;

	if (this->_contacts[0].isEmpty())
	{
		std::cout << "\033[0;33mWarning : No contact in PhoneBook, please first use ADD command to add one\033[0m" << std::endl;
		return ;
	}
	while (1)
	{
		res = 0;
		this->display_list();
		std::cout << std::endl << "\033[0;94mIndex you want to read : \033[0m";
		if (!std::getline(std::cin, input))
			exit (1);
		std::cout << std::endl;
		for (i = 0; input[i]; i++)
			res += (std::isdigit(input[i]) ? 0 : 1);
		if (!res && atoi(input.c_str()) >= 0 && atoi(input.c_str()) <= 8)
		{
			if (this->_contacts[atoi(input.c_str())].isEmpty())
				std::cout << "\033[0;33mWarning : empty index, try a new entry\033[0m" << std::endl;
			else
			{
				this->_contacts[atoi(input.c_str())].display_all();
				break ;
			}
		}
		else
			std::cout << "\033[0;33mWarning : invalide index, try a new entry\033[0m" << std::endl;
	}
}
void	PhoneBook::EXIT(void)
{
	exit (0);
}

static void	display_cmd(void)
{
	std::cout << "\033[0;94mList of commands : " << std::endl << "ADD : add a new entry to the phonebook" << std::endl << "SEARCH : search for an entry in the phonebook" << std::endl << "EXIT : exit the phonebook (relatively explicit)\033[0m" << std::endl;
}
void	PhoneBook::launch(void)
{
	std::string input;

	std::cout << "\033[0;32mWelcome in PhoneBook !\033[0m" << std::endl;
	display_cmd();
	while (1)
	{
		std::cout << std::endl << "\033[0;35m$> \033[0m";
		if (!std::getline(std::cin, input))
			exit (1);
		std::cout << std::endl;
		if (input.compare(0, 4, "ADD") == 0)
			this->ADD();
		else if (input.compare(0, 7, "SEARCH") == 0)
			this->SEARCH();
		else if (input.compare(0, 5, "EXIT") == 0)
			this->EXIT();
		else
		{
			std::cout << "\033[0;33mWarning : unknown command !\033[0m" << std::endl;
			display_cmd();
		}
	}
}
