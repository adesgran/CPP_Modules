/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:37:56 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/07 21:15:36 by adesgran         ###   ########.fr       */
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
	this->_contacts[this->_nextContact].add();
	this->_nextContact = (this->_nextContact + 1) % 8;
}

void	PhoneBook::display_contact(int index)
{
	this->_contacts[index].display_all();
}
