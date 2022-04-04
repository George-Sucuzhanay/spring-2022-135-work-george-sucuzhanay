/*

Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab Quiz 06

Task:
Rectangle: print 6 rows 5 columns * shape, 
each line is "* * * * *", 
the last * is not followed by space.
*/

#include <iostream>

int main()
{
    std::string line = "";
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 5; j++){
            if(j != 4){
                line += "* ";
            }
            else{
                line += "*";
            }
        }
        line += "\n";

    }
    std::cout << line;

    return 0;
}