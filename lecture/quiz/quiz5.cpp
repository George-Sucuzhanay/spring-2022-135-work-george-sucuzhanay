/*

Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab Quiz 05

Reading Files: Open and read a file called "data.txt"
which contains lines of text with names of colors 
and their RGB values, like this: red FF0000 etc... 

Read and print each line. 
Close the file after processing it.
*/

#include <iostream>
#include <fstream>

int main()
{
    std::ifstream fin;
    fin.open("data.txt");

    if(fin)
    {
        std::string str;
        while(getline(fin, str))
        {
            std::cout << str << std::endl;
        }
        
    }
      
    fin.close();


    return 0;
}