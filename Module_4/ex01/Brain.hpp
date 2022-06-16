/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:39:52 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/16 15:39:53 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain {
	public:
		Brain( void );
		Brain( const Brain &brain );
		~Brain( void );
		Brain &operator=( const Brain &brain );


	private:

};

#endif
