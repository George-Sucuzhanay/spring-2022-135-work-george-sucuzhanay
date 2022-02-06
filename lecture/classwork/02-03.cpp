/*
Linux Review
Users => laptopuser => documents => courses

vi inputNameAge.cpp
:!vi ~

g++ 02-03.cpp -o myoutput
./myoutput

Topic: Variables and Arithmetic
Input Name Output

purpose: enter name and age for a student
print greeting for the student and calculate the year
he/she will graduate(suppose it is four years from current age)
*/


#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter name: ";
    // std::cin >> name;
    getline(std::cin, name);
    // only takes the string before the first space
    // or the first return key, whenever is encounted first
    // suppose you enter Tong Yi
    // then name only takes Tong
    // space will be read by the next cin statement
    // in this example its age, then age is set to be zero

    // to read a sentence, use getLine(cin, name) instead of cin >> name;

 
    std::cout << "Enter age: ";
    int age;
    std::cin >> age;

    // print out Hello, followed by name
    std::cout << "Hello, " << name << std::endl;

    // print out "You will be xx years old when you graduate"
    int graduateAge = age + 4;

    // the same as
    // int graduateAge;
    // graduateAge = age + 4; => this is caled an assignment operator
    // this is read from right to left and it first evaluates the right hand
    // expression to graduateAge

    // Question:
    // Suppose age is declared as an int, and properly initialized to be 17
    // age = age + 4 same as age += 4;
    // sum /= 4 same as sum = sum / 4;



    std::cout << "You will be " << graduateAge << " years old when you graduate." << std::endl;
    return 0;
}