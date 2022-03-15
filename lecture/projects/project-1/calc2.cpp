/*

Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Project 1C - calc2.cpp

Goal: create a simple calculator
using std cin

Used numbers.txt to test program out

*/
#include <string>
#include <iostream>

int main()
{
    int input;
    char sign;
    int sum = 0;
    std::cin >> input;
    sum +=input;

    while(std::cin >> sign)
    {
        if(sign == ';')
        {
            std::cout << sum << std::endl;
            std::cin >> input;
            sum = input;
        }
        else
        {
            std::cin >> input;
            if(sign == '+')
            {
                sum += input;
            }
            else if(sign == '-')
            {
                sum -= input;
            }

        }
    }
    return 0;
}
