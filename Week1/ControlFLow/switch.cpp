#include<iostream>
using namespace std;

int main(){
    // char grade;
    // cout << "Enter your grade" << endl;
    // cin >> grade;

    // switch(grade){
    //     case 'A' : cout << "your marks will be in range of 90 to 100" << endl;
    //     break;
    //     case 'B' : cout << "your marks will be in range of 80-90" << endl;
    //     break;
    //     case 'C' : cout << "your marks will be in range of 70-80" << endl;
    //     break;
    //     case 'D' : cout << "your makrs will be in range of 60-70" << endl;
    //     break;
    //     default: cout << "your marks will be in range of 0 to 60" << endl;  
    // }

    int day = 3;
    switch(day){
        case 1 :  cout << "Monday" <<endl;
        break;
        case 2 : cout << "Tuesday" <<endl;
        break;
        case 3 : cout << "Wednesday" << endl;
        break;
        case 4 : cout << "Thursday" << endl;
        break;
        case 5 : cout << "Friday" << endl;
        break;
        case 6 : cout << "Saturday" << endl;
        break;

        default : cout << "Sunday" <<endl;
        
    }

    return 0;
}