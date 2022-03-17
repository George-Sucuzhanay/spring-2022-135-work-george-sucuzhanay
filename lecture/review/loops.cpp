#include <iostream>

int main()
{
    bool valid = false; //input not valid yet
    double input; //declare input var outside loop,
    //so it will persist after loop exit
    while (!valid) 
    {
        std::cout << "Please enter a positive value < 100: ";
        std::cin >> input;
        if (0 < input && input < 100)
        { 
            valid = true; 
        } 
        else
        { 
            std::cout << "Invalid input." << std::endl; 
        }
    }
    return 0;
};