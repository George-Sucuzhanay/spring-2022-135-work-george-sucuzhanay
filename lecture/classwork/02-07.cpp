/*

Topic: Strings and Arrays

2  1  0
1  2  3 = 1 x 10^2 + 2 x 10^1 + 3 x 10^0 unsigned

2  1  0
1  0  1 = -1 x 2^2 + 1 x 2^0 = signed
left most is used as sign, 1 represents negative,
0 mean non-negative


Goal: Integer Division, where both divident and divisor are integers,
so that quotient is also an integer and truncate the decimal part.

Used module(remainder operator) % in integer division
if at least one of divident or divisor is a double type or value,
then quotient will contain decimals.

*/

#include <iostream>

int main()
{
    int numPens = 12;
    int numStudents = 10;
    int numPensPerStudent = numPens / numStudents;

    std::cout << "num of pens per student: " << numPensPerStudent << "\n";
    int numPensLeft = numPens % numStudents;
    std::cout << "number of pens left: " << numPensLeft << std::endl;
    double money = 12;
    double moneyPerStudent = money / numStudents;
    std::cout << "money per student: " << moneyPerStudent << std::endl;

    return 0;
}