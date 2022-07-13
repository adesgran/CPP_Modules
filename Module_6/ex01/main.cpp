/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:35:55 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/13 14:51:29 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Data.hpp>
#include <iostream>
#include <string>
#include <stdint.h>

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}	

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main( void )
{
	Data *ptr = new Data();

	uintptr_t raw = serialize(ptr);

	Data *new_ptr = deserialize(raw);

	std::cout << "ptr     : " << ptr << std::endl;
	std::cout << "raw     : " << raw << std::endl;
	std::cout << "new_ptr : " << new_ptr << std::endl;

	delete(new_ptr);
	return (0);
}

