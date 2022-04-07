/*

DATE: April 7, 2022
Topic:
Classes of Objects

Notes:
Galton Board:

1/2 => 1/4 => 1/8

1/8 , 8/3, 8/3, 1/8

Dynamic Allocated Memory
Use pointers


Use an array:
To group values of a single type together under a shared name

Use a class:
To group different types together with one name, use an object of a
class (a structured type)

*/
#include <iostream>


class StreetAddress {
    public:
        int houseNumber;
        std::string streetName;
};


int main()
{
    StreetAddress white_house;
    white_house.houseNumber = 1600;
    white_house.streetName = "Pennsylvania Avenue";
    std::cout << white_house.houseNumber << std::endl;

    // Psuedocode on Galton Board

    /*
    How can we create an array with different columns and different rows
    
    create a one-dimentional array that point to it

    int* arr[10]

    arr[0][0]
    arr[1][0] arr[1][1]
    arr[2][0] arr[2][1] arr[2][2]
    arr[3][0] arr[3][1] arr[3][2] arr[3][3]
    ...



    */
    int* arr[10];
    for(int row = 0; row < 10; row++){
        // each arr[row] points to a 1-d array of ints of size (row + 1)
        arr[row] = new int[row+1];
        // intilize those arr[row][col] to be zero
        // where col for the (row)th row is 0 <= col < row +q
        for(int col = 0; col < row + 1; col++){
            arr[row][col] = 0;
        }
    }
        // for each ball, it must go thru arr[0][0], which has only 1 container
        // arr[row][col]++; the ball chooses this container

        // Starting from the second row
        // If rand() is even, choose the same col for the next row
        // otherwise, choose (col + 1) for the row
        // row++
        // if(rand() % 2 != 0) // odd number
        //      col++;
        // arr[row][col]++
        /*
            
            int row = 0;
            int col = 0;

        */


    


    return 0;
}