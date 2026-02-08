#include<iostream>
#include<vector>

using namespace std;

void printarr(vector<int> arr){
    int n = arr.size();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){  // to remove duplicate like 10,30 
            cout << "("<< arr[i] << "," << arr[j] << ") ";
        }
        cout << endl;
    }
}

//print all triplets
void printTriplets(vector<int> arr){
    int n = arr.size();

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
            }
        }
    }
}
int main(){

    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);


    printarr(arr);
    printTriplets(arr);


    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << ", " ;
    }

    
    return 0;
}