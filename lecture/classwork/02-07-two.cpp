/*

class = intelligent hamburger

Type string is a class
an intelligent hamburger

changeMeat
changeVegetable
changeBread
etc...

Class = data + ...

Initialization:

1) base type =>std::string greeting = "Hello";
2) object instantiation => std::string greeting("Hello");


Purpose: Extract Name in String
*/

#include <iostream>

// Enter a full name in format of first name first, last name last
// find out the first and last name
// find the initials

int main()
{
    // Enter name from console interactively
    std::cout << "Enter full name (firstname lastname): ";
    std::string name;
    std::cin >> name;
    // process name to extract last and first name
    size_t index = name.find(" ");
    // index is the location of the first occurance of " " in name
    if(index != std::string::npos){
        // no space in name
        std::cout << "no space in input name, cannot proceed\n";
        return -1; 
    }
    std::string firstName = name.substr(0,index);
    std::string lastName = name.substr(index, +1);
    std::cout << lastName;
    return 0;
}