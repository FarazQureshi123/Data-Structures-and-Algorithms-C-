// 


#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printArray(int arr[],int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << ", ";
    }cout << endl;
}

void printTwice(int arr[], int size){
    for(int i = 0; i <= size-1; i++){
        cout << (2*arr[i]) << ", ";
    }
}

void printEvenOdd(int arr[], int size){
    for(int i = 0; i < size; i++){
        int number = arr[i];

        if(number % 2 == 0){
            cout << "Even";
        }
        else {
            cout << "Odd";
        }
    }
}

void countZerosOnes(int arr[], int size){
    int totalZero = 0;
    int totalOne = 0;
    for(int i = 0; i < size; i++){
        int number = arr[i];

        if(number == 0){
            totalZero++;
        }else if(number == 1){
            totalOne++;
        }
    }

    cout << "Total Zero :" << totalZero << endl;
    cout << "total Ones :" << totalOne << endl;

}


int main(){
    // int arr[10];
    // cout << arr;

    int arr[10] = {1,0,30,40,55};
    int size = 5;
    // printArray(arr,size);
    // printTwice(arr,size);
    // printEvenOdd(arr,size);
    countZerosOnes(arr,size);

    return 0;

}
