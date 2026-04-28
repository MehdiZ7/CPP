#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "Array.hpp"

#define MAX_VAL 750
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
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

    std::cout << " ----- test default constructor -------" << std::endl;

    Array<int> empty;
    std::cout << "Size of empty array: " << empty.size() << std::endl;
    std::cout<<std::endl;

    std::cout << "---- testing size method with array of doubles ---" << std::endl;
    Array<double> testing(42);
    std::cout << "Size expected : 42 . size we have : " << testing.size()<< std::endl;
    std::cout<<std::endl;

    std::cout<< "------ Testing with std::string array ----- " << std::endl;
    Array<std::string> string(3);
    string[0] = "hello";
    string[1] = "world";
    string[2] = "Bye";
    for (unsigned int i = 0; i < string.size(); i++)
    {
        std::cout << string[i] << std::endl;
    }
    return 0;
}
