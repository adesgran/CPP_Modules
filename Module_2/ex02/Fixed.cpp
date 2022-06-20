/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:19:15 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/20 14:29:09 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

const int	Fixed::_n_bits = 8;

Fixed::Fixed(void)
{
	this->_rawBits = 0;
}

Fixed::Fixed(int value)
{
	this->_rawBits = value << this->_n_bits;
}

Fixed::Fixed(float value)
{
	this->_rawBits = (int)(roundf(value * (1 << this->_n_bits))); 
}

Fixed::Fixed(const Fixed &fixed)
{
	this->_rawBits = fixed.getRawBits();
}

Fixed::~Fixed(void)
{
};

Fixed &Fixed::operator=(const Fixed &fixed)
{
	this->_rawBits = fixed.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}

int	Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits(int i)
{
	this->_rawBits = i;
}

int	Fixed::getNBits ( void ) const
{
	return (this->_n_bits);
}

int	Fixed::toInt(void) const
{
	return (this->_rawBits >> this->_n_bits);
}

float	Fixed::toFloat(void) const
{
	return (((float)this->_rawBits) / ( 1 << this->_n_bits));
}

//////Operator Overload//////

//Comparators

bool	Fixed::operator>( const Fixed &fixed )
{
	if (this->_rawBits > fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<( const Fixed &fixed )
{
	if (this->_rawBits < fixed.getRawBits())
		return (true);
	return (false);
}


bool	Fixed::operator>=( const Fixed &fixed )
{
	if (this->_rawBits >= fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=( const Fixed &fixed )
{
	if (this->_rawBits <= fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==( const Fixed &fixed )
{
	if (this->_rawBits == fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=( const Fixed &fixed )
{
	if (this->_rawBits != fixed.getRawBits())
		return (true);
	return (false);
}

//Arithmetic

Fixed	Fixed::operator*( const Fixed &fixed )
{
	Fixed	res;
	res.setRawBits((this->_rawBits * fixed.getRawBits()) >> this->_n_bits);
	return (res);
}

Fixed	Fixed::operator/( const Fixed &fixed )
{
	Fixed	res;
	if (res.getRawBits() == 0)
	{
		std::cout << "\033[0;31mImpossible division by 0\033[0m" << std::endl;
		return (res);
	}
	res.setRawBits((this->_rawBits << this->_n_bits) / fixed.getRawBits());
	return (res);
}

Fixed	Fixed::operator+( const Fixed &fixed )
{
	Fixed	res;
	res.setRawBits(this->_rawBits + fixed.getRawBits());
	return (res);
}

Fixed	Fixed::operator-( const Fixed &fixed )
{
	Fixed	res;
	res.setRawBits(this->_rawBits - fixed.getRawBits());
	return (res);
}

//Increment/Decrement

Fixed	&Fixed::operator++(void)
{
	this->_rawBits++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed res = *this;
	this->_rawBits++;
	return (res);	
}

Fixed	Fixed::operator--(int)
{
	Fixed res = *this;
	this->_rawBits--;
	return (res);	
}
//////

Fixed	&Fixed::min( Fixed &f1, Fixed &f2 )
{
	if (f2 < f1)
		return (f2);
	return (f1);
}

const Fixed	&Fixed::min( const Fixed &f1, const Fixed &f2 )
{
	if (f2.getRawBits() < f1.getRawBits())
		return (f2);
	return (f1);
}

Fixed	&Fixed::max( Fixed &f1, Fixed &f2 )
{
	if (f2 > f1)
		return (f2);
	return (f1);
}

const Fixed	&Fixed::max( const Fixed &f1, const Fixed &f2 )
{
	if (f2.getRawBits() > f1.getRawBits())
		return (f2);
	return (f1);
}
