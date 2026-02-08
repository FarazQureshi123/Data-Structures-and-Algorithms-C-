#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.size() << endl;

    s.pop();
    // 10 20 30 40 
    cout << s.size() << endl;
    cout << s.top() << endl;
    //40

    s.pop();
    cout << s.top() << endl;
    //30

    if(s.empty() == true){
        cout << "stack is empty "<< endl;
    }else {
        cout << "stack is not empty" << endl;
    }
    return 0;

}