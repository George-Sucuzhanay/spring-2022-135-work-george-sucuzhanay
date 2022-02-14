/*

Author: George Sucuzhanay
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Project 1B - calc.cpp

Goal: create a simple calculator

*/

#include <iostream>
#include <sstream>
int main()
{   
    std::string s;
    std::string mainInput;
    int count = 0;
    int tmpInt = 0;

    while(std::cin >> s){
        mainInput = mainInput + s;
        // for(int i =0; i < mainInput.length(); i++){
        //     if (mainInputp[i] == typeid(mainInputp[i])){

        //     }
        // }
        // if(s.find("+") == true){
        //     int index = s.find("+");
        //     std::string beginInt = s.substr(0,index);
        //     std::string lastInt = s.substr(index +1);
        //     int num = std::stoi(beginInt);
        //     int num2 = std::stoi(lastInt);
        //     count = count + num;
        //     count = count + num2;
        //     std::cout << "I found a + sign\n";
        // }
        // if(s.find("-") == true){
        //     int index = s.find("-");
        //     std::string myInteger = s.substr(0,index);
        //     int num = std::stoi(myInteger);
        //     count = count - num;
        //     std::cout << "I found a - sign\n";
        // }
    }   
    std::cout << mainInput << "\n";
    std::stringstream ss(mainInput);
    std::string add= "+";
    std::string sub= "-";
    for(int i =0; i < mainInput.length(); i++){
        std::string tmpStr = "";
        if (std::isdigit(mainInput[i]) == 0){
            tmpStr = tmpStr + mainInput[i];
        }
        if(mainInput[i] == "+"){
            std::string beginInt = s.substr(0,index);
            std::string lastInt = s.substr(index +1);
        }
    }

    std::cout << typeid(mainInput).name() << "\n";
    // std::stringstream ss(mainInput);


    return 0;
}