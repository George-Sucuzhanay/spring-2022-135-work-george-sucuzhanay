/*

Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Project 1A - Sum.cpp

Goal: Return the sum of nums in textfile
by perform a while and for loop

*/
#include <iostream>
int main() {
    std::string s;

    int count = 0;

    while(std::cin >> s){ 
        int num = std::stoi(s);
        count = count + num;
     
    }
    std::cout << count << "\n";
    return 0;
}
