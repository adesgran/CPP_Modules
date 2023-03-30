/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:59:41 by adesgran          #+#    #+#             */
/*   Updated: 2023/03/30 03:50:10 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# define DEBUG 1

# include <iostream>
# include <string>
# include <sys/time.h>
# include <vector>
# include <deque>
# include <stdexcept>
# include <sstream>

class PmergeMe {
	public:
		PmergeMe( void );
		PmergeMe( int ac, char **av );
		PmergeMe( const PmergeMe &pmergeme );
		~PmergeMe( void );
		PmergeMe &operator=( const PmergeMe &pmergeme );

		void	set( int ac, char **av );
		void	print( void );

	private:
		std::vector<int> _vector;
		std::deque<int>  _deque;
		double	vectorTime;
		double	dequeTime;
		std::vector<int>	_vector_merge(std::vector<int> vec1, std::vector<int> vec2);
		std::vector<int>	_vector_sort(std::vector<int> vec);
		std::deque<int>	_deque_merge(std::deque<int> deq1, std::deque<int> deq2);
		std::deque<int>	_deque_sort(std::deque<int> deq);

		class	invalidInputException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Invalid Input");
				}
		};


};

#endif
