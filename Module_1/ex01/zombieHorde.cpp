/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:39:26 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/10 13:49:06 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie*	zombieHorde( int N, std::string name)
{
	Zombie *res = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		res[i].set_name(name);
		res[i].announce();
	}

	return (res);
}
