/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42->fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:55:49 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 15:25:32 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <iostream>
#include <string>

int	main( void )
{
	Animal *dog = new Dog();
	delete dog;

	//Animal *animal = new Animal();
	//delete animal;

	return (0);
}
