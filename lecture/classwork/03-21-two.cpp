/*

pass by reference real life example
void wash( int load); // home washing machine
void wash(int load int money); // commerical washing machine

*/
#include <iostream>

void increase(int a) // pass by value
{
    a++;
}
void increase2(int& a) // pass by reference example
{
    a++;
}
// type int* is different from int, so parameter list of void increase(int*) is different
// from parameter list of void increase(int)
// this is a function overload or in other words 
// - they will have the similar functionality
// - same function name
// - different parameter list (type, num of params, order of params)
// - return type does not mattere

void increase(int *p) 
{
    // think *p as an int
    (*p)++;
}
int main()
{
    int a = 5;
    increase(a);
    std::cout << "a's value adter calling increase(a)" << std::endl;
    std::cout << a << std::endl;

    a = 5;
    increase2(a);
    std::cout << "a's value adter calling increase2(a)" << std::endl;
    std::cout << a << std::endl;

    a = 5;
    increase(&a); // this is address pointing to a
    std::cout << "a's value adter calling increase(&a)" << std::endl;
    std::cout << a << std::endl;

    std::cout << "\n__________________\n" << std::endl;
    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << size << std::endl;
    return 0;
}