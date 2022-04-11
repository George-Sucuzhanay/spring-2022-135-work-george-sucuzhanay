/*
Topic: OOP in CPP

Encapsulation:
procedure + data = class
they conbine data members and methods in one package

ex: a bank account: bankAccountData + operations = class
these operations can include withdrawl, deposit,login and balance

Different objects have different attributes
(properties common to objects of the same
class) and different operations.

Method: 

Functions belong to a class


Class are the blueprint from which objects are made

Class:

Object:
• fuel tank

– Data members
• Current gas level

– Methods
• Fill tank with more gas
• Send gas through the gas lines
• Get current gas level of tank

Polymorphism:

students is a subclass of person

Every class has a default constructor
a constructor is a method with the same name as the class
but no return typee    ... not even void

dedault constructor has no parameter
*/

class FuelTank 
{
    public:
        // default constructor
       FuelTank();
       // 
       FuelTank(int startLevel);

       int getGas();

    private:
        int currGasLevel;
};

int main()
{
    return 0;
}