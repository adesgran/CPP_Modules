/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:47:10 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/13 14:26:48 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <converter.hpp>

int	get_precision(std::string str)
{
	int	i = 1;
	int	j = 0;
	while (str[j] != '.' && str[j])
		j++;
	while (isdigit(str[j + i + 1]) && str[j] && str[j + i + 1])
		i++;
	return (i + j + 1);
}


//CONVERTERS
static void	convert_from_char(std::string str)
{
	char c = str[0];
	int i = static_cast<int>(c);
	float f = static_cast<float>(i);
	double d = static_cast<double>(i);

	std::cout << "char: '" << c  << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ".0f" <<std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}

static void	convert_from_int(std::string str)
{
	double d = strtod(str.c_str(), NULL);
	int i = static_cast<int>(d);
	char c = static_cast<char>(d);
	float f = static_cast<float>(d);

	if (isprint(c) && d < 256 && d > 0)
		std::cout << "char: '" << c  << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (d >= INT_MIN && d <= INT_MAX)
	{
		std::cout << "int: " << i << std::endl;
		std::cout.precision(get_precision(str));
		std::cout << "float: " << f << ".0f" <<std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "int: INT OVERFLOW" << std::endl;
		std::cout << "float: INT OVERFLOW" << std::endl;
		std::cout << "double: INT OVERFLOW" << std::endl;
	}
}

static void	convert_from_float(std::string str)
{
	double d = strtod(str.c_str(), NULL);
	int i = static_cast<int>(d);
	char c = static_cast<char>(d);
	float f = static_cast<float>(d);

	if (isprint(c) && d < 256 && d > 0)
		std::cout << "char: '" << c  << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (d >= FLT_MIN && d <= FLT_MAX)
	{
		if (d >= INT_MIN && d <= INT_MAX)
			std::cout << "int: " << i << std::endl;
		else
			std::cout << "int: INT OVERFLOW" << std::endl;
		std::cout.precision(get_precision(str));
		std::cout << "float: " << f << ".0f" <<std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "int: FLOAT OVERFLOW" << std::endl;
		std::cout << "float: FLOAT OVERFLOW" << std::endl;
		std::cout << "double: FLOAT OVERFLOW" << std::endl;
	}
}

static void	convert_from_double(std::string str)
{
	double d = strtod(str.c_str(), NULL);
	int i = static_cast<int>(d);
	char c = static_cast<char>(d);
	float f = static_cast<float>(d);

	if (isprint(c) && d < 256 && d > 0)
		std::cout << "char: '" << c  << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (d >= INT_MIN && d <= INT_MAX)
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: INT OVERFLOW" << std::endl;
	std::cout.precision(get_precision(str));
	if (d >= FLT_MIN && d <= FLT_MAX)
		std::cout << "float: " << f << ".0f" <<std::endl;
	else
		std::cout << "float: FLOAT OVERFLOW" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}

//CHECKERS
static bool check_char(std::string str)
{
	if (str.size() != 1)
		return (false);
	char	c = str.c_str()[0];
	if (isprint(c) && !isdigit(c))
		return (true);
	return (false);
}

static bool	check_int(std::string str)
{
	if (str[0] == '-')
		str.erase(0, 1);
	if (!isdigit(str[0]))
		return (false);
	for (unsigned long i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

static bool check_float(std::string str)
{
	int	i = 0;
	if (str[i] == '-')
		i++;
	if (!isdigit(str[i]))
		return (false);
	while (isdigit(str[i]))
		i++;
	if (str[i] != '.')
		return (false);
	i++;
	if (!isdigit(str[i]))
		return (false);
	while (isdigit(str[i]))
		i++;
	if (str[i] != 'f')
		return (false);
	i++;
	if (str[i])
		return (false);
	return (true);
}

static bool check_double(std::string str)
{
	int	i = 0;
	if (str[i] == '-')
		i++;
	if (!isdigit(str[i]))
		return (false);
	while (isdigit(str[i]))
		i++;
	if (str[i] != '.')
		return (false);
	i++;
	if (!isdigit(str[i]))
		return (false);
	while (isdigit(str[i]))
		i++;
	if (str[i])
		return (false);
	return (true);
}

//MAIN FUNCTION
void	converter(std::string str)
{
	if (check_char(str))
		convert_from_char(str);
	else if (check_int(str))
		convert_from_int(str);
	else if (check_float(str))
		convert_from_float(str);
	else if (check_double(str))
		convert_from_double(str);
	else if (str == "nan" || str == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" <<std::endl;
		std::cout << "double: nan" <<std::endl;
	}
	else if (str == "+inf" || str == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" <<std::endl;
		std::cout << "double: +inf" <<std::endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" <<std::endl;
		std::cout << "double: -inf" <<std::endl;
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" <<std::endl;
		std::cout << "double: impossible" <<std::endl;
	}
}
