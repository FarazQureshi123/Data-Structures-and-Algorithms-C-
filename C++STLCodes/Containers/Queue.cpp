#include<iostream>
#include<queue>
using namespace std;

int main(){

    // queue<int> q;

    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);

    // cout << q.size() << endl;

    // q.pop(); // in queue the element always removed from the first position
    // cout << q.size() << endl;


    // if(q.empty() == true){
    //     cout << "Queue is empty" << endl;
    // }else{
    //     cout << "Queue is not empty" << endl;
    // }

    // // front and back to access the element from front and back respectively 

    // cout << "front" << q.front() << endl;
    // cout << "back" << q.back() << endl;

    // // queue<int>::iterator it = q.begin();
    // // while(it != q.end()){
    // //     cout << *it << endl;
    // //     it++;
    // // }

    queue<int> first;
    queue<int> second;

    first.push(10);
    first.push(20);

    second.push(100);
    second.push(200);

    first.swap(second);

    cout << first.front() << " " << first.back() << endl;
    cout << second.front() << " " << second.back() << endl;

    

    return 0;
}