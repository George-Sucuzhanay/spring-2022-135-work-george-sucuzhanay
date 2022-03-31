#include <iostream>
int main()
{
    std::string sub;
    std::cout << "Enter something: ";
    std::cin >> sub;

    std::string tmp;

    for(int i = 0; i < sub.length(); i++)
    {
        tmp += sub[i];
        std::cout << tmp << std::endl;
    }
    for(int i = 0; i < sub.length(); i++)
    {
        std::cout << tmp.substr(i, sub.length()) << std::endl;
    }
    return 0;
}