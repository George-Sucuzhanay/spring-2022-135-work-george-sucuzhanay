#include <iostream>

std::string line(int width,std::string c){
  std::string result = "";
  for (int w = 0 ; w < width ; w++){
    result = result + c;
  }
  return result;
}

std::string trap(int width, int height){
  std::string result = "";
  int stars = width;
  int spaces = 0;
  for (int h = 0; h < 5; h++){
    result = result + line(spaces," ");
    result = result + line(stars,"*");
    stars = stars - 2;
    spaces = spaces + 1;
    result = result + "\n";
  }
  
  return result;
}

int main()
{
    std::string result;
    result = trap(12,5);
    std::cout << result  << "\n";
    return 0;
}