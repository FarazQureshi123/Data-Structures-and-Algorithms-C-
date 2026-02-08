#include<iostream>
using namespace std;

void printSolidRectangle(int n, int m) {
    //row-n, column-m
    // outerloop -> rows
    for(int row = 1; row <= n; row++){
        // innerloop -> column print-> m *
        for(int col = 1; col <= m; col++){
            cout << "*";
        }
        cout << endl;
    }
}

void printRightAngleTriangle(int n){
    //outer loop -> rows
    for(int row = n; row >= 1; row--){
        //hr ek row k andr, [row ki value ke equal] stars print krado
        for(int col = 1; col <= row; col++){
            cout << "* ";
        }
        // next line pr jao
        cout << endl;
    }
}

    void printInvertedSolidPyramid(int n) {
        //logic -> each row is madw up opf some spaces and columns
        //spaces -> row-1;
        //stars -> 2*n(2*row-1);

        //outer loop
        for(int i = 1; i <= n; i++){

            //spaces
            for(int j = 1; j <= i-1; j++){
                cout << "  ";
            }

            //stars
            for(int j = 1; j <= (2*n)-(2*i-1); j++){
                cout << "* ";
            }
            cout << endl;
        }
    };

    void printNumberTriangle(int n){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout << i;
            }
            cout << endl;
        }
    }

    void printFloydsTriangle(int n){
        int count = 1;
      for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << count;
            count++;
        
        }
        cout << endl;
      }
    }
    

    void printHollowPyramid(int n) {
       //logic - each row is made up of
       //1) stars
       //2)stars + spaces in between

       for(int row = 1; row <= n; row++){
        //inner loop logic give above



        // taking care os(1) spaces part
        for(int col = 1; col <= n-row; col++){
            cout << "  ";
        }
        if(row == 1){
            cout << "* ";
        }
        else if(row == n){
            //print 2*n-1 stars
            for(int col = 1; col <= 2*n-1; col++){
                cout << "* ";
            }
        }
        else {
            //middle rows
            //step1 -> print *
            cout << "* ";

            //step2 -> print some spaces
            for(int col = 1; col <= 2*row-3; col++){
                cout << "  ";
            }
            //step 3 -> print *
            cout << "* ";
        }
        cout << endl;
       
       }

    }







int main(){
// printSolidRectangle(3,5);
printRightAngleTriangle(10);
// printNumberTriangle(10);
printFloydsTriangle(10);
printHollowPyramid(2);

return 0;
}