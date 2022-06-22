/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42->fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:55:49 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 11:55:12 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <iostream>
#include <string>

int	main( void )
{
	const Animal *cat = new Cat();
	const Animal *dog = new Dog();

	delete (cat);
	delete (dog);

	return (0);
}
