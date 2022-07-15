#include <iostream>
#include <Array.hpp>
#include <time.h>
#include <stdlib.h>

#define MAX_VAL 750

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define WHITE "\033[0m"

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	
    Array<int> tmp = numbers;
    Array<int> test(tmp);

	std::cout << YELLOW << "Test of copy constructor and '=' operator overload" << WHITE << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != test[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	std::cout << GREEN << "Everythings OK" << WHITE << std::endl;
    try
    {
		std::cout << YELLOW << "Trying to access '-2' index" << WHITE << std::endl;
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << WHITE << '\n';
    }
    try
    {
		std::cout << YELLOW << "Trying to access '" << MAX_VAL << "' index" << WHITE << std::endl;
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << WHITE << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
