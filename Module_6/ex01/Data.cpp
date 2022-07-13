/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:33:40 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/13 14:43:05 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Data.hpp>

Data::Data(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mData default Contructor called\033[0m" << std::endl;
	this->_value = 0;
}

Data::Data(const Data &data)
{
	if (DEBUG)
		std::cout << "\033[0;34mData copy Contructor called\033[0m" << std::endl;
	this->_value = data.getValue();
}

Data::~Data(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mData Destructor called\033[0m" << std::endl;
};

Data &Data::operator=(const Data &data)
{
	if (DEBUG)
		std::cout << "\033[0;34mData copy Operator called\033[0m" << std::endl;
	this->_value = data.getValue();
	return (*this);
}

int Data::getValue(void) const
{
	return (this->_value);
}

void	Data::setValue(int value)
{
	this->_value = value;
}
