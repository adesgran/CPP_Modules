/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:46:02 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/16 12:46:02 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T > 
MutantStack<T>::MutantStack(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mMutantStack default Contructor called\033[0m" << std::endl;
	this->push(0);
	this->_begin = MutantStack<T>::iterator(&this->top());
	this->pop();
}

template < typename T > 
MutantStack<T>::MutantStack(const MutantStack<T> &mutantstack)
{
	if (DEBUG)
		std::cout << "\033[0;34mMutantStack copy Contructor called\033[0m" << std::endl;
	(void)mutantstack;
}

template < typename T > 
MutantStack<T>::~MutantStack(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mMutantStack Destructor called\033[0m" << std::endl;
};

template < typename T > 
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &mutantstack)
{
	if (DEBUG)
		std::cout << "\033[0;34mMutantStack copy Operator called\033[0m" << std::endl;
	(void)mutantstack;
	return (*this);
}

template < typename T > 
typename MutantStack<T>::iterator 	MutantStack<T>::begin( void )
{
	if (this->size() < 2)
		return (MutantStack<T>::iterator(NULL));
	return (this->_begin);
}

template < typename T > 
typename MutantStack<T>::iterator 	MutantStack<T>::end( void )
{
	this->push(0);
	this->_end = MutantStack<T>::iterator(&this->top());
	this->pop();
	return (this->_end);
}
