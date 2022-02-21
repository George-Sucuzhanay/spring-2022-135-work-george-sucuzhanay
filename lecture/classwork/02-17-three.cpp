#include <iostream>
#include <cstdlib> //rand, srand
#include <ctime> //time

int main()
{
    srand(time(NULL));
    for(int i = 0; i < 3; i++)
    {
        std::cout << rand() << std::endl;
    }
    return 0;
}