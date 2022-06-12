/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:18:39 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/12 16:04:08 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	replace_content( std::string line, std::string s1, std::string s2 )
{
	std::string	res;
	std::size_t	tmp;

	tmp = line.find(s1);
	res = line.substr(0, tmp).append(s2.append(line.substr(tmp + s1.length())));
	return (res);
}

int	main( int ac, char **av )
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		return (1);
	}

	std::string		file_name = av[1];
	std::ifstream	infile (file_name.c_str());
	file_name.append(".replace");
	std::ofstream	outfile (file_name.c_str());
	std::string		line;
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	
	while (std::getline(infile, line))
	{
		while (line.find(s1) != std::string::npos)
			line = replace_content(line, s1, s2);
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();

	return (0);
}
