/*

Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab Quiz 01

Goal: Prompts the user for a number using cin
and returns the number of lines of "I love C++"

std::cout was used in this program as well


*/

#include <iostream>
int main()
{
    int num;
    std::cout << "Enter number of line to repeat: ";
    std::cin >> num;
    int count = 0;
    while(count < num)
    {
        std::cout << "I love C++\n";
        count++;
    }
    
    return 0;
}