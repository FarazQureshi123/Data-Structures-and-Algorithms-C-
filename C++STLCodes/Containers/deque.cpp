#include<iostream>
#include<queue>
using namespace std;

int main(){

    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    dq.push_front(100);
    dq.push_front(200);
   


    cout << dq.size() << endl;
     dq.pop_front();
     dq.pop_back();
     cout << dq.size() << endl;

     cout << dq.front() << endl;
     cout << dq.back() << endl;

     if(dq.empty() == true){
        cout << "deque is empty" << endl;
     }else {
        cout << "deque is not empty" << endl;
     }

   //   deque<int>::iterator it = dq.begin();
   //   while(it != dq.end()){
   //    cout << *it << " ";
   //    it++;
   //   }

   cout << dq.at(1) << endl;

   cout << dq.size() << endl;
   dq.clear();
   cout << dq.size() << endl;

   //insert 
   dq.insert(dq.begin(),10);
   cout << dq.at(0) << endl;

   dq.erase(dq.begin(),dq.end());
   cout << dq.size() << endl;


    return 0;
}