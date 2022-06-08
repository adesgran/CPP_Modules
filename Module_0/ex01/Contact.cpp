/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:38:17 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/08 12:13:32 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Contact.hpp>
#include <stdlib.h>
#include <string.h>

Contact::Contact(void)
{
	this->_isEmpty = true;
}

Contact::~Contact(void)
{

};

void	Contact::set_index(int index)
{
	this->_index = index;
}

int	Contact::index(void)
{
	return (this->_index);
}

void	Contact::add(int index)
{
	std::string	tmp;
	int			i;

	std::cout << "\033[0;94mEnter contact informations\033[0m" << std::endl << std::endl;
	while (1)
	{
		std::cout << "\033[0;94m-Name : \033[0m";
		if (!std::getline(std::cin, tmp))
			exit (1);
		std::cout << std::endl;
		if (tmp.length() > 511)
			std::cout << "\033[0;33m  Warning : Name too long !\033[0m" << std::endl << std::endl;
		else if (tmp.length() < 1)
			std::cout << "\033[0;33m  Warning : Empty Name !\033[0m" << std::endl << std::endl;
		else
		{
			this->_firstName[0] = '\0';
			strcat(this->_firstName, tmp.c_str());
			break ;
		}
		std::cout << "\033[0;94mTry again\033[0m" << std::endl << std::endl;
	}
	while (1)
	{
		std::cout << "\033[0;94m-Last Name : \033[0m";
		if (!std::getline(std::cin, tmp))
			exit (1);
		std::cout << std::endl;
		if (tmp.length() > 511)
			std::cout << "\033[0;33m  Warning : Last Name too long !\033[0m" << std::endl << std::endl;
		else if (tmp.length() < 1)
			std::cout << "\033[0;33m  Warning : Empty Last Name !\033[0m" << std::endl << std::endl;
		else
		{
			this->_lastName[0] = '\0';
			strcat(this->_lastName, tmp.c_str());
			break ;
		}
		std::cout << "\033[0;94mTry again\033[0m" << std::endl << std::endl;
	}
	while (1)
	{
		std::cout << "\033[0;94m-Nickname : \033[0m";
		if (!std::getline(std::cin, tmp))
			exit (1);
		std::cout << std::endl;
		if (tmp.length() > 511)
			std::cout << "\033[0;33m  Warning : Nickname too long !\033[0m" << std::endl << std::endl;
		else if (tmp.length() < 1)
			std::cout << "\033[0;33m  Warning : Empty Nickname !\033[0m" << std::endl << std::endl;
		else
		{
			this->_nickname[0] = '\0';
			strcat(this->_nickname, tmp.c_str());
			break ;
		}
		std::cout << "\033[0;94mTry again\033[0m" << std::endl << std::endl;
	}
	while (1)
	{
		std::cout << "\033[0;94m-Phone Number : \033[0m";
		if (!std::getline(std::cin, tmp))
			exit (1);
		std::cout << std::endl;
		i = 0;
		while (tmp[i])
		{
			if (tmp[i] < '0' || tmp[i] > '9')
			{
				i = -1;
				break ;
			}
			i++;
		}
		if (i == -1)
			std::cout << "\033[0;33m  Warning : Phone Number can only contain numbers !\033[0m" << std::endl << std::endl;
		else if (tmp.length() < 1)
			std::cout << "\033[0;33m  Warning : Empty Phone Number !\033[0m" << std::endl << std::endl;
		else if (i == 10)
		{
			this->_phoneNumber[0] = '\0';
			strcat(this->_phoneNumber, tmp.c_str());
			break ;
		}
		else
			std::cout << "\033[0;33m  Warning : Wrong size for a Phone Number !\033[0m" << std::endl << std::endl;
		std::cout << "\033[0;94mTry again\033[0m" << std::endl << std::endl;
	}
	while (1)
	{
		std::cout << "\033[0;94m-Darkest Secret : \033[0m";
		if (!std::getline(std::cin, tmp))
			exit (1);
		std::cout << std::endl;
		if (tmp.length() > 2047)
			std::cout << "\033[0;33m  Warning : Darkest Secret too long !\033[0m" << std::endl << std::endl;
		else if (tmp.length() < 1)
			std::cout << "\033[0;33m  Warning : Empty Dark Secret !\033[0m" << std::endl << std::endl;
		else
		{
			this->_darkestSecret[0] = '\0';
			strcat(this->_darkestSecret, tmp.c_str());
			break ;
		}
		std::cout << "\033[0;94mTry again\033[0m" << std::endl << std::endl;
	}
	std::cout << "\033[0;32mContact Successfully added\033[0m" << std::endl << std::endl;
	this->_isEmpty = false;
	this->_index = index;
}

void	Contact::display_all(void)
{
	std::cout << "\033[0;94m///////" << this->_firstName << " (" << this->_nickname << ")" << this->_lastName << " : \033[0m"<< std::endl;
	std::cout << "\033[0;94mName : \033[0m" << this->_firstName << std::endl;
	std::cout << "\033[0;94mLast Name : \033[0m" << this->_lastName << std::endl;
	std::cout << "\033[0;94mNickname : \033[0m" << this->_nickname << std::endl;
	std::cout << "\033[0;94mPhone Number : \033[0m" << this->_phoneNumber << std::endl;
	std::cout << "\033[0;94mDarkest Secret: \033[0m" << this->_darkestSecret << std::endl;
	std::cout << "\033[0;94m///////\033[0m" << std::endl;
}

void	Contact::display_list(void)
{
	unsigned long int	i;

	////display index
	std::cout << "         \033[0;94m" << this->_index << "\033[0m";

	////display name
	std::cout << "|\033[0;94m";
	if (strlen(this->_firstName) <= 10)
	{
		for (i = 0; i < 10 - strlen(this->_firstName); i++)
			std::cout << " ";
		std::cout << this->_firstName;
	}
	else
	{
		for (i = 0; i < 9; i++)
			std::cout << this->_firstName[i];
		std::cout << ".";
	}
	std::cout << "\033[0m";

	////display last name
	std::cout << "|\033[0;94m";
	if (strlen(this->_lastName) <= 10)
	{
		for (i = 0; i < 10 - strlen(this->_lastName); i++)
			std::cout << " ";
		std::cout << this->_lastName;
	}
	else
	{
		for (i = 0; i < 9; i++)
			std::cout << this->_lastName[i];
		std::cout << ".";
	}
	std::cout << "\033[0m";

	////display nickname
	std::cout << "|\033[0;94m";
	if (strlen(this->_nickname) <= 10)
	{
		for (i = 0; i < 10 - strlen(this->_nickname); i++)
			std::cout << " ";
		std::cout << this->_nickname;
	}
	else
	{
		for (i = 0; i < 9; i++)
			std::cout << this->_nickname[i];
		std::cout << ".";
	}
	std::cout << "\033[0m" << std::endl;
}

bool	Contact::isEmpty(void)
{
	return (this->_isEmpty);
}
