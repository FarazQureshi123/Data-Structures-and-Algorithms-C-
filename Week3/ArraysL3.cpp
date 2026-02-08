//2D arrays 

#include<iostream>
#include<limits.h>
using namespace std;


void printRowWise(int arr[][2], int rowSize, int colSize) {
    for(int row = 0; row < rowSize; row++){
        for(int col = 0; col < colSize; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

void printColWise(int arr[][2], int rowSize, int colSize) {
    for(int col = 0; col < colSize; col++){
        for(int row = 0; row < rowSize; row++){
            cout << arr[row][col] << ", ";
        }
        cout << endl;
    }
}

void printRowWiseSum(int arr[3][3], int rowSize, int colSize){
    int sum = 0;
    for(int row = 0; row < rowSize; row++){
        for(int col = 0; col < colSize; col++){
            sum += arr[row][col];
        }
        cout <<  sum << endl;
    }
}


void printColWiseSum(int arr[][3], int rowSize, int colSize) {
    int sum = 0;
    for(int col = 0; col < colSize; col++){
        for(int row = 0; row < rowSize; row++){
           sum += arr[row][col];
        }
        cout << sum << endl;
    }
}

pair<int,int> Search2d(int arr[][3], int n, int m){
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == target){
                cout << "Found at: " << i << ", " << j << endl;
            }
            }
        }
        return {-1,-1};
    }

    int getMin2darray(int arr[][3], int n, int m){
        int mini = INT_MAX;
        //row wise traversal 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                mini = min(mini,arr[i][j]);
            }
        }
        return mini;
    }

      int getMax2darray(int arr[][3], int n, int m){
        int maxi = INT_MIN;
        //row wise traversal 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                maxi = max(maxi,arr[i][j]);
                cout << maxi << endl;
            }
        }
        return maxi;
    }


int main(){

    // Creation 
    //Declaration
    // int arr[3][3];

    // int arr[3][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };
    

    //access
    // 
    

    int arr[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            // cout << "Enter the value for rowIndex" << i << "and ColumnIndex" << j << endl;
            cin >> arr[i][j];
        }
    }


    // cout << "input Complete" << endl;

    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 2; j++){
    //         cout << arr[i][j] << " ";
    //             }cout << endl;
    // }

    // printRowWiseSum(arr,3,3);
    // printColWiseSum(arr,3,3);

    // Search2d(arr,3,3);
    getMin2darray(arr,3,3);
    // printRowWise(arr,3,2);
    // printColWise(arr,3,2);

    return 0;
}

