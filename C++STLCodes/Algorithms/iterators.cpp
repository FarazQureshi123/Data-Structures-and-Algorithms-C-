#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// void printDouble(int a){
//     cout << 2*a << " ";
// }

bool checkEven(int a){
    return a%2 == 0;
}

int main(){

    vector<int> arr(7);
    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 12;
    arr[3] = 13;
    arr[4] = 14;
    arr[5] = 15;
    arr[6] = 16;

    auto it = partition(arr.begin(),arr.end(),checkEven);

    for(int a: arr){
        cout << a << " ";
    }


    // auto it = unique(arr.begin(),arr.end()); // it works only on sorted elements
    // arr.erase(it,arr.end());
    // for(int a: arr){
    //     cout << a << " ";
    // }


//     sort(arr.begin(),arr.end()); // sorts in ascending order

//    cout << "Before:" << endl;
//    for(int a: arr){
//     cout << a << " ";
//    }
//    cout << endl;
//    rotate(arr.begin(),arr.begin()+3,arr.end());
//    cout << "After:" << endl;
//    for(int a: arr){
//     cout << a << " ";
//    }
    
    
//     reverse(arr.begin(),arr.end());
//     for(int a: arr){
//         cout << a << endl;
//     }
    
    // for_each(arr.begin(),arr.end(),printDouble);

    // int target = 40;
    // auto it = find(arr.begin(),arr.end(),target);
    // cout << *it << endl;

    // auto it = find_if(arr.begin(),arr.end(),checkEven);
    // cout << *it << endl;

    // int target = 10;
    // int ans = count(arr.begin(),arr.end(),target);
    // cout << ans << endl;   
    
    // int ans = count_if(arr.begin(),arr.end(),checkEven);
    // cout << ans << endl;



    return 0;
}