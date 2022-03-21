// Section 7.1 Pointers

/*

A pointer denotes the memory location of a variable. A pointer is a variable to hold the address
of another variable

Why?
- allow sharing of values stored in variables in a uniform way
- can refer to values that are allocated on demand (dynamic memory allocation)
- are necessary for implementing polymorphism (in OOP)

*/
#include <iostream>

int main()
{
    int *p; // p point to an int
    int a = 2;
    p = &a; // &a is the address of a, p saves the address of a, or p points to a 
    std::cout << *p << std::endl; // *p is like saying "the guy whose address is p"
    // *p is an alias of a
    *p = 5;
    std::cout << a << std::endl; // *p and a now hold the same values??? yeah

    a--; // a is now 4;
    std::cout << a << std::endl;

    (*p)++; // this will act as a++ since *p points to a
    std::cout << *p << std::endl;
    return 0;

    
}