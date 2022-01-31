#include <iostream>

int main(){
  //std::cout << "Hello world!\n";

  //ask user to input two numbers 
  int a, b;

  std::cout << "Enter a number:\n";
  std::cin >> a;

  std::cout << "Enter another number:\n";
  std::cin >> b;

  //return the smallest of the two
  if(a<b) {
    std::cout << "The smallest number is " << a;
  } else {
    std::cout << "The smallest number is " << b;
  }
  
  return 0;
}