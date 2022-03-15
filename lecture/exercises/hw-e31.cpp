/*
Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E3.1

Write a program that input an integer
and outputs whether its negative,
zero or positive


*/

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter a integer: ";
    int input;
    std::cin >> input;

    if (input < 0)
    {
        std::cout << "Negative\n";

    }
    else if (input > 0)
    {
        std::cout << "Positive\n";
    }
    else {
        std::cout << "Zero\n";
    }
    return 0;
}