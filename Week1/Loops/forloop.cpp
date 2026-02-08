#include<iostream>
using namespace std;

int main(){
  // initialisation condition updation
    // for(int i = 1; i <= 10; i++){
    //     cout << i << endl;
    // }

    // for(int i = 51; i<=69; i++){
    //     cout << i << endl;
    // }

    // for(int i = 51; i<70; i++){
    //     cout << i << endl; 
    // }

    // for(int i = 1; i <= 10; i = i + 1){
    //     if(i == 5){
    //         break;
    //     }
    //     cout << "Iteration" << i << endl;
    // }

    for(int i = 1; i <= 5; i++){
        if(i == 2){
            continue;  // it skips that value that is 2 here
        }
        cout << "Iteration" << i << endl;
    }
    return 0;
}