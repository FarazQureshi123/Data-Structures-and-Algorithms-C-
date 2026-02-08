#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    map<int,string> table;
    
    table.insert(make_pair(1,"India"));
    table.insert(make_pair(3,"England"));
    table.insert(make_pair(2,"Australia"));

    map<int,string>::iterator it = table.begin();
    while(it != table.end()){
        pair<int,string> p = *it;
       cout << p.first << " " << p.second << endl;  
        it++;
    }


    // unordered_map<string,string> table; 

    // //insertion
    // table["in"] = "India";
    // table.insert(make_pair("en","England"));

    // pair<string,string> p;
    // p.first = "br";
    // p.second = "brazil";    
    // table.insert(p);


    

    // // cout << table.size() << endl;
    // // table.clear();
    // // cout << table.size() << endl;


    // // if(table.empty() == true){
    // //     cout << "table is empty" << endl;
    // // }else{
    // //     cout << "table is not empty" << endl;
    // // }

    // cout << table.at("en") << endl;  // England

    // //updation
    // table.at("en") = "india2";
    // cout << table.at("en") << endl;

    // unordered_map<string,string>::iterator it = table.begin();
    // while(it != table.end()){
    //    pair<string,string> p = *it;
    //    cout << p.first << " " << p.second << endl;
    //    it++;
    // }

    // // if(table.find("in") != table.end()){
    // //     cout << "Key found" << endl;
    // // }
    // // else{
    // //     cout << "Key not found" << endl;
    // // }

    // if(table.count("im") == 0){
    //     cout << "Key not Found" << endl;
    // }
    // if(table.count("io") == 1){
    //     cout << "Key Found" << endl;
    // }
    return 0;
}
