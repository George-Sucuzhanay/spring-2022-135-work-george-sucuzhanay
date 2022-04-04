/*
Section 6.6

int arr[][2] = {{1,2}, {3,4}, {5,6}};

- A two-dimenstional array can be thought as an
array of a one-dimensional array
- When declaring and initalizing a 2 or higher dimensional array, the num
first dimension can be omitted, but number in the 2nd or higher dimernsion must be specificed

*/

#include <iostream>


/*
    FUNC:
    For a given 2-dimensional array static array of integers
    and a given row, return the total of that row

 */
const int NUM_COLS = 4;

int row_sum(int arr[][NUM_COLS], int row)
{
    int countTotal = 0;
    for(int i =0; i < row; i++){
        for(int j = 0; j < NUM_COLS; j++){
            countTotal += 1;
        }   
    }
    return countTotal;
}
int main()
{

    int arr[][NUM_COLS] = {{1,2}, {3,4}, {5,6}};
    int numRow = sizeof(arr) / sizeof(arr[0]);

    std::cout << numRow << std::endl;
    return 0;
}