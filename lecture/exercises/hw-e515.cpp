/*
Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E5.15

Write a function that will swaps the
values of a and b and c
Conditionals:
    tmp = 2;
    if a > b;
    otherwise a and b and c are unchanged
return the values independently

*/

#include <iostream>
// 30, 20, 10 = > 20, 30, 10 => 20, 10, 30 => 10, 20, 30

// 20, 30, 10
void sort3(int& a, int& b, int& c)
{

    if(a > b)
    {
        int temp = a;
        a = b;
        b = temp;
        
    }
    // 20, 30, 10
    if(b > c)
    {
        int temp2 = b;
        b = c;
        c = temp2;
        
    }
    if(a > b)
    {
        int temp3 = a;
        a = b;
        b = temp3;
       
    }
}
int main () 
{
    int a = 30;
    int b = 20;
    int c = 10;
    sort3(a,b,c);
    std::cout << a << " " << b << " " << c << std::endl;

    a = 20;
    b = 30;
    c = 10;
    sort3(a,b,c);
    std::cout << a << " " << b << " " << c << std::endl;

    a = 30;
    b = 10;
    c = 20;
    sort3(a,b,c);
    std::cout << a << " " << b << " " << c << std::endl;

    a = 20;
    b = 10;
    c = 30;
    sort3(a,b,c);
    std::cout << a << " " << b << " " << c << std::endl;


}
