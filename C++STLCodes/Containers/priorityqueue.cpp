#include<iostream>
#include<queue>
using namespace std;

int main(){

    //min-heap -> Minimum Value -> Highest Priority
    priority_queue<int,vector<int>,greater<int> > pq;

    pq.push(100);
    pq.push(200);
    pq.push(20);

    cout << pq.top() << endl; //minimum value have the highest priority 

    // //creation
    // priority_queue<int> pq;
    // //max-heap -> maximum value -> Highest priority

    // pq.push(10);
    // //10
    // pq.push(20);
    // //10 20
    // pq.push(30);
    // //10 20 30 
    // pq.push(40);
    // //10 20 30 40

    // //top element -> Highest priority element

    // cout << pq.top() << endl;
    // //40
    // //highest priority element will pop first i.e 40 will pop 
    // pq.pop(); //10 20 30 
    // cout << pq.top() << endl;
    // //30

    // pq.pop(); // 10 20
    // cout << pq.top() << endl;
    // // 20

    // cout << pq.size() << endl;
    // //2

    // if(pq.empty() == true){
    //     cout << "priority queue is empty" << endl;
    // }else {
    //     cout << "priority queue is not empty" << endl;
    // }

    

    return 0;
}