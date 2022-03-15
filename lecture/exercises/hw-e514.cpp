/*
Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E5.14

Write a function that will swaps the
values of a and b
Conditional:
    if a > b
    otherwise a and b are unchanged
return the values independently

*/

#include <iostream>

void sort2(int& a, int& b)
{
    if(a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
}
int main() 
{
    
    int a  = 30;
    int b = 20;
    sort2(a,b);
    std::cout << a << " " << b << std::endl;
    a = 40;
    b = 30;
    std::cout << a << " " << b << std::endl;

    return 0;
}