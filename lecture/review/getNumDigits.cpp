#include <iostream>

int getNumDigits(int n)
{
    int num = 0;
    while(n != 0)
    {
        n/=10;
        num++;
    }
    return num;
}
int main()
{
    int result;
    result = getNumDigits(5);

    std::cout << result << std::endl;

    result = getNumDigits(300);
    std::cout << result << std::endl;

    return 0;
}