#include <iostream>
// using namespace std; instead we can use std:: ::- is the scope resolution operator

int main(){
    int marks;
   std::cout << "Enter your marks" << std::endl;

    std::cin >> marks;
    std::cout << "Your marks is : " << marks << std::endl;

    return 0;
}