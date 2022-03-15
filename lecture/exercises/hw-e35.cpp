/*
Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E3.5

Write a program that check is
user's input are increasing,
decreasing or neither


*/

#include <iostream>

int main()
{
    int arr[3];
    std::cin >> arr[0];
    std::cin >> arr[1];
    std::cin >> arr[2];
    if(arr[0] < arr[1] && arr[1] < arr[2])
    {
        std::cout << "increasing\n";
    }
    else if (arr[0] > arr[1] && arr[1] > arr[2])
    {
        std::cout << "decreasing\n";
    }
    else {
        std::cout << "neither\n";
    }
    return 0;

}
