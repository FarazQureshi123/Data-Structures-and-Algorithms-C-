#include<list>  
#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

int main(){

    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);

    list<int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);


    first.insert(first.begin(),100);

    first.erase(first.begin(),first.end());



    

    // first.swap(second);

    list<int>::iterator  it4 = first.begin();
    while(it4 != first.end()){
        cout << *it4 << endl;
        it4++;
    }

    cout << first.size();



    

    // //creation

    //  list<int> myList;

    //  //insertion
    //  myList.push_back(10);
    //  myList.push_back(20);
    //  myList.push_back(30);
    //  myList.push_back(40);
    //  myList.push_back(50);

    //  myList.pop_back(); // 10 20 30 40 
    //  myList.pop_front(); // 20 30 40 
    //  myList.push_front(100); // 100 20 30 40 

    //  list<int>::iterator it = myList.begin();
    //  while(it != myList.end()){
    //     cout << *it << endl;
    //     it++;
    //  }

     
     

    return 0;
}
