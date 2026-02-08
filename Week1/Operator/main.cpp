#include<iostream>
using namespace std;

// int main(){

//     int a = 5;
//     cout << (a++) << endl; // postincreament means access or use the value first then increase it
//     cout << (++a) << endl; // preincreament means increase the value first then use it 

//     int b = 10;
//     cout << (--b) << endl; // predecreament means value deacrease hogi first then access hogi
//     cout << (b--) << endl; // value access or use hogi first then decrease hogi
    

//     return 0;
// }

int main(){


    // Binary Operator
    int a = 10;
    int b = 5;
     
    //Arithmetic Operator
    cout << (a + b) << endl;
    cout << (a - b) << endl;
    cout << (a * b) << endl;
    cout << (a / b) << endl;
    cout << (a % b) << endl;


    //Relational Operator - used for comparing the values 
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    cout << (a == b) << endl;
    cout <<(a != b) << endl;

  
    //Logical Operator 

    // && and operator in this if anyone value is false then answer is false and if all value is true then answer is true
    bool cond1 = true;
    bool cond2 = true;
    bool cond3 = false;

    if(cond1 && cond2 && cond3){
        cout << "All conditions are true" << endl;
    }else{
        cout << "All conditons are false" << endl;
    }

    // || or operator in this if anyone condition is ture then all conditions are true and only if all conditon is false then the answer is only false;
    bool cond4 = true;
    bool cond5 = false;
    bool cond6 = false;
    if(cond4 || cond5 || cond6){
        cout << "All conditions are true" << endl;

    }else{
        cout << "All conditions are false" << endl;
    }
   // ! not operator in logical operator changes the true value to false and false value to true 
    bool condition = (5 != 10);
    cout << !condition << endl;

    // Assignment Operator used to assign value the value of right portion stored in left one that is int a = 20;

        int arr = 5;
        cout << arr << endl;

       arr += 10;
       cout << arr << endl;

       arr-= 10;
       cout << arr << endl;

       arr *= 10;
       cout << arr << endl;

       arr /= 10;
       cout << arr << endl;

       //Bitwise Operator 

       cout << (~1) << endl; // -2
       cout << (5 << 4) << endl; // 10
       cout << (10 >> 1) << endl; // 5
       cout << (5 ^ 5) << endl; // 0
       cout << (5 ^ 6) << endl; // 1
    
    return 0;
}