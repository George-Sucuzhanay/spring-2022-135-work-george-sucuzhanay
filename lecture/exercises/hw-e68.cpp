/*

Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E6.8

Program:
Will check to see whether two arrays 
have the same elements in the 
same order.

by using function called equals
which returns a bool


*/

#include <iostream>

bool equals(int a[], int a_size, int b[], int b_size)
{
	if (a_size != b_size)
    {
         return false;
    }
	    
	for (int i = 0; i < a_size; i++)
    {
          if (a[i] != b[i])
          {
              return false;
          }
	            
    } 
	return true;
}