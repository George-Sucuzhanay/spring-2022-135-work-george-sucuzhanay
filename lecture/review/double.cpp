#include <iostream> 
int main()
{
    // in order to maintain the decimal place in out integer division
    // either num or denom needs to be a decimal
    double doubleExample1 = 3.0/5;
    double doubleExammple2 = 3/5;

    int modulusExample = 3 % 5; 
    // this returns you the remainder

    // assignment operator practice
    int a = 10;
    a += 5; // a = a + 5;
    
    std::cout << doubleExample1 << std::endl;
    std::cout << doubleExammple2 << std::endl;
    std::cout << modulusExample << std::endl;
    std::cout << a << std::endl;
    return 0;
}