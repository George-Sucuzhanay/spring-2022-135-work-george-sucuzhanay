/*


Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Project 1D - calc3.cpp

Goal: 

Write an even better calculator program calc3.cpp 
that can understand squared numbers. 
We are going to use a simplified notation 
X^ to mean X2


We learned how to use the previous lab examples to then
create a program that will square nums


*/

#include <iostream>
#include <string>

int main()
{
    int input;
    char sign;
    int sum = 0;

    std:: cin >> input; 
    char  v = std::cin.peek();
    if(v == '^')
    input *= input;
    sum += input;
    if(v == '^')
    {
        std::cin >> sign;
    }

    while(std::cin >> sign)
    {
        if(sign == ';')
        {
            std::cout << sum << std::endl;
            sum = 0;
            std::cin >> input;
            char  v = std::cin.peek();
            if(v == '^')
            input *= input;
            sum += input;
            if(v == '^')
            {
                std::cin >> sign;
            }
        }
        else{
            std::cin >> input;

            char look = std::cin.peek();
            bool isTrue (look == '^');

            if(isTrue)
            {
                input *= input;
            }

            if(sign == '+')
            {
                sum += input;
            }
            else if(sign == '-')
            {
                sum -= input;
            }
           if(isTrue)
           {
               std::cin >> sign;
           }
        }

    }
    return  0;

}