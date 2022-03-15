/*

Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E5.6

Write a function that return a string containing 
the middle character in str
if the lenfth of str is odd
or
the two middle character if the length is even


*/
#include <iostream>

std::string middle(std::string str){
    if(str.length() % 2 == 0 && str.length() > 3){
        return str.substr(str.length() / 2 - 1, str.length() / 2-2);
    }
    else if(str.length() % 2 != 0 && str.length() >3)
    {
        return str.substr(str.length() / 2, str.length() / 2 -2 );
    }
    else{
        return "";
    }
}
int main()
{
    std::string result;

    result = middle("testing");
    std::cout << result << std::endl;
    result = middle("coloring");
    std::cout << result << std::endl;
    return 0;
}