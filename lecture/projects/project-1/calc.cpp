/*

Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Project 1B - calc.cpp

Goal: create a simple calculator
using std cin

Used numbers.txt to test program out

*/

#include <iostream>
#include <sstream>
int main()
{   
    char symbol = '+';
    char prevSym = '+';
    int num;
    int sum = 0;


    while(std::cin >> num >> symbol){
       if(prevSym == '+')
       {
           sum += num;
       }
       else if(prevSym == '-')
       {
           sum -= num;
       }
       prevSym = symbol;
        
    }  
    std::cin >> num;
    
    if(prevSym == '+')
    {
        sum += num;
    }
    else if(prevSym == '-')
    {
        sum -= num;
    }
    prevSym = symbol;

    std::cout << sum << std::endl;


    return 0;
}