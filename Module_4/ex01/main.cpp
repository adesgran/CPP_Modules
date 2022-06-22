/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42->fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:55:49 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 14:55:43 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <iostream>
#include <string>

int	main( void )
{
	Animal *list[20];
	
	for (int i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
			list[i] = new Cat();
		else
			list[i] = new Dog();
		list[i]->makeSound();
	}

	for (int i = 0; i < 20; i++)
		delete list[i];

	
	{
		Dog dog = Dog();
		dog.getBrain()->setIdeas("\033[0;32mI'm a dog\033[0m", 0);
		Dog dog2 = dog;
		std::cout << dog2.getBrain()->getIdeas(0) << std::endl;
	}
	


	return (0);
}
