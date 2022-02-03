/*
CSCI 135 Daedalus
Date: 02/03/2022

Goal: Learning to using multiple files to our main.cpp file

*/

#include <iostream>
#include "lib.h"
#include "util.h"

// this is a "signature" for function add
// can write as: int add2(int, int);
// but it's usually a cut and paste from the func name
// with the ; at the end

int add2(int a, int b);

int add3(int a,int b,int c);
// in util.cpp we call the func add2 within add3 func in util.cpp
// using signature helps us complie cpp files when needing to use multiple files

int main()
{  
  
   int c, d;
   c = add2(5,10);
   std::cout << c << "\n";

   d = add3(5,10,15);
   std::cout << d << "\n";
   return 0;
}