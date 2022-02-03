/*
CSCI 135 Daedalus
Date: 02/03/2022

Goal: Learning to using multiple files to our main.cpp file
*/

#include <iostream>

// this is a "signature" for function add
// can write as: int add2(int, int);
// but it's usually a cut and paste from the func name
// with the ; at the end

int add2(int a, int b);

int main()
{  
  
   int c;
   c = add2(5,10);
   std::cout << c << "\n";
   // Learning to use multiple files
   return 0;
}