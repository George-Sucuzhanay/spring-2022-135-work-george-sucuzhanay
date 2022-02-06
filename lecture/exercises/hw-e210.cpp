/*
Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E2.10

Write a program that asks the user to input
- The number of gallons of gas in the tank
- The fuel efficiency in miles per gallon
- The price of gas per gallon 

Print the cost per 100 miles and how far the car 
can go with the gas in the tank.

*/
#include <iostream>

int main()
{
    double gallon,fuelEfficient, price;

    std::cout << "Enter number of gallons of gas in the tank: ";
    std::cin >> gallon;

    std::cout << "Enter fuel efficiency in miles per gallon: ";
    std::cin >> fuelEfficient;

    std::cout << "Enter price of gas per gallon: ";
    std::cin >> price;

    std::cout << price * 100 / fuelEfficient << std::endl;
    std::cout << gallon * fuelEfficient << std::endl;

    return 0;
}