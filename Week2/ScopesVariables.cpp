// // #include<iostream>
// // using namespace std;

// // //Global scope variable can be accessed everywhere 
// // int a = 10;
// // void printmyname(){
// //     cout << "My name is Faraz" << endl;
// // }
// // int main(){
// //  //local scope variable 
// // //   int a = 12;
// // //   cout << a << endl;

// //   {
// //     //block scope variable
// //     // int a =2;
// //     // cout << a << endl;
    
// //   }

// //   cout << sizeof(a) << endl;

// //  printmyname();
  

// //   return 0;
// // }


// #include<iostream>
// using namespace std;

// void checkEvenOdd(int num){
//     if(num % 2 == 0){
//         cout<< "Even Number" << endl;
//     }
//     else{
//         cout<< "Odd Number" << endl;
//     }

    
// }

// void checkPositiveOrNegativeOrZero(int num){
//     if(num > 0){
//         cout << "Positive Number" << endl;
//     }else if(num < 0){
//         cout << "Negative Number" << endl;
//     }else{
//         cout << "Zero" << endl;
//     }
// }

// int printAverage(int a, int b, int c){
//    int result =  (a+b+c)/3;
//    cout << result << endl;
//     return result;
// }

// void print1toN(int n){
//     int i = 1;
//     while(i<=n){
//         cout << i << endl;
//         i++;
//     }

// }

// void print2table(int num){
//     for(int i = 1; i <= 10; i++){
//         cout << num << "*" << i << "=" << num*i << endl;
//     }
// }

// // waf that converts the uppercase character into lowercase character
// void convertLC(char ch){
//     char ans = ch - 'A' + 'a'; // always subtract and add A and a in changing of any character 
//     cout << "Lower case character = " << ans << endl;
// }
// void convertUC(char ch1){
//     char ans1 = ch1 - 'a' + 'A';
//     cout << "Upper case character =" << ans1 << endl; 
// }

// int main(){
//     checkEvenOdd(5);
//     checkPositiveOrNegativeOrZero(30);
//     printAverage(1,2,3);
//     print1toN(10);
//     print2table(2);
//     convertLC('C');
//     convertUC('d');
//         return 0;
//     }


//Hollow Diamond Pattern

class Solution {
public:
    void printHollowDiamond(int n) {
        // We have divided the figure into 3 parts 

        int npart1 = n-1;
        int npart2 = n;
        int npart3 = n-1;

         int totalSpaces = 2*npart2-3;

         //lets handle the n=1 wala case separately 
         if(n == 1){
            cout << "*";
            return;
         }

    for(int row = 1; row <= npart1; row++){
        // part 1 
       
       //spaces 
       for(int col = 1; col <= npart1-row+1; col++){
        cout << " ";
       }
       //stars
       if(row == 1){
        cout << "*";
       }else{
        cout << "*";
        //some spaces
        for(int col = 1; col <= 2*row-3; col++){
            cout << " ";
        }
       
        cout << "*";
       }
       cout << endl;
    }

        // part 2
        //flow -> 1* some spaces 1*
        cout << "*";
        for(int col = 1; col <= 2*npart2-3; col++){
            cout << " ";
        }
        cout << "*";

        cout << endl;
        


        // part 3

        for(int row = 1; row <= npart3; row++){
            //spaces
        for(int col = 1; col <= row; col++){
       
       cout << " ";


        }
        if(row == npart3){
            cout << "*";
        }else{
            cout << "*";

            // some spaces
            totalSpaces = totalSpaces - 2;
            for(int col = 1; col <= totalSpaces; col++){
                cout << " ";
            }

            cout << "*";
        }

    cout << endl;


    }

    }
};


//Rhombus pattern
 void printRhombus(int n) {
        for(int row = 1; row <= n; row++){
            //spaces
            for(int col = 1; col <= n-row; col++){
                cout << " ";
            }
            //stars
            for(int col = 1; col <= n; col++){
                cout << "* ";
            }
            cout << endl;
        }
    }


    // Hour glass pattern

    class Solution {
public:
    void printHourglass(int n) {

        //part 1
        for(int row = 1; row <= n; row++){
            
        
        //spaces
        for(int col = 1; col <= row-1; col++){
            cout << " ";
        }
        //stars
        for(int col = 1; col <= 2*(n-row+1); col++){
            cout << "*";
        }
        cout << endl;
        }
       //part 2 
       for(int row = 1; row <= n; row++){
        //spaces
        for(int col = 1; col <= n-row; col++){
            cout << " ";
        }
        //stars
        for(int col = 1; col <= 2*row; col++){
            cout << "*";
        }
        cout << endl;
       }
    }
};
