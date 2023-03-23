/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:42:51 by adesgran          #+#    #+#             */
/*   Updated: 2023/03/23 14:26:42 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

RPN::RPN(void)
{
}

RPN::RPN(const RPN &rpn)
{
	*this = rpn;
}

RPN::~RPN(void)
{
};

RPN &RPN::operator=(const RPN &rpn)
{
	_stack = rpn._stack;
	return (*this);
}

float	RPN::solve( char *expr )
{
	while ( true )
	{
		if ( isdigit( *expr ) )
			_stack.push( *expr - '0' );
		else if ( _stack.size() < 2 )
			throw RPN::InvalidInputException();
		else
		{
			float	second = _stack.top();
			_stack.pop();
			float	first = _stack.top();
			_stack.pop();
			switch( *expr ) {
				case '+' :
					_stack.push(first + second);
					break;
				case '-' :
					_stack.push(first - second);
					break;
				case '*' :
					_stack.push(first * second);
					break;
				case '/' :
					_stack.push(first / second);
					break;
				default :
					throw RPN::InvalidInputException();
			}
			if (DEBUG)
				std::cout << first << *expr << second << "=" << _stack.top() << std::endl;
		}
		expr++;
		if ( !*expr )
			break;
		if ( *expr== ' ' )
			expr++;
		else if ( *expr)
			throw RPN::InvalidInputException();
	}
	if ( _stack.size() != 1 )
		throw RPN::InvalidInputException();
	return ( _stack.top() );

}
