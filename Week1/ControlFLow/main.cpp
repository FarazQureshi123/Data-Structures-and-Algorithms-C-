#include<iostream>
using namespace std;

int main(){
    //Declare
    // int Budget;
    // cout << "Enter your budget" << endl;

    // //Input
    // cin >> Budget;
    // if(Budget > 2000000){
    //     cout << "You can buy Scorpio" << endl;

    // }else{
    //     cout << "You cannot buy Scorpio" << endl;
    // }

    // int age = 100;
    // if(age > 18){
    //     cout << "You can vote" <<endl;
    // }else {
    //     cout << "You cannot vote" << endl;
    // }


    // int marks;
    // cout << "Enter your marks" << endl;
    // cin >> marks;
    // if(marks > 90){
    //     cout << "A" << endl;
    // }else if(marks > 80){
    //     cout << "B" << endl;
    // }else if(marks > 70 ){
    //     cout << "C" << endl;
    // }else if(marks > 60){
    //     cout << "D" << endl;
    // }else{
    //     cout << "You Failed" << endl;
    // }


    int height,weight;
    cout << "Enter your height" << endl;
    cin >> height;
    

    if(height > 5){
        cout << "Enter your weight" << endl;
    cin >> weight;
        if(weight >90){
            cout << "A" << endl;
        }else {
            cout << "B" << endl;
        }
    }else {
        cout << "C" << endl;
    }
    return 0;
}