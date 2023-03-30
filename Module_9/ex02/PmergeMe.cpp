/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:59:37 by adesgran          #+#    #+#             */
/*   Updated: 2023/03/30 03:56:46 by adesgran         ###   ########.fr       */
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

std::deque<int>	PmergeMe::_deque_sort(std::deque<int> deq)
{
	std::deque<int>	res;

	if (deq.size() >= 3)
	{
		res = this->_deque_merge(
				this->_deque_sort(std::deque<int>(deq.begin(), deq.begin() + deq.size() / 2)),
				this->_deque_sort(std::deque<int>(deq.begin() + deq.size() / 2, deq.end())) 
			);
	}
	else if (deq.size() == 2)
	{
		if (deq[0] > deq[1])
		{
			res.push_back(deq[1]);
			res.push_back(deq[0]);
		}
		else
			res = deq;
	}
	else
		res.push_back(deq[0]);
	return (res);
}

std::deque<int>	PmergeMe::_deque_merge(std::deque<int> deq1, std::deque<int> deq2)
{
	std::deque<int>::iterator it1, it2;
	std::deque<int>	res;

	it1 = deq1.begin();
	it2 = deq2.begin();
	while ( it1 != deq1.end() || it2 != deq2.end() )
	{
		if ( it1 == deq1.end() )
		{
			res.push_back(*it2);
			it2++;
		}
		else if ( it2 == deq2.end() )
		{
			res.push_back(*it1);
			it1++;
		}
		else
		{
			if ( *it1 < *it2 )
			{
				res.push_back(*it1);
				it1++;
			}
			else
			{
				res.push_back(*it2);
				it2++;
			}
		}
	}
	return (res);
}

std::vector<int>	PmergeMe::_vector_sort(std::vector<int> vec)
{
	std::vector<int>	res;

	if (vec.size() >= 3)
	{
		res = this->_vector_merge(
				this->_vector_sort(std::vector<int>(vec.begin(), vec.begin() + vec.size() / 2)),
				this->_vector_sort(std::vector<int>(vec.begin() + vec.size() / 2, vec.end())) 
			);
	}
	else if (vec.size() == 2)
	{
		if (vec[0] > vec[1])
		{
			res.push_back(vec[1]);
			res.push_back(vec[0]);
		}
		else
			res = vec;
	}
	else
		res.push_back(vec[0]);
	return (res);
}

std::vector<int>	PmergeMe::_vector_merge(std::vector<int> vec1, std::vector<int> vec2)
{
	std::vector<int>::iterator it1, it2;
	std::vector<int>	res;

	it1 = vec1.begin();
	it2 = vec2.begin();
	while ( it1 != vec1.end() || it2 != vec2.end() )
	{
		if ( it1 == vec1.end() )
		{
			res.push_back(*it2);
			it2++;
		}
		else if ( it2 == vec2.end() )
		{
			res.push_back(*it1);
			it1++;
		}
		else
		{
			if ( *it1 < *it2 )
			{
				res.push_back(*it1);
				it1++;
			}
			else
			{
				res.push_back(*it2);
				it2++;
			}
		}
	}
	return (res);
}



void	PmergeMe::print( void )
{
	std::cout << "Before: ";
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	struct timeval begin, end;
	long	sec1, sec2, usec1, usec2;

	gettimeofday(&begin, 0);
	std::vector<int>	res = this->_vector_sort(_vector);
	gettimeofday(&end, 0);
	sec1 = end.tv_sec - begin.tv_sec;
	usec1 = end.tv_usec - begin.tv_usec;
	
	gettimeofday(&begin, 0);
	std::deque<int>	res2 = this->_deque_sort(_deque);
	gettimeofday(&end, 0);
	sec2 = end.tv_sec - begin.tv_sec;
	usec2 = end.tv_usec - begin.tv_usec;

	std::cout << "After: ";
	for (std::vector<int>::iterator it = res.begin(); it != res.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	if (sec1 > 0)
		std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : " << sec1 << " sec" << std::endl;
	else
		std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : " << usec1 << " us" << std::endl;

	if (sec2 > 0)
		std::cout << "Time to process a range of " << _vector.size() << " elements with std::deque : " << sec2 << " sec" << std::endl;
	else
		std::cout << "Time to process a range of " << _vector.size() << " elements with std::deque : " << usec2 << " us" << std::endl;
}
