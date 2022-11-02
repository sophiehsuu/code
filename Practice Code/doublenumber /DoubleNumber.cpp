#include <iostream>

int doubleNumber(int number) {
    return number * 2;
}

int main() {
    
    std::cout<<"Enter a number: ";
    int x=0;
    std::cin>>x;
    
    
    std::cout<<doubleNumber(x)<<'\n';
    
}