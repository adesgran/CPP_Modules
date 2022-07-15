/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:36:19 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/15 20:54:13 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span(unsigned int size)
{
	if (DEBUG)
		std::cout << "\033[0;34mSpan default Contructor called\033[0m" << std::endl;
	this->_size = size;
}

Span::Span(const Span &span)
{
	if (DEBUG)
		std::cout << "\033[0;34mSpan copy Contructor called\033[0m" << std::endl;
	this->_size = span.getSize();
}

Span::~Span(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mSpan Destructor called\033[0m" << std::endl;
};

Span &Span::operator=(const Span &span)
{
	if (DEBUG)
		std::cout << "\033[0;34mSpan copy Operator called\033[0m" << std::endl;
	this->_size = span.getSize();
	return (*this);
}

unsigned int	Span::getSize( void ) const
{
	return (this->_size);
}

void	Span::addNumber(int n)
{
	if (this->_numbers.size() >= this->_size)
		throw Span::FullSpanException();
	this->_numbers.push_back(n);
}

int	Span::shortestSpan(void)
{
	if (this->_numbers.size() < 2)
		throw Span::NotEnoughtNumbersException();

	std::sort(this->_numbers.begin(), this->_numbers.end());
	int res = this->_numbers[1] - this->_numbers[0];
	for (unsigned int i = 0; i < this->_numbers.size() - 1; i++)
	{
		if (this->_numbers[i + 1] - this->_numbers[i] < res)
			res = this->_numbers[i + 1] - this->_numbers[i] < res;
	}
	return (res);
}

int	Span::longestSpan(void)
{
	if (this->_numbers.size() < 2)
		throw Span::NotEnoughtNumbersException();
	int max = *std::max_element(this->_numbers.begin(), this->_numbers.end());
	int min = *std::min_element(this->_numbers.begin(), this->_numbers.end());
	return (max - min);
}

std::vector<int> const	Span::getNumbers( void ) const
{
	return (this->_numbers);
}

Span &Span::operator+( const std::vector<int> v )
{
	for (unsigned int i = 0; i < v.size(); i++)
		this->addNumber(v[i]);
	return (*this);
}

const char	*Span::FullSpanException::what( void ) const throw()
{
	return ("Span is full, can't add new numbers");
}

const char	*Span::NotEnoughtNumbersException::what( void ) const throw()
{
	return ("Not enought numbers");
}
