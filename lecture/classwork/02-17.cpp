/*

Going over project 1a and 1b

1 - 2 -4

initialize sum to be zero


Organize the code into a repetition statement

add num to sum, sum is changed to be 1

read operator for the nect num, put '-' in operator
based on operator oper, subtract num from sum, so sum is -1

read operator for the next noun, put '-' in oper
based on operator oper, subtract num form sum, so sum is -4


*/

#include <iostream>

int main()
{
    int sum = 0;
    int num;
    char oper = '+';
    while(std::cin >> num)
    {
        // std::cout << "num = " << num << std::endl;
        if(oper == '+')
        {
            sum += num;
        }
        else if(oper == '-')
        {
            sum -= num;
        }
       std::cin >> oper;
    }

    std::cout << "sum = " << sum << std::endl;
    return 0;
}