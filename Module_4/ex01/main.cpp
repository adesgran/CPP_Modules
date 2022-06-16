/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42->fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:55:49 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/16 15:27:35 by adesgran         ###   ########.fr       */
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
	const Animal *cat = new Cat();
	const Animal *dog = new Dog();

	std::cout << "Cat type : " << cat->getType() << std::endl;
	std::cout << "Dog type : " << dog->getType() << std::endl << std::endl;
	std::cout << "Cat sound : ";
	cat->makeSound();
	std::cout << "Dog sound : ";
	dog->makeSound();
	
	std::cout << std::endl;

	const WrongAnimal *wcat = new WrongCat();

	std::cout << std::endl;
	
	std::cout << "WrongCat sound : ";
	wcat->makeSound();
	std::cout << std::endl;

	delete (cat);
	delete (dog);
	delete (wcat);

	return (0);
}
