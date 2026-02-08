#include<iostream>
#include<set>
using namespace std;

int main() {

    set<int> s;
    
    s.insert(10);
    s.insert(23);
    s.insert(20);
    s.insert(40);
    s.insert(0);
  
    set<int>::iterator it = s.begin();
    while(it != s.end()){
        cout << *it << endl;
        it++;
        }// 0 10 20 23 40
 
        if(s.count(23) == 1){
            cout << "Found" << endl;
        }
        if(s.count(23) == 0){
            cout << "not found" << endl;
        } // found


        cout << s.size() << endl;
        s.clear();
        cout << s.size() << endl;


        if(s.empty() == true){
            cout << "set is empty" << endl; 
        }else{
            cout << "Set is not empty" << endl;
        }

    return 0;
}