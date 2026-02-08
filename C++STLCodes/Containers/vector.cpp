#include<iostream>
#include <vector>
using namespace std;


int main(){

    //Creation
    vector<int> marks;

    vector<int> miles(10);

    vector<int> distances;

    //push_back add an element

    // distances.push_back(10);
    // distances.push_back(20);
    // distances.push_back(30);
    // distances.push_back(40);
    // distances.push_back(50);

    // cout << distances.capacity() << endl;
    // cout << distances.size() << endl;
    // distances.insert(distances.begin(),69);

    // distances[0] = 100;
    // cout << distances[0] << endl;

    // cout << "Size:" << distances.size() << endl;

    // cout << *(distances.begin()) << endl;

    // if(marks.empty() == true){
    //     cout << "Vector is empty" << endl;
    // }else{
    //     cout << "Vector is not empty" << endl;
    // }

    // pop_back() removes and element from the last
    // distances.pop_back();

    // cout << "Size:" << distances.size() << endl;
    // cout << distances.front() << endl;
    // cout << distances.back() << endl;

    // vector<int> age;
    // age[0] = 10;
    

    // vector<int>age(100);
    // age[11] = 10;
    // cout << age[11] << endl;
    // return 0;

    vector<vector<int>> brr(4);
    brr[0].push_back(10);
    brr[1].push_back(20);
    brr[2].push_back(30);
    brr[4].push_back(40);
    brr[5].push_back(50);

    int totalRowCount = brr.size();

}