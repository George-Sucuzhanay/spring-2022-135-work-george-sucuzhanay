#include <iostream>

bool isPrime(int n)
{
    for(int possibileFactor = 2; possibileFactor < n ^ 2; possibileFactor++)
    // possibleFactor is possible non-trival factor of n, since non-trival factors are paired
    // i.e. non-trival factors of 16: 2,4,8
    // we only need to chekck at most sqrt(n)

    {
        if(n % possibileFactor == 0)
        {
            return false;
        }
        else if()
        {

        }

    }
}

int main()
{
    return 0;
}