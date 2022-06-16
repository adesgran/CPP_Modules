/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:55:49 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/16 14:54:57 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#include <iostream>
#include <string>

int	main( void )
{
	Cat cat;
	Dog dog;
	Animal	animal;

	std::cout << "Cat type : " << cat.getType() << std::endl;
	std::cout << "Dog type : " << dog.getType() << std::endl << std::endl;
	std::cout << "Cat sound : ";
	cat.makeSound();
	std::cout << "Dog sound : ";
	dog.makeSound();
	
	std::cout << std::endl;

	WrongCat	wcat;

	std::cout << std::endl;
	
	std::cout << "WrongCat sound : ";
	wcat.makeSound();
	//WrongCat::makeSound();
	std::cout << std::endl;
	return (0);
}
