#include "io.h"
#include <iostream>

using std::cin;

int readNumber() {
  std::cout << "Enter a number:";
  int x = 0;
  cin >> x;

  return x;
}

void writeAnswer (int x, int y) {

    std::cout<<"The answer is "<<x+y<<"\n";


}