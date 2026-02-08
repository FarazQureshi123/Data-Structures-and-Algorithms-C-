#include<iostream>
using namespace std;

// function format in c++ is 
// returntype functionname(input parameter){
//  int totalsum = a + b;
  // return totalsum;
// }
int sum(int a, int b){
    int totalsum = a + b;
    return totalsum;
}

void print(){
    cout << "This is void function in which we dont return anything" << endl;
}

int multiplication(int x, int y, int z){
    int multiply = x * y * z;
    return multiply;

}
void printtentimes(){
    for(int i = 0; i <= 10; i++){
        cout << i << endl;
    }
}

void printMultiples(int num){
    for(int i = 1; i <= 10; i++){
        cout << num * i << endl;
    }
}

int convertIntoCelcius(int far){
    int celcius = (far-32)*5/9;
    return celcius;
}

char convertIntoUpperCase(char ch){
    char answer = ch - 'a' + 'A';
    return answer;
}


int main(){
  
    int ans = sum(10,-10);
    cout << ans << endl;

    int result = multiplication(4,4,4);
    cout << result << endl;

    int farenheits = convertIntoCelcius(100);
    cout << farenheits << endl;

    printtentimes();
    printMultiples(5);


    print();
    return 0;
}

