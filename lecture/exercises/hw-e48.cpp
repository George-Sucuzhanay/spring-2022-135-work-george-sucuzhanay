/*
Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E3.5

Write a program that reads a word prints
each character per line


We do this by intialziing string str
and looping through it and using the at cpp method



*/
#include <iostream>
int main()
{
    std::string str;
    std::cin >> str;
    for(int i = 0; i < str.length(); i++)
    {
        std::cout << str.at(i) << std::endl;
    }
    return 0;
}