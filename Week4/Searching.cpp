#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    bool ans = binary_search(arr.begin(), arr.end(),500);

    if(ans == true){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found";
    }
    return 0;
}