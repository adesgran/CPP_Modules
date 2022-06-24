/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:44:54 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/24 18:09:44 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>
#include <AMateria.hpp>
#include <Ice.hpp>
#include <Cure.hpp>
#include <MateriaSource.hpp>

int	main( void )
{
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return (0);
}

/*
int	main( void )
{
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* joe = new Character("Joe");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	joe->equip(tmp);
	tmp = src->createMateria("cure");
	joe->equip(tmp);

	ICharacter* bob = new Character("Bob");
	bob->equip(src->createMateria("cure"));

	joe->unequip(1);
	delete tmp;

	joe->use(0, *bob);
	bob->use(0, *bob);

	delete bob;
	delete joe;
	delete src;

	return (0);
}
*/
