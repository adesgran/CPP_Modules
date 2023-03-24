/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:59:37 by adesgran          #+#    #+#             */
/*   Updated: 2023/03/24 12:55:01 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

PmergeMe::PmergeMe(void)
{
}

PmergeMe::PmergeMe(int ac, char **av)
{
	this->set(ac, av);
}

PmergeMe::PmergeMe(const PmergeMe &pmergeme)
{
	*this = pmergeme;
}

PmergeMe::~PmergeMe(void)
{
};

PmergeMe &PmergeMe::operator=(const PmergeMe &pmergeme)
{
	this->_vector = pmergeme._vector;
	this->_deque = pmergeme._deque;
	return (*this);
}

void	PmergeMe::set(int ac, char **av)
{
	while (ac--)
	{
		std::string str(*av);
		for (std::string::iterator it = str.begin(); it != str.end(); it++)
		{
			if (!isdigit(*it))
				throw PmergeMe::invalidInputException();
		}
		try
		{
			std::stringstream	ss;
			int	i;
			ss << str;
			ss >> i;
			if (i == 2147483647 && str != "2147483647")
				throw PmergeMe::invalidInputException();
			for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
			{
				if (*it == i)
					throw PmergeMe::invalidInputException();
			}
			this->_vector.push_back(i);
			this->_deque.push_back(i);
		}
		catch (std::exception const &s)
		{
			throw PmergeMe::invalidInputException();
		}
		av++;
	}
}

void	PmergeMe::print( void )
{
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	for (std::deque<int>::iterator it = _deque.begin(); it != _deque.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}
