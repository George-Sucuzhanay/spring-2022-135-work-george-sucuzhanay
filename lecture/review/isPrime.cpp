#include <iostream>
#include <cstdlib>
std::string foo(int num)
{
    std::string result = "";
    while(num != 0)
    {
        result = std::to_string(num % 2) + result;
        num/= 2;
    }
    return result;
}

int main()
{
    std::string result;
    result = foo(8);
    std::cout << result << std::endl;    
    result = foo(6);
    std::cout << result << std::endl;  
    double wow = 2^3;
    std::cout << wow << std::endl;  
    
    return 0;
}
