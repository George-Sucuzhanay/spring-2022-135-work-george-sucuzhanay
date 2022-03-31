/*
Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E7.1

Write a function
void sort2(double* p, double* q)
that receives two pointers 
and sorts the values to which they point. 
If you call sort2(&x, &y)
then x <= y after the call.

*/

#include <iostream>

void sort2(double* p, double* q)
{
    if(*p >= *q)
    {
        double tmp = *p;
        *p = *q;
        *q = tmp;
    }
}

int main()
{
    double x, y;
    std::cin >> x;
    std::cin >> y;

    sort2(&x, &y);

    std::cout << x << " " << y << std::endl;
    return 0;
}


