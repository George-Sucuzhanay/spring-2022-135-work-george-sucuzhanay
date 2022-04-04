/*

Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab Quiz 07

Task:
Define function 
`int max3(int a, int b, int c)` 
that returns the maximum of a, b, and c.
*/

#include <iostream>

int max3(int a, int b, int c)
{
    int max = 0;
    if(a > b && a > c){
        max = a;
    }
    else if(b > a && b > c){
        max = b;
    }
    else{
        max = c;
    }
    return max;
}
int main()
{
    int x = max3(3,5,7);
    std::cout << x << std::endl;
    x = max3(10,5,3);
    std::cout << x << std::endl;
    x = max3(5,9,3);
    std::cout << x << std::endl;
    return 0;
}