/*
Draw a diamond shape
the max num of asterisks in any line in an odd
diamond of size 5                  
*/
#include <iostream>

int main()
{
    // int numOfAster;
    // std::cout << "Num of Aster: " << std::endl;
    // std::cin >> numOfAster;
    
    // int count = 0;
    // while(numOfAster >)
    // {

    // }
    int size = 5;
    int numAst = 1;

    while(numAst <= size)
    {
        for(int i = 0; i < (size = numAst) / 2; i++)
        {
            std::cout << " ";
        }
        for(int i = 0; i < numAst; i++)
        {
            std::cout << "*";
        }

    }
    return 0;
}