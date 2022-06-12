/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 16:12:57 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/12 16:29:54 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

};

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "\033[0;34mI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\033[0m" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "\033[0;33mI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month. \033[0m" << std::endl;

}

void	Harl::error( void )
{
	std::cout << "\033[0;31mThis is unacceptable! I want to speak to the manager now.\033[0m" << std::endl;
}

void	Harl::complain( std::string level )
{
	void	(Harl::*write_msg[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			(this->*write_msg[i])();
	}
}
