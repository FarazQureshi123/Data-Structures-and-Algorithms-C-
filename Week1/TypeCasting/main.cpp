#include<iostream>
using namespace std;

int main(){
  // int to float
   int a = 10;
   float b = 5.5;
   int result = a + b; // 15 because the value after addition 15.5 is storing in the int
   float result2 = a + b; // 15.5 becasue the value is being stored in the same datatype in which the addition is being done
   cout << result << endl;
   cout << result2 << endl;


   // char to int 
   char ch = 'A'; // ascii value is 65 that is being stored in the ch memory block 
   int a1 = ch + 1; // 65 + 1 = 66 
   cout << a1 << endl; 


   // int to char 
   int a3 = 97;
   char ch1 = a3;
   cout << ch1 << endl; // a

 int g = 'B'; // 66
 char gg = g; // B
 cout << gg << endl; // B

 // Explicit Type Conversion
 //float to int then flaot 
  int num1 = 10;
  float num2 = 5.5;
  float result3 = num1 + (int)num2;
  cout << result3 << endl;

// double to int 
  double pi = 3.14159265;
  int intpi = (int)pi;
  cout << intpi << endl; // 3

  //float to char 
  float f = 4.1245788;
  char f4 = (char)f;
  cout << f4 << endl;

  // int to float 
  int integer1 = 12;
  float flaoting = (float)integer1;
  cout << flaoting << endl;

  int v = 10;
  int j = 3.0;
  float c = ((float)v) / f;
  cout << c << endl;





    return 0;

}