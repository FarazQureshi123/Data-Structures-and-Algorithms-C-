#include<iostream>
using namespace std;

int main(){
    // int age = 22;

    // (age>18) ? cout << "you can vote" : cout << "you cannot vote";

    int x = 10;
    int y = 20;
    int result = (x > y) ? x : y ;
    cout << "The larger value is :"<< result << endl;

    return 0;
}