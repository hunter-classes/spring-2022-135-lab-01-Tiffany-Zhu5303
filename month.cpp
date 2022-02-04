#include <iostream>

int main(){
  //ask user to input the year and month (1-12)
  int year;

  std::cout << "Enter year: ";
  std::cin >> year;

  //print number of days in that month
  
  if (year % 4 != 0){
    std::cout << "Common year";
  }else if (year % 100 != 0){
    std::cout << "Leap year";
  }else if (year % 400 != 0){
    std::cout << "Common year";
  }else {
    std::cout << "Leap year";
  }

  return 0;
}