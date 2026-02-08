//Smallest Digit 
#include<limits.h>

class Solution {

public:

    int smallestDigit(int num) {

        int smallest = INT_MAX;

        while(num != 0){

            int digit = num % 10;



            //check digit is smallest or not

            // if jo new digit mere pass aya hai

            // agar wo chota hai ab tk smallest value se

            //then store this new digit

            // if(digit < smallest){

            //     smallest = digit;

            // }

            smallest = min(digit,smallest);


          num =  num / 10;

        }

        return smallest;

    }

};
 int reverseNumber(int num) {
        int ans = 0;

        while(num != 0){

            int digit = num % 10;

            ans = ans * 10 + digit;

            //num update
            num = num / 10;


             
        }

        return ans;
    }
    string isPalindrome(int num) {
      int original = num;
      int rev = reverseNumber(num);

      if (original == rev){
        return "Yes";
      }
      else {
        return "No";
      }
    }


    string isPowerOfTwo(int num) {
        if(num == 0){
            return "No";
        }
        if((num & (num-1)) == 0){
            return "Yes";
        } else {
            return "No";
        }
    }