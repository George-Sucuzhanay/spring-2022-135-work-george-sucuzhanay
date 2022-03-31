/*

Lesson:

Arrays:
    Pros:
    - constant time to access each element
    Cons:
    - needs a nonmutable array size
    - insertion or removal of an element needs to other elements


Array and Pointer Duality Law


Dynamic Allocated Memory

delete[] arr;

Google permuatations in cpp
*/

#include <iostream>

int main()
{
    int arr[] = {10,20,30};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout << size << std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
       
    }
    return  0;
}