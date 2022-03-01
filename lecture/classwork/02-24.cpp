#include <iostream>
#include <cstdlib>

int main()
{

    double x;
    double y;
    const int NUM_THROWS = 10000;
    int numHits = 0;

    srand(time(NULL));
    for(int i=0; i < NUM_THROWS; i++)
    {
        x = 1.0 * rand() / RAND_MAX;
        x = (double)rand() / RAND_MAX;
        x *= 2; // x is random floating number in [0,2]
        x -= 1; // x is rando float num in [-1,1]

        y = 1.0 * rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        y *= 2; 
        y -= 1;

        if(x * x + y * y <= 1)
        {
            numHits++;
        }
    }
    std::cout << 4.0 * numHits / NUM_THROWS << std::endl;
    
    return 0;
}