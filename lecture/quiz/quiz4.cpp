/*

Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab Quiz 04

Lab Quiz 04 - Array Manipulation: 
Initialize an array of numbers 1-10. 
Use ‘cout >>’ to print each number 
on a separate line
*/
#include <iostream>

int main()
{
    int arr[10];
    
    for(int i = 0; i < 10; i++){
        arr[i] = i+1;
        std::cout << arr[i] << std::endl;
    }

    return 0;
}