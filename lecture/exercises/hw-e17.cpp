/*
Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E1.7

Write a program that prints three items, such as the 
names of your three bestfriends 
or favorite movies, on three separate lines.

*/
#include <iostream>
#include <string>
using namespace std;
int main() 
{
 
    string friend1;
    string friend2;
    string friend3;
    cout << "Welcome, nice to meet you!" << "\n";
    cout << "Who is your 1st best friend: ";
    cin >> friend1;
    cout << "Who is your 2nd best friend: ";
    cin >> friend2;
    cout << "Who is your 3rd best friend: ";
    cin >> friend3;
    cout << "1st Friend: " << friend1<< "\n";
    cout << "2nd Friend: " << friend2<< "\n";
    cout << "3rd Friend: " << friend3<< "\n";
    return 0;
}