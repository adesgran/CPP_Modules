/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:40:15 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/16 15:20:40 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# define DEBUG 0

# include <iostream>
# include <string>
# include <stack>
# include <iterator>

template < typename T > 
class MutantStack : public std::stack<T> {
	public:
		MutantStack<T>( void );
		MutantStack<T>( const MutantStack &mutantstack );
		~MutantStack<T>( void );
		MutantStack<T>	&operator=( const MutantStack &mutantstack );

		class iterator : public std::iterator<std::input_iterator_tag, T> 
		{
			public:
				iterator() : _ptr(NULL){}
				iterator(T *t) : _ptr(t){}
				iterator(const iterator &it) : _ptr(it._ptr){}
				iterator	&operator--() {--this->_ptr; return (*this);}
				iterator	operator--(T) {iterator tmp(*this); operator--(); return tmp;}
				iterator	&operator++() {++this->_ptr; return (*this);}
				iterator	operator++(T) {iterator tmp(*this); operator++(); return tmp;}
				bool operator==(const iterator& rhs) const {return this->_ptr==rhs._ptr;}
				bool operator!=(const iterator& rhs) const {return _ptr!=rhs._ptr;}
				T	&operator*( void ) {return *this->_ptr;}

			private:
				T	*_ptr;
		};

		MutantStack<T>::iterator	begin( void );
		MutantStack<T>::iterator	end( void );



	private:
		MutantStack<T>::iterator	_begin;
		MutantStack<T>::iterator	_end;

};

# include <MutantStack.tpp>

#endif
