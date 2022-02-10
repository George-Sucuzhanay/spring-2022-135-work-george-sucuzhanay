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
    int arr[20] = {};
    int i = 0;
    int count = 0;

    while(std::cin >> s){ 
        // std::cout << s << std::endl;
        int num = std::stoi(s);
        // std::cout << num << "\n";
        if (i >= 0) {
            arr[i] = num;
            i++;
        }
    }
    for(int j=0; j <= i; j++){
        count = count + arr[j];
    }
    std::cout << count << "\n";
    return 0;
}
