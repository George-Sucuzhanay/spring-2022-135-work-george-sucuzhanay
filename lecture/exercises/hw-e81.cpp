/*
Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E8.1

Write a program that
1. Open the file named "hello.txt"
2. Store the message "Hello, World!" in the file
3. Close the file
4. Open the same again
5. Read the message into a string variable and print it

*/

#include <iostream>
#include <fstream>

int main()
{
    // this will output "Hello World" to hello.txt
    std::ofstream fout;
    fout.open("hello.txt");
    fout << "Hello, World!";
    fout.close();


    // we then open "hello.txt" to print what inside by
    // doing getline(fin, str);
    std::ifstream fin;
    fin.open("hello.txt");
    std::string str;
    getline(fin, str);
    std::cout << str << std::endl;
    fin.close();
    
}