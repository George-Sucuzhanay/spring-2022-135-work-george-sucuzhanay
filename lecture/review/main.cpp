#include <iostream>
#include <cstdlib> // you need this in order to randomize numbers

int main()
{
    srand(time(NULL));
    // rand() % (end - start + 1) + start
    // random int between [0 and 5]
    int value = rand() % (5 - 0 + 1 ) + 0; 

    // random int between [5 and 10]
    int value2 = rand() % (10 - 5 + 1) + 5;

    // random floating number [start, end
    // 1.0 * rand() / RAND_MAX * (end - start) + start
    
    double value3 = 1.0 * rand() / RAND_MAX * (10 - 8) + 8;
    std::cout << value << std::endl;
    std::cout << value2 << std::endl;
    std::cout << value3 << std::endl;
}