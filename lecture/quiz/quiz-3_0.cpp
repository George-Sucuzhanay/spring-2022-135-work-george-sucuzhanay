#include <iostream>


int main()
{
    std::string numOne, numTwo;
    std::cout << "Enter one num: ";
    std::cin >> numOne;
    std::cout << "Enter another num: ";
    std::cin >> numTwo;

    if(numOne > numTwo)
        std::cout << numOne << std::endl;
    else
        std::cout << numTwo << std::endl;

    return 0;
}